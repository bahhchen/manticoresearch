# Bison half of the two-state grammar handling - see cmake/grammar_archive.cmake for the whole story.
#
# MANTICORE_REGEN_GRAMMAR=OFF (default): bison is never looked for. The archived bis*.c/.h have
# already been verified and copied into ${BISON_DIR} by stage_archived_grammar(), so MY_BISON has
# nothing left to do.
# MANTICORE_REGEN_GRAMMAR=ON: the upstream on-the-fly generation, with bison required.

include ( grammar_archive )

set ( BISON_DIR "${MANTICORE_BINARY_DIR}/config" )

if (MANTICORE_REGEN_GRAMMAR)
	find_package ( BISON REQUIRED )
	set ( BIS_FLAGS "" )
	if (BISON_VERSION VERSION_GREATER 3.0)
		# the .y files use bison 2.x spelling (%pure-parser, %error-verbose) on purpose
		set ( BIS_FLAGS "-Wno-deprecated" )
	endif ()
	infomsg ( "MANTICORE_REGEN_GRAMMAR is ON - grammars will be rebuilt by ${BISON_EXECUTABLE} (${BISON_VERSION}) and archived" )
endif ()

function ( MY_BISON_ALLOWING_UNITY ParserName ParserSrc Dependency TargetBison )
	if (NOT MANTICORE_REGEN_GRAMMAR)
		return () # archived products are already staged into ${BISON_DIR}
	endif ()

	LIST ( APPEND ${TargetBison}_BISON "${ParserSrc}.y" )
	set ( ${TargetBison}_BISON ${${TargetBison}_BISON} PARENT_SCOPE )
	BISON_TARGET ( ${ParserName} "${CMAKE_CURRENT_SOURCE_DIR}/${ParserSrc}.y" "${BISON_DIR}/bis${ParserSrc}.c" COMPILE_FLAGS ${BIS_FLAGS} )
	set_source_files_properties ( ${Dependency} PROPERTIES OBJECT_DEPENDS ${BISON_${ParserName}_OUTPUT_SOURCE} )
endfunction ()

function ( MY_BISON ParserName ParserSrc Dependency TargetBison )
	if (NOT MANTICORE_REGEN_GRAMMAR)
		return () # archived products are already staged into ${BISON_DIR}
	endif ()

	LIST ( APPEND ${TargetBison}_BISON "${ParserSrc}.y" )
	set ( ${TargetBison}_BISON ${${TargetBison}_BISON} PARENT_SCOPE )
	BISON_TARGET ( ${ParserName} "${CMAKE_CURRENT_SOURCE_DIR}/${ParserSrc}.y" "${BISON_DIR}/bis${ParserSrc}.c" COMPILE_FLAGS ${BIS_FLAGS} )
	set_source_files_properties ( ${Dependency} PROPERTIES OBJECT_DEPENDS ${BISON_${ParserName}_OUTPUT_SOURCE} SKIP_UNITY_BUILD_INCLUSION ON )
endfunction ()
