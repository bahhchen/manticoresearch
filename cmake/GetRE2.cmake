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
# This file needs to get RE2 library sources.
#
# Offline build: sources come from ${MANTICORE_DEPS_DIR}/re2, nothing is downloaded and nothing is
# patched at configure time. The files libre2.patch used to produce are stored pre-patched in
# libre2/patched/ and are simply copied over the staged source tree, so neither git nor patch is
# needed on the build machine. When the pinned RE2 revision changes, regenerate libre2/patched/ by
# applying libre2/libre2.patch to the new sources.
#
# Upstream origin (kept for version upgrades): https://github.com/manticoresoftware/re2, tag 2015-06-01

cmake_minimum_required ( VERSION 3.17 FATAL_ERROR )
include ( local_deps )

# if it is allowed to use system library - try to use it
if (NOT WITH_RE2_FORCE_STATIC)
	find_package ( re2 MODULE QUIET )
	return_if_target_found ( re2::re2 "as default (sys or other) lib" )
endif ()

# determine destination folder where we expect pre-built re2
find_package ( re2 QUIET CONFIG )
return_if_target_found ( re2::re2 "found ready (no need to build)" )

# cb to finalize RE2 sources (drop in pre-patched files and our cmake)
function ( PREPARE_RE2 OUTVAR )
	resolve_local_src ( re2 _re2_orig )
	stage_local_src ( re2 "${_re2_orig}" _re2_src )

	set ( _patched "${MANTICORE_SOURCE_DIR}/libre2/patched" )
	if (NOT IS_DIRECTORY "${_patched}")
		message ( FATAL_ERROR "Pre-patched RE2 sources are missing: ${_patched}" )
	endif ()
	file ( COPY "${_patched}/" DESTINATION "${_re2_src}" )

	configure_file ( "${MANTICORE_SOURCE_DIR}/libre2/CMakeLists.txt" "${_re2_src}/CMakeLists.txt" COPYONLY )
	set ( ${OUTVAR} "${_re2_src}" PARENT_SCOPE )
endfunction ()

# prepare sources
prepare_re2 ( RE2_SRC )

# build
get_build ( RE2_BUILD re2 )
reset_stale_external_build ( re2 "${RE2_BUILD}" )
external_build ( re2 RE2_SRC RE2_BUILD )

# now it should find
find_package ( re2 REQUIRED CONFIG )
return_if_target_found ( re2::re2 "was built" )
