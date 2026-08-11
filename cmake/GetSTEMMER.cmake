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
# This file needs to get libstemmer sources.
#
# Offline build: sources come from ${MANTICORE_DEPS_DIR}/snowball, nothing is downloaded. The tree
# is staged aside because our own CMakeLists.txt has to be dropped into it.
#
# Upstream origin (kept for version upgrades): https://github.com/manticoresoftware/snowball, v3.0.3

cmake_minimum_required ( VERSION 3.17 FATAL_ERROR )
include ( local_deps )

# if it is allowed to use system library - try to use it
if (NOT WITH_STEMMER_FORCE_STATIC)
	find_package ( stemmer MODULE QUIET )
	return_if_target_found ( stemmer::stemmer "as default (sys or other)" )
endif ()

# determine destination folder where we expect pre-built stemmer
find_package ( stemmer CONFIG )
return_if_target_found ( stemmer::stemmer "ready (no need to build)" )

# not found. Take local sources, staged aside so that the deps folder stays pristine
resolve_local_src ( stemmer STEMMER_ORIG )
stage_local_src ( stemmer "${STEMMER_ORIG}" STEMMER_SRC )
configure_file ( "${MANTICORE_SOURCE_DIR}/libstemmer_c/CMakeLists.txt" "${STEMMER_SRC}/CMakeLists.txt" COPYONLY )

# build external project
get_build ( STEMMER_BUILD stemmer )
reset_stale_external_build ( stemmer "${STEMMER_BUILD}" )
external_build ( stemmer STEMMER_SRC STEMMER_BUILD )

# now it should find
find_package ( stemmer REQUIRED CONFIG )
return_if_target_found ( stemmer::stemmer "was built and saved" )
