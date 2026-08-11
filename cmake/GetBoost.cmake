cmake_minimum_required ( VERSION 3.17 FATAL_ERROR )

# Offline build: Boost is compiled from ${MANTICORE_DEPS_DIR}/boost with its own build engine (b2)
# and installed into CACHEB, so no boost-devel package, no vcpkg and no network are involved.
#
# Why b2 and not Boost's own CMake build: manticore uses a lot of header-only Boost (asio, icl,
# intrusive, process, stacktrace, archive/iterators, fiber/detail ...) and links only against
# context and filesystem. b2 installs the whole header tree plus exactly those two static libs,
# and handles the platform assembly of boost.context by itself.
#
# The build runs once - the stamp file in the install prefix short-circuits every later configure.
# Remove CACHEB (or the stamp) to force a rebuild.
#
# Upstream origin (kept for version upgrades): https://archives.boost.io/release/1.88.0/

if (__get_boost_included)
	return ()
endif ()
set ( __get_boost_included YES )

include ( local_deps )

# already provided from outside (system boost, toolchain, inverted inclusion...) - keep it
if (TARGET Boost::context)
	return ()
endif ()

resolve_local_src ( boost BOOST_SRC )
get_build ( BOOST_BUILD boost )

set ( BOOST_STAMP "${BOOST_BUILD}/.manticore_boost.stamp" )

if (NOT EXISTS "${BOOST_STAMP}")
	include ( ProcessorCount )
	processorcount ( _nproc )
	if (_nproc EQUAL 0)
		set ( _nproc 1 )
	endif ()

	if (WIN32)
		# execute_process cannot start a .bat directly - it has to go through the shell
		set ( _bootstrap cmd /c "${BOOST_SRC}/bootstrap.bat" )
		set ( _b2 "${BOOST_SRC}/b2.exe" )
		# both configs are needed - manticore links debug boost into its debug build on msvc
		set ( _layout --layout=versioned )
		set ( _variant variant=debug,release address-model=64 )
	else ()
		set ( _bootstrap "${BOOST_SRC}/bootstrap.sh" )
		set ( _b2 "${BOOST_SRC}/b2" )
		set ( _layout --layout=system )
		set ( _variant variant=release )
	endif ()

	if (NOT EXISTS "${_b2}")
		message ( STATUS "Bootstrapping Boost build engine in ${BOOST_SRC}" )
		execute_process ( COMMAND ${_bootstrap} WORKING_DIRECTORY "${BOOST_SRC}" RESULT_VARIABLE _res )
		if (NOT _res EQUAL 0)
			message ( FATAL_ERROR "Boost bootstrap failed (${_res}). Sources: ${BOOST_SRC}" )
		endif ()
	endif ()

	# modular (git) boost keeps the includes scattered over libs/*/include - this gathers them
	if (NOT EXISTS "${BOOST_SRC}/boost/version.hpp")
		message ( STATUS "Collecting Boost headers (b2 headers)" )
		execute_process ( COMMAND "${_b2}" headers WORKING_DIRECTORY "${BOOST_SRC}" RESULT_VARIABLE _res )
		if (NOT _res EQUAL 0)
			message ( FATAL_ERROR "'b2 headers' failed (${_res}). Sources: ${BOOST_SRC}" )
		endif ()
	endif ()

	message ( STATUS "Building Boost (context, filesystem) into ${BOOST_BUILD}, this happens only once" )
	execute_process ( COMMAND "${_b2}"
			"--build-dir=${BOOST_BUILD}/b2work"
			"--prefix=${BOOST_BUILD}"
			${_layout}
			--with-context --with-filesystem
			link=static runtime-link=shared threading=multi cxxstd=17
			${_variant}
			-j${_nproc}
			install
			WORKING_DIRECTORY "${BOOST_SRC}" RESULT_VARIABLE _res )
	if (NOT _res EQUAL 0)
		message ( FATAL_ERROR "Boost build failed (${_res}). Sources: ${BOOST_SRC}, prefix: ${BOOST_BUILD}" )
	endif ()

	file ( WRITE "${BOOST_STAMP}" "${BOOST_SRC}" )
endif ()

# point find_package at our install only - never at the system
set ( BOOST_ROOT "${BOOST_BUILD}" )
set ( Boost_NO_SYSTEM_PATHS ON )
set ( Boost_NO_BOOST_CMAKE OFF )

file ( GLOB _boost_cfg LIST_DIRECTORIES true "${BOOST_BUILD}/lib/cmake/Boost-*" )
if (_boost_cfg)
	list ( GET _boost_cfg 0 Boost_DIR )
	diags ( "Boost config package: ${Boost_DIR}" )
else ()
	message ( WARNING "No BoostConfig.cmake under ${BOOST_BUILD}/lib/cmake - falling back to module mode" )
endif ()
