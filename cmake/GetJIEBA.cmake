#=============================================================================
# Copyright 2017-2026, Manticore Software LTD (https://manticoresearch.com)
#
# Distributed under the OSI-approved BSD License (the "License");
# see accompanying file Copyright.txt for details.
#
# This software is distributed WITHOUT ANY WARRANTY; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# See the License for more information.
#=============================================================================
# Offline build: sources come from ${MANTICORE_DEPS_DIR}/cppjieba, nothing is downloaded.
# cppjieba's own CMakeLists pulls limonp via FetchContent - we redirect that to the nested
# deps/limonp folder and cut the network off with FETCHCONTENT_FULLY_DISCONNECTED.
#
# Upstream origins (kept for version upgrades):
#   https://github.com/manticoresoftware/cppjieba, commit 0fa3cb07
#   https://github.com/yanyiwu/limonp, v0.9.0 (nested submodule deps/limonp)

cmake_minimum_required ( VERSION 3.17 FATAL_ERROR )
include ( local_deps )

# helpers
function ( install_jiebadicts DEST )
	if (NOT TARGET jieba::jiebadict)
		return ()
	endif ()
	get_target_property ( JIEBA_DICTS jieba::jiebadict INTERFACE_SOURCES )
	diag ( JIEBA_DICTS )
	install ( DIRECTORY ${JIEBA_DICTS}/ DESTINATION "${DEST}" COMPONENT jiebadicts )
endfunction ()

# determine destination folder where we expect ready jieba and dict
find_package ( jieba QUIET CONFIG )
if (TARGET jieba::jieba AND TARGET jieba::jiebadict)
	diagst ( jieba::jieba "found ready (no need to build)" )
	return ()
endif ()

# not found. Take local sources. Nothing mutates them, so no staging is needed here.
resolve_local_src ( jieba JIEBA_SRC )

# limonp is consumed by cppjieba through FetchContent as 'limunp'. Its CMakeLists installs the
# headers from ${FETCHCONTENT_BASE_DIR}/limunp-src, so the local copy has to sit exactly there.
resolve_local_src ( limonp LIMONP_SRC )
set ( JIEBA_FC_BASE "${MANTICORE_DEPS_STAGE}/jieba-fc" )
file ( COPY "${LIMONP_SRC}/" DESTINATION "${JIEBA_FC_BASE}/limunp-src" PATTERN ".git" EXCLUDE )

# build external project
get_build ( JIEBA_BUILD jieba )
reset_stale_external_build ( jieba "${JIEBA_BUILD}" )
external_build ( jieba JIEBA_SRC JIEBA_BUILD NO_BUILD=1
		FETCHCONTENT_BASE_DIR=${JIEBA_FC_BASE}
		FETCHCONTENT_SOURCE_DIR_LIMUNP=${JIEBA_FC_BASE}/limunp-src
		FETCHCONTENT_FULLY_DISCONNECTED=ON )

# now it should find
find_package ( jieba REQUIRED CONFIG )
return_if_target_found ( jieba::jieba "was built and saved" )