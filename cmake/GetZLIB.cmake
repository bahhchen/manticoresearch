cmake_minimum_required ( VERSION 3.17 FATAL_ERROR )

# Offline build: zlib is compiled statically from ${MANTICORE_DEPS_DIR}/zlib into CACHEB and exposed
# as the ZLIB::ZLIB imported target. zlib ships no cmake config package, so the target is written by
# hand here - that also keeps with_menu(ZLIB ...) from ever calling find_package and picking up a
# system libz (see helpers.cmake, the 'target already exists' branch).
#
# Note: zlib's own CMakeLists renames zconf.h inside the source tree, which is why the sources are
# staged into CACHEB first.
#
# Upstream origin (kept for version upgrades): https://github.com/madler/zlib, v1.3.1

if (TARGET ZLIB::ZLIB)
	return ()
endif ()

include ( local_deps )

resolve_local_src ( zlib ZLIB_ORIG )
stage_local_src ( zlib "${ZLIB_ORIG}" ZLIB_SRC )

get_build ( ZLIB_BUILD zlib )
reset_stale_external_build ( zlib "${ZLIB_BUILD}" )
if (NOT EXISTS "${ZLIB_BUILD}/include/zlib.h")
	# CMAKE_INSTALL_PREFIX must be passed at configure time: unlike the other dependencies, zlib
	# bakes *absolute* install destinations (INSTALL_LIB_DIR & co, all CACHE PATH derived from
	# CMAKE_INSTALL_PREFIX) into its install rules, and `cmake --install --prefix` cannot override
	# an absolute DESTINATION. Without this everything lands in the default prefix
	# (C:/Program Files (x86)/zlib, /usr/local) and CACHEB stays empty.
	# Note: external_build passes these through unquoted, so the path must not contain spaces.
	external_build ( zlib ZLIB_SRC ZLIB_BUILD BUILD_SHARED_LIBS=0 ZLIB_BUILD_EXAMPLES=0 CMAKE_INSTALL_PREFIX=${ZLIB_BUILD} )
endif ()

find_library ( ZLIB_STATIC_LIBRARY NAMES z zlibstatic zlib PATHS "${ZLIB_BUILD}/lib" NO_DEFAULT_PATH )
find_library ( ZLIB_STATIC_LIBRARY_DEBUG NAMES zlibstaticd zlibd PATHS "${ZLIB_BUILD}/lib" NO_DEFAULT_PATH )
mark_as_advanced ( ZLIB_STATIC_LIBRARY ZLIB_STATIC_LIBRARY_DEBUG )

if (NOT ZLIB_STATIC_LIBRARY)
	message ( FATAL_ERROR "zlib was built into ${ZLIB_BUILD}, but no static library found there.\n"
			"Set WITH_ZLIB=0 if HTTP gzip support is not needed." )
endif ()

add_library ( ZLIB::ZLIB STATIC IMPORTED GLOBAL )
set_target_properties ( ZLIB::ZLIB PROPERTIES
		IMPORTED_LOCATION "${ZLIB_STATIC_LIBRARY}"
		INTERFACE_INCLUDE_DIRECTORIES "${ZLIB_BUILD}/include" )

if (ZLIB_STATIC_LIBRARY_DEBUG)
	set_target_properties ( ZLIB::ZLIB PROPERTIES IMPORTED_LOCATION_DEBUG "${ZLIB_STATIC_LIBRARY_DEBUG}" )
endif ()

set ( ZLIB_FOUND TRUE )
set ( ZLIB_LIBRARIES ZLIB::ZLIB )
set ( ZLIB_INCLUDE_DIRS "${ZLIB_BUILD}/include" )

diagst ( ZLIB::ZLIB "was built from local sources" )
