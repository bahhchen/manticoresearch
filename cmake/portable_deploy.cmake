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
# Install-less, relocatable deployment of the daemon for the search-service product.
#
# The product is shipped by copying a single directory: no 'cmake --install', no /etc, no
# /var, no registry lookup. Everything the daemon needs at run time (config, data dir, logs,
# pid file, icu/jieba/stopwords/tzdata) is addressed relative to the directory it is started
# from, so the tree can be moved anywhere.
#
# Inputs (plain variables, set by the including project before add_subdirectory, or -D):
#   MANTICORE_SEARCHD_NAME         file name of the daemon executable, default 'searchd'.
#                                  The search-service build renames it so a deployment can
#                                  never collide with a stock searchd already running on the
#                                  same host (different file name, different ps entry).
#   MANTICORE_PORTABLE_DEPLOY_DIR  directory the daemon and its share/ tree are copied into
#                                  after the build. Empty (default) = build only, copy nothing;
#                                  the upstream install rules stay untouched in that case.
#                                  May contain generator expressions.
#   MANTICORE_PORTABLE_SHARE_DIR   value compiled into FULL_SHARE_DIR, relative on purpose:
#                                  'share' resolves to <daemon working dir>/share. The
#                                  FULL_SHARE_DIR environment variable still wins at run time
#                                  (see GET_FULL_SHARE_DIR in src/std/env.cpp).
#
# Two entry points, called from two different scopes:
#   - this file itself must be included after the install-dir block of the top-level
#     CMakeLists (it overrides FULL_SHARE_DIR) and before src/ generates config.h;
#   - manticore_portable_deploy_searchd() must be called from src/CMakeLists.txt, because
#     add_custom_command(TARGET ...) only works in the scope that defines the target.

if (__portable_deploy_included)
	return ()
endif ()
set ( __portable_deploy_included YES )

if (NOT DEFINED MANTICORE_SEARCHD_NAME)
	set ( MANTICORE_SEARCHD_NAME "searchd" )
endif ()
if (NOT DEFINED MANTICORE_PORTABLE_DEPLOY_DIR)
	set ( MANTICORE_PORTABLE_DEPLOY_DIR "" )
endif ()
if (NOT DEFINED MANTICORE_PORTABLE_SHARE_DIR)
	set ( MANTICORE_PORTABLE_SHARE_DIR "share" )
endif ()

if (MANTICORE_PORTABLE_DEPLOY_DIR)
	# GET_FULL_SHARE_DIR() hands this string to the callers as is, so a relative value keeps
	# icu data, jieba dicts, stopwords and tzdata addressed from the working directory instead
	# of a compiled-in absolute path like /usr/share/manticore.
	set ( FULL_SHARE_DIR "${MANTICORE_PORTABLE_SHARE_DIR}" )
	message ( STATUS "portable deploy: '${MANTICORE_SEARCHD_NAME}' + ${FULL_SHARE_DIR}/ -> ${MANTICORE_PORTABLE_DEPLOY_DIR}" )
endif ()

# Rename the daemon and copy it together with its runtime data into the deployment directory.
# Call from the scope that defines the searchd target.
function ( manticore_portable_deploy_searchd )
	if (NOT TARGET searchd)
		return ()
	endif ()

	set_target_properties ( searchd PROPERTIES OUTPUT_NAME "${MANTICORE_SEARCHD_NAME}" )

	if (NOT MANTICORE_PORTABLE_DEPLOY_DIR)
		return ()
	endif ()

	set ( _deploy "${MANTICORE_PORTABLE_DEPLOY_DIR}" )
	set ( _share "${_deploy}/${MANTICORE_PORTABLE_SHARE_DIR}" )

	# copy_directory rewrites everything on every build; the jieba dicts are ~10M, so use the
	# comparing variant where the cmake in use has it.
	if (CMAKE_VERSION VERSION_GREATER_EQUAL 3.26)
		set ( _copy_dir copy_directory_if_different )
	else ()
		set ( _copy_dir copy_directory )
	endif ()

	add_custom_command ( TARGET searchd POST_BUILD
			COMMAND ${CMAKE_COMMAND} -E make_directory "${_deploy}"
			COMMAND ${CMAKE_COMMAND} -E copy_if_different "$<TARGET_FILE:searchd>" "${_deploy}/"
			COMMENT "Deploying ${MANTICORE_SEARCHD_NAME} to ${_deploy}"
			VERBATIM )

	# Runtime data. The daemon starts without it, but Chinese segmentation (icu / jieba), the
	# bundled stopword lists and timezone-aware date functions would silently stop working.
	if (TARGET icu::icudata)
		get_target_property ( _icu_data icu::icudata INTERFACE_SOURCES )
		add_custom_command ( TARGET searchd POST_BUILD
				COMMAND ${CMAKE_COMMAND} -E make_directory "${_share}/icu"
				COMMAND ${CMAKE_COMMAND} -E copy_if_different ${_icu_data} "${_share}/icu/"
				VERBATIM )
	endif ()

	if (TARGET jieba::jiebadict)
		get_target_property ( _jieba_dict jieba::jiebadict INTERFACE_SOURCES )
		add_custom_command ( TARGET searchd POST_BUILD
				COMMAND ${CMAKE_COMMAND} -E ${_copy_dir} "${_jieba_dict}" "${_share}/jieba"
				VERBATIM )
	endif ()

	foreach (_data stopwords tzdata)
		if (EXISTS "${MANTICORE_SOURCE_DIR}/misc/${_data}")
			add_custom_command ( TARGET searchd POST_BUILD
					COMMAND ${CMAKE_COMMAND} -E ${_copy_dir} "${MANTICORE_SOURCE_DIR}/misc/${_data}" "${_share}/${_data}"
					VERBATIM )
		endif ()
	endforeach ()
endfunction ()
