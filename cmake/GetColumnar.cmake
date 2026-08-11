include ( local_deps )

# Offline build: the columnar API headers are taken directly from ${MANTICORE_DEPS_DIR}/columnar.
#
# Manticore never builds nor links with columnar - the only thing it needs is a handful of interface
# headers (columnar/columnar.h, secondary/secondary.h, knn/knn.h, util/util.h and the common/ headers
# they pull in). Upstream obtained them by git-cloning columnar and running a nested cmake install
# with -DAPI_ONLY=ON, which only copies those headers around. Here the three INTERFACE targets are
# declared straight on the source tree instead, so there is no clone, no nested configure and no
# find_package involved.
#
# How to perform a version update (check-list):
# --------- On columnar side ------------
# 1. Change the value of the constant LIB_VERSION in the corresponding header (e.g. secondary/secondary.h)
# 2. Commit, publish and tag as 'c<columnar>-s<secondary>-k<knn>'
# --------- On manticore side ------------
# 1. Move the deps/columnar submodule to that tag
# 2. Fix NEED_COLUMNAR_API / NEED_SECONDARY_API / NEED_KNN_API below accordingly
# The check right after reading the headers replaces the old `find_package(... EXACT)` guard: a
# mismatch between the numbers below and the sources in deps/ fails the configure.
#
# Upstream origin (kept for version upgrades): https://github.com/manticoresoftware/columnar, tag c27-s19-k9 (mcl 10.2.0)

# Versions of API headers we are need to build with.
set ( NEED_COLUMNAR_API 27 )
set ( NEED_SECONDARY_API 19 )
set ( NEED_KNN_API 9 )

# Actual usage of columnar is solely defined by availability of the modules named below. They are
# built separately outside of manticore and loaded at runtime from MANTICORE_MODULES.
if (WIN32)
	set ( EXTENSION dll )
else ()
	set ( EXTENSION so )
endif ()

set ( LIB_MANTICORE_COLUMNAR "lib_manticore_columnar.${EXTENSION}" )
set ( LIB_MANTICORE_SECONDARY "lib_manticore_secondary.${EXTENSION}" )
set ( LIB_MANTICORE_KNN "lib_manticore_knn.${EXTENSION}" )
set ( LIB_MANTICORE_KNN_EMBEDDINGS "lib_manticore_knn_embeddings.${EXTENSION}" )

# Columnar might be already provided by inverted inclusion - i.e. when sources of manticore included as testing tool into columnar's sources
if (TARGET columnar::columnar_api)
	message ( STATUS "Columnar is already defined, skip." )
	return ()
endif ()

# reads 'static const int LIB_VERSION = N;' from an API header and compares it with what we need
function ( check_api_version HEADER EXPECTED WHAT )
	if (NOT EXISTS "${HEADER}")
		message ( FATAL_ERROR "Columnar ${WHAT} API header is missing: ${HEADER}" )
	endif ()
	file ( STRINGS "${HEADER}" _line REGEX "static const int[ \t]+LIB_VERSION[ \t]*=" LIMIT_COUNT 1 )
	if (NOT _line)
		message ( FATAL_ERROR "Cannot read LIB_VERSION of columnar ${WHAT} API from ${HEADER}" )
	endif ()
	string ( REGEX MATCH "[0-9]+" _found "${_line}" )
	if (NOT _found STREQUAL "${EXPECTED}")
		message ( FATAL_ERROR
				"Columnar ${WHAT} API version mismatch: manticore needs ${EXPECTED}, "
				"${HEADER} provides ${_found}.\n"
				"Move the deps/columnar submodule to tag c${NEED_COLUMNAR_API}-s${NEED_SECONDARY_API}-k${NEED_KNN_API}." )
	endif ()
endfunction ()

resolve_local_src ( columnar COLUMNAR_SRC )

check_api_version ( "${COLUMNAR_SRC}/columnar/columnar.h" ${NEED_COLUMNAR_API} columnar )
check_api_version ( "${COLUMNAR_SRC}/secondary/secondary.h" ${NEED_SECONDARY_API} secondary )
check_api_version ( "${COLUMNAR_SRC}/knn/knn.h" ${NEED_KNN_API} knn )

# headers are included as 'columnar/columnar.h', 'util/util.h', etc., so the source root is the include dir
add_library ( columnar::columnar_api INTERFACE IMPORTED GLOBAL )
set_target_properties ( columnar::columnar_api PROPERTIES INTERFACE_INCLUDE_DIRECTORIES "${COLUMNAR_SRC}" )

add_library ( columnar::knn_api INTERFACE IMPORTED GLOBAL )
set_target_properties ( columnar::knn_api PROPERTIES INTERFACE_INCLUDE_DIRECTORIES "${COLUMNAR_SRC}" )

add_library ( columnar::secondary_api INTERFACE IMPORTED GLOBAL )
set_target_properties ( columnar::secondary_api PROPERTIES
		INTERFACE_INCLUDE_DIRECTORIES "${COLUMNAR_SRC}"
		INTERFACE_LINK_LIBRARIES "columnar::columnar_api;columnar::knn_api" )

include ( FeatureSummary )
set_package_properties ( columnar PROPERTIES TYPE RUNTIME
		DESCRIPTION "a column-oriented storage library with a low memory footprint, designed to handle large volumes of data, a secondary index library, and a k-nearest neighbor search library"
		URL "https://github.com/manticoresoftware/columnar/"
		)

message ( STATUS "Columnar API headers (c${NEED_COLUMNAR_API}-s${NEED_SECONDARY_API}-k${NEED_KNN_API}) taken from ${COLUMNAR_SRC}" )
trace ( columnar::columnar_api )
trace ( columnar::secondary_api )
trace ( columnar::knn_api )
