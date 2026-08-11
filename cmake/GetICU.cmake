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
# Offline build: sources come from ${MANTICORE_DEPS_DIR}/icu/icu4c, nothing is downloaded.
# Upstream origin (kept for version upgrades): https://github.com/unicode-org/icu, release-65-1

cmake_minimum_required ( VERSION 3.17 FATAL_ERROR )
include ( local_deps )

# Prepare a build-ready ICU source tree: only the three parts libicu/CMakeLists.txt refers to are
# staged (source/common, source/stubdata, source/data/in), then our CMakeLists is dropped in.
# The packaged data file is mandatory - Chinese segmentation is unusable without it, and the git
# checkout of ICU (unlike the release tarball) does not carry it.
function ( prepare_icu_src OUTVAR )
	resolve_local_src ( icu _icu_orig )

	file ( GLOB _icu_dat "${_icu_orig}/source/data/in/icu*.dat" )
	if (NOT _icu_dat)
		message ( FATAL_ERROR
				"ICU data package is missing: ${_icu_orig}/source/data/in/icu*.dat\n"
				"A git checkout of unicode-org/icu does not contain it - take icudt65l.dat from the "
				"release tarball icu4c-65_1-src.tgz (source/data/in/) and put it there.\n"
				"Without it ICU cannot be built and Chinese segmentation would not work." )
	endif ()

	stage_local_src ( icu "${_icu_orig}" _icu_src SUBDIRS source/common source/stubdata source/data/in )
	configure_file ( "${MANTICORE_SOURCE_DIR}/libicu/CMakeLists.txt" "${_icu_src}/CMakeLists.txt" COPYONLY )
	set ( ${OUTVAR} "${_icu_src}" PARENT_SCOPE )
endfunction ()

# helpers
function ( install_icudata DEST )
	if (NOT TARGET icu::icudata)
		return ()
	endif ()
	get_target_property ( ICU_DATA icu::icudata INTERFACE_SOURCES )
	diag ( ICU_DATA )
	install ( FILES ${ICU_DATA} DESTINATION "${DEST}" COMPONENT icudata )
endfunction ()

# if it is allowed to use system library - try to use it
if (NOT WITH_ICU_FORCE_STATIC)
	find_package ( ICU MODULE QUIET COMPONENTS uc )
	if (ICU_UC_FOUND)
		add_library ( icu::icu ALIAS ICU::uc )
	endif ()
	return_if_target_found ( icu::icu "as default (sys or other)" )
endif ()

if (WITH_ICU_FORCE_BUILD) # special case for static binary
	prepare_icu_src ( ICU_SRC )
	message ( STATUS "Build icu from sources since we want special build for static release" )
	set ( ICU_BUILD "${MANTICORE_BINARY_DIR}/icu-build-static-force" )
	external_build ( icu ICU_SRC ICU_BUILD "STATIC_BUILD=ON" )
	find_package ( icu REQUIRED CONFIG PATHS "${ICU_BUILD}" )
	trace ( icu::icu )
	return_if_target_found ( icu::icu "was built and saved" )
endif ()

# determine destination folder where we expect pre-built icu
find_package ( icu QUIET CONFIG )
return_if_target_found ( icu::icu "ready (no need to build)" )

# not found. Take local sources
prepare_icu_src ( ICU_SRC )

# build external project
get_build ( ICU_BUILD icu )
reset_stale_external_build ( icu "${ICU_BUILD}" )
external_build ( icu ICU_SRC ICU_BUILD )

# now it should find
find_package ( icu REQUIRED CONFIG )
return_if_target_found ( icu::icu "was built and saved" )
