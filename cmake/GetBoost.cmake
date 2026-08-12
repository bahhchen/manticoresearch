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

# deps/boost (boostorg/boost) is a superproject with ~150 nested submodules of its own
# (tools/build, libs/context, libs/filesystem, ...). Two unrelated things produce the same
# symptom here (files missing under BOOST_SRC), so the message below covers both:
#   1. A shallow `git submodule update --init` (no --recursive) leaves the nested submodules as
#      empty directories.
#   2. Building on a remote synced from this tree (e.g. Visual Studio's remote CMake / rsync):
#      VS syncs incrementally based on changes it tracked itself, and content produced by a plain
#      `git submodule update` on the command line was never part of that tracked set, so it can
#      stay unsynced indefinitely even though it exists locally. This is a known, unresolved gap
#      in VS's remote sync, not something this script can detect from here - if the sources ARE
#      complete on the machine this configure runs on, that is almost certainly the cause.
if (NOT EXISTS "${BOOST_SRC}/tools/build/src/engine/build.sh"
		OR NOT EXISTS "${BOOST_SRC}/libs/context/src"
		OR NOT EXISTS "${BOOST_SRC}/libs/filesystem/src")
	message ( FATAL_ERROR
			"Boost sources at ${BOOST_SRC} look incomplete - nested submodules "
			"(tools/build, libs/context, libs/filesystem, ...) are not checked out.\n"
			"If this machine has no direct git checkout of the repo (e.g. it is a Visual Studio "
			"remote CMake target synced from another machine via rsync): the sync most likely "
			"skipped these files because they were never part of VS's tracked change set - force "
			"a full resync (or clean the remote source folder and let VS resync from scratch), or "
			"keep this dependency out of the synced tree entirely via "
			"-DMANTICORE_DEPS_DIR=<path already populated directly on this machine>.\n"
			"If this IS the machine you run 'git submodule update' on, run from the repository root:\n"
			"    git submodule update --init --recursive\n"
			"This needs network access once to fetch boostorg's ~150 nested repos; "
			"the build itself stays offline." )
endif ()

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
