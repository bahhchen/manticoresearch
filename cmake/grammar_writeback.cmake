# Script-mode helper of grammar_archive.cmake (MANTICORE_REGEN_GRAMMAR=ON only).
#
# Copies the bison/flex products just generated into ${BIN_CONFIG} back into the archive folder
# ${GRAMMAR_DIR} and rewrites the hash manifest of the .y/.l sources they were produced from.
# Generation and archive update are therefore always one operation - no manual copying step that
# could be forgotten.
#
# Invoked as:
#   cmake -DSRC_DIR=.. -DBIN_CONFIG=.. -DGRAMMAR_DIR=.. -DMANIFEST_NAME=..
#         -DBISON_LIST=a,b,c -DFLEX_LIST=a,b,c -P grammar_writeback.cmake

foreach (_var SRC_DIR BIN_CONFIG GRAMMAR_DIR MANIFEST_NAME BISON_LIST FLEX_LIST)
	if (NOT DEFINED ${_var})
		message ( FATAL_ERROR "grammar_writeback: ${_var} is not set" )
	endif ()
endforeach ()

string ( REPLACE "," ";" BISON_GRAMMARS "${BISON_LIST}" )
string ( REPLACE "," ";" FLEX_LEXERS "${FLEX_LIST}" )

file ( MAKE_DIRECTORY "${GRAMMAR_DIR}" )

set ( _products "" )
set ( _sources "" )
foreach (_g ${BISON_GRAMMARS})
	list ( APPEND _products "bis${_g}.c" "bis${_g}.h" )
	list ( APPEND _sources "${_g}.y" )
endforeach ()
foreach (_l ${FLEX_LEXERS})
	list ( APPEND _products "flex${_l}.c" )
	list ( APPEND _sources "${_l}.l" )
endforeach ()

foreach (_f ${_products})
	if (NOT EXISTS "${BIN_CONFIG}/${_f}")
		message ( FATAL_ERROR "grammar_writeback: generated product ${BIN_CONFIG}/${_f} not found - was the build complete?" )
	endif ()
	configure_file ( "${BIN_CONFIG}/${_f}" "${GRAMMAR_DIR}/${_f}" COPYONLY )
endforeach ()

set ( _manifest_body "# sha256 of the bison/flex sources the archived products were generated from\n" )
foreach (_src ${_sources})
	if (NOT EXISTS "${SRC_DIR}/${_src}")
		message ( FATAL_ERROR "grammar_writeback: grammar source ${SRC_DIR}/${_src} not found" )
	endif ()
	file ( SHA256 "${SRC_DIR}/${_src}" _hash )
	string ( APPEND _manifest_body "${_hash}  ${_src}\n" )
endforeach ()

file ( WRITE "${GRAMMAR_DIR}/${MANIFEST_NAME}" "${_manifest_body}" )

message ( STATUS "grammar_writeback: archived ${_products} + ${MANIFEST_NAME} into ${GRAMMAR_DIR}" )
