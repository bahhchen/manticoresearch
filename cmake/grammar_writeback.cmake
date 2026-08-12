# Script-mode helper of grammar_archive.cmake (MANTICORE_REGEN_GRAMMAR=ON only).
#
# Copies the bison/flex products just generated into ${BIN_CONFIG} back into the archive folder
# ${GRAMMAR_DIR} and rewrites the hash manifest of the .y/.l sources they were produced from.
# Generation and archive update are therefore always one operation - no manual copying step that
# could be forgotten.
#
# NAMES/SRCS are parallel comma lists: NAMES are the bare grammar names (drive the flat product
# filenames bis<name>.c/.h, flex<name>.c), SRCS are the matching .y/.l paths relative to SRC_DIR -
# most are just "<name>.y", but a grammar built from its own subfolder (e.g. sphinxquery, under
# src/sphinxquery/) needs the longer relative path, hence the two lists instead of deriving SRCS
# from NAMES here.
#
# Invoked as:
#   cmake -DSRC_DIR=.. -DBIN_CONFIG=.. -DGRAMMAR_DIR=.. -DMANIFEST_NAME=..
#         -DBISON_NAMES=a,b,c -DBISON_SRCS=a.y,sub/b.y,c.y -DFLEX_NAMES=a,b -DFLEX_SRCS=a.l,b.l
#         -P grammar_writeback.cmake

foreach (_var SRC_DIR BIN_CONFIG GRAMMAR_DIR MANIFEST_NAME BISON_NAMES BISON_SRCS FLEX_NAMES FLEX_SRCS)
	if (NOT DEFINED ${_var})
		message ( FATAL_ERROR "grammar_writeback: ${_var} is not set" )
	endif ()
endforeach ()

string ( REPLACE "," ";" BISON_NAMES "${BISON_NAMES}" )
string ( REPLACE "," ";" BISON_SRCS "${BISON_SRCS}" )
string ( REPLACE "," ";" FLEX_NAMES "${FLEX_NAMES}" )
string ( REPLACE "," ";" FLEX_SRCS "${FLEX_SRCS}" )

file ( MAKE_DIRECTORY "${GRAMMAR_DIR}" )

set ( _products "" )
set ( _manifest_body "# sha256 of the bison/flex sources the archived products were generated from\n" )

list ( LENGTH BISON_NAMES _nb )
if (_nb GREATER 0)
	math ( EXPR _lastb "${_nb} - 1" )
	foreach (_i RANGE ${_lastb})
		list ( GET BISON_NAMES ${_i} _name )
		list ( GET BISON_SRCS ${_i} _src )
		list ( APPEND _products "bis${_name}.c" "bis${_name}.h" )

		if (NOT EXISTS "${SRC_DIR}/${_src}")
			message ( FATAL_ERROR "grammar_writeback: grammar source ${SRC_DIR}/${_src} not found" )
		endif ()
		file ( SHA256 "${SRC_DIR}/${_src}" _hash )
		string ( APPEND _manifest_body "${_hash}  ${_src}\n" )
	endforeach ()
endif ()

list ( LENGTH FLEX_NAMES _nf )
if (_nf GREATER 0)
	math ( EXPR _lastf "${_nf} - 1" )
	foreach (_i RANGE ${_lastf})
		list ( GET FLEX_NAMES ${_i} _name )
		list ( GET FLEX_SRCS ${_i} _src )
		list ( APPEND _products "flex${_name}.c" )

		if (NOT EXISTS "${SRC_DIR}/${_src}")
			message ( FATAL_ERROR "grammar_writeback: grammar source ${SRC_DIR}/${_src} not found" )
		endif ()
		file ( SHA256 "${SRC_DIR}/${_src}" _hash )
		string ( APPEND _manifest_body "${_hash}  ${_src}\n" )
	endforeach ()
endif ()

foreach (_f ${_products})
	if (NOT EXISTS "${BIN_CONFIG}/${_f}")
		message ( FATAL_ERROR "grammar_writeback: generated product ${BIN_CONFIG}/${_f} not found - was the build complete?" )
	endif ()
	configure_file ( "${BIN_CONFIG}/${_f}" "${GRAMMAR_DIR}/${_f}" COPYONLY )
endforeach ()

file ( WRITE "${GRAMMAR_DIR}/${MANIFEST_NAME}" "${_manifest_body}" )

message ( STATUS "grammar_writeback: archived ${_products} + ${MANIFEST_NAME} into ${GRAMMAR_DIR}" )
