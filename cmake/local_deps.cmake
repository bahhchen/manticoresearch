# Local (fully offline) dependency resolution for Manticore.
#
# Replaces the upstream "archive + md5 + github fallback" scheme (see update_bundle.cmake,
# select_nearest_url/fetch_and_check) with plain source directories laid out under
# ${MANTICORE_DEPS_DIR} (default ${MANTICORE_SOURCE_DIR}/deps).
#
# Nothing is downloaded, unpacked or checksummed here. A missing dependency is a hard error.
#
# Exposed API:
#   resolve_local_src ( <key> <OUTVAR> )
#       -> absolute path of the dependency source tree, FATAL_ERROR if absent/empty
#   stage_local_src ( <key> <SRC> <OUTVAR> [SUBDIRS <rel> ...] )
#       -> copy (once) the source tree into ${CACHE_BUILDS}/src/<key> so that build steps which
#          mutate sources (patching, dropping in a CMakeLists.txt, zlib renaming zconf.h) never
#          touch ${MANTICORE_DEPS_DIR}
#
# get_build() / external_build() keep coming from update_bundle.cmake - builds still go to CACHEB.

if (__local_deps_included)
	return ()
endif ()
set ( __local_deps_included YES )

include ( update_bundle )

# root of the local dependency sources
if (NOT DEFINED MANTICORE_DEPS_DIR AND DEFINED ENV{MANTICORE_DEPS_DIR})
	set ( MANTICORE_DEPS_DIR "$ENV{MANTICORE_DEPS_DIR}" )
endif ()
if (NOT MANTICORE_DEPS_DIR)
	set ( MANTICORE_DEPS_DIR "${MANTICORE_SOURCE_DIR}/deps" )
endif ()
get_filename_component ( MANTICORE_DEPS_DIR "${MANTICORE_DEPS_DIR}" ABSOLUTE )
set ( MANTICORE_DEPS_DIR "${MANTICORE_DEPS_DIR}" CACHE PATH "Folder with unpacked sources of all third-party dependencies" FORCE )

# where staged (mutable) copies of the sources live. Cached, so that it is available in every scope
# a Get*.cmake may be included from, no matter where local_deps was first pulled in.
set ( MANTICORE_DEPS_STAGE "${CACHE_BUILDS}/src" CACHE INTERNAL "Staging folder for third-party sources" )

# Dependency table. Kept inside a function on purpose - it must not depend on variable scope
# of the including directory.
# OUT_DIRS - candidate folder names inside MANTICORE_DEPS_DIR (first existing wins)
# OUT_SUB  - relative path inside that folder which actually holds the sources
# OUT_URL  - upstream origin, printed when the folder is missing
function ( _local_dep_meta KEY OUT_DIRS OUT_SUB OUT_URL )
	string ( TOLOWER "${KEY}" _key )
	set ( _dirs "${_key}" )
	set ( _sub "" )
	set ( _url "" )

	if (_key STREQUAL "cctz")
		set ( _dirs "cctz" )
		set ( _url "https://github.com/manticoresoftware/cctz (commit 8ca8e32)" )
	elseif (_key STREQUAL "xxhash")
		set ( _dirs "xxHash;xxhash" )
		set ( _url "https://github.com/manticoresoftware/xxHash (commit 72997b0)" )
	elseif (_key STREQUAL "nlohmann_json")
		set ( _dirs "nlohmann_json;nljson;json" )
		set ( _url "https://github.com/nlohmann/json (v3.12.0)" )
	elseif (_key STREQUAL "uni-algo")
		set ( _dirs "uni-algo;unialgo" )
		set ( _url "https://github.com/manticoresoftware/uni-algo (v0.7.2)" )
	elseif (_key STREQUAL "roaring")
		set ( _dirs "roaring;CRoaring;croaring" )
		set ( _url "https://github.com/RoaringBitmap/CRoaring (v4.3.2)" )
	elseif (_key STREQUAL "columnar")
		set ( _dirs "columnar" )
		set ( _url "https://github.com/manticoresoftware/columnar (tag c27-s19-k9, mcl 10.2.0)" )
	elseif (_key STREQUAL "boost")
		set ( _dirs "boost" )
		set ( _url "https://archives.boost.io/release/1.88.0/source/boost_1_88_0.tar.gz (or boostorg/boost git tree with submodules)" )
	elseif (_key STREQUAL "icu")
		set ( _dirs "icu" )
		set ( _sub "icu4c" )
		set ( _url "https://github.com/unicode-org/icu (release-65-1)" )
	elseif (_key STREQUAL "re2")
		set ( _dirs "re2" )
		set ( _url "https://github.com/manticoresoftware/re2 (tag 2015-06-01)" )
	elseif (_key STREQUAL "stemmer")
		set ( _dirs "snowball;stemmer" )
		set ( _url "https://github.com/manticoresoftware/snowball (v3.0.3)" )
	elseif (_key STREQUAL "jieba")
		set ( _dirs "cppjieba;jieba" )
		set ( _url "https://github.com/manticoresoftware/cppjieba (commit 0fa3cb07)" )
	elseif (_key STREQUAL "limonp")
		set ( _dirs "cppjieba;jieba" )
		set ( _sub "deps/limonp" )
		set ( _url "https://github.com/yanyiwu/limonp (v0.9.0), expected as a nested submodule of cppjieba" )
	elseif (_key STREQUAL "zlib")
		set ( _dirs "zlib" )
		set ( _url "https://github.com/madler/zlib (v1.3.1)" )
	endif ()

	set ( ${OUT_DIRS} "${_dirs}" PARENT_SCOPE )
	set ( ${OUT_SUB} "${_sub}" PARENT_SCOPE )
	set ( ${OUT_URL} "${_url}" PARENT_SCOPE )
endfunction ()

# resolve_local_src ( <key> <OUTVAR> )
# Returns the absolute path of the prepared source tree of the dependency, or fails the configure.
function ( resolve_local_src KEY OUTVAR )
	_local_dep_meta ( "${KEY}" _dirs _sub _url )

	set ( _tried "" )
	foreach (_dir ${_dirs})
		set ( _path "${MANTICORE_DEPS_DIR}/${_dir}" )
		if (_sub)
			set ( _path "${_path}/${_sub}" )
		endif ()
		list ( APPEND _tried "${_path}" )
		if (IS_DIRECTORY "${_path}")
			file ( GLOB _probe LIST_DIRECTORIES true "${_path}/*" )
			if (NOT _probe)
				message ( FATAL_ERROR
						"Dependency '${KEY}': folder ${_path} exists but is empty.\n"
						"If deps are git submodules run:  git submodule update --init --recursive\n"
						"Origin: ${_url}" )
			endif ()
			diags ( "${KEY} local sources: ${_path}" )
			set ( ${OUTVAR} "${_path}" PARENT_SCOPE )
			return ()
		endif ()
	endforeach ()

	string ( REPLACE ";" "\n    " _tried_str "${_tried}" )
	message ( FATAL_ERROR
			"Missing local sources of dependency '${KEY}'. Looked for:\n    ${_tried_str}\n"
			"Nothing is downloaded in offline mode - put the unpacked sources there "
			"(see documents/manticore_offline_build.md).\n"
			"Origin: ${_url}" )
endfunction ()

# stage_local_src ( <key> <SRC> <OUTVAR> [SUBDIRS <rel> ...] )
# Copies SRC (or only the listed relative subdirs of it) into ${MANTICORE_DEPS_STAGE}/<key> once.
# The copy is what gets configured/built/patched, so ${MANTICORE_DEPS_DIR} stays pristine.
# Re-staging happens only when the stamp does not match - remove CACHEB to force it.
function ( stage_local_src KEY SRC OUTVAR )
	cmake_parse_arguments ( ST "" "" "SUBDIRS" ${ARGN} )

	set ( _dst "${MANTICORE_DEPS_STAGE}/${KEY}" )
	set ( _stamp "${_dst}/.manticore_stage.stamp" )
	set ( _mark "${SRC}|${ST_SUBDIRS}" )

	set ( _have "" )
	if (EXISTS "${_stamp}")
		file ( READ "${_stamp}" _have )
	endif ()

	if (NOT _have STREQUAL _mark)
		message ( STATUS "Staging sources of ${KEY} from ${SRC}" )
		file ( REMOVE_RECURSE "${_dst}" )
		file ( MAKE_DIRECTORY "${_dst}" )
		if (ST_SUBDIRS)
			foreach (_s ${ST_SUBDIRS})
				get_filename_component ( _parent "${_s}" DIRECTORY )
				file ( COPY "${SRC}/${_s}" DESTINATION "${_dst}/${_parent}" PATTERN ".git" EXCLUDE )
			endforeach ()
		else ()
			file ( COPY "${SRC}/" DESTINATION "${_dst}" PATTERN ".git" EXCLUDE PATTERN ".github" EXCLUDE )
		endif ()
		file ( WRITE "${_stamp}" "${_mark}" )
	endif ()

	set ( ${OUTVAR} "${_dst}" PARENT_SCOPE )
endfunction ()

# reset_stale_external_build ( <module> <install-prefix> )
#
# external_build() drives a nested cmake project whose ExternalProject stamps live in the build
# tree, while the actual output is installed into CACHEB. The two can get out of sync - wipe CACHEB
# (or copy a build tree around) and the stamps still say "done", so the nested build reports
# 'ninja: no work to do', installs nothing, and the find_package right after it fails with a
# confusing "Could not find a package configuration file provided by ...".
# Dropping the stamped build folder when the install prefix is gone makes that self-healing.
function ( reset_stale_external_build MODULE PREFIX )
	set ( _nested "${CMAKE_CURRENT_BINARY_DIR}/${MODULE}-build" )
	if (EXISTS "${_nested}" AND NOT EXISTS "${PREFIX}")
		message ( STATUS "Dropping stale ${MODULE} build stamps - its install prefix ${PREFIX} is gone" )
		file ( REMOVE_RECURSE "${_nested}" )
	endif ()
endfunction ()
