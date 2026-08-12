/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"

#if _WIN32
#pragma warning(push,1)
#pragma warning(disable:4702) // unreachable code
#endif

#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wfree-nonheap-object"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#line 186 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"


// some helpers
#include <float.h> // for FLT_MAX

static CSphFilterSettings * AddMvaRange ( SqlParser_c * pParser, const SqlNode_t & tNode, int64_t iMin, int64_t iMax )
{
	CSphFilterSettings * f = pParser->AddFilter ( tNode, SPH_FILTER_RANGE );
	f->m_eMvaFunc = ( tNode.m_iType==TOK_ALL ) ? SPH_MVAFUNC_ALL : SPH_MVAFUNC_ANY;
	f->m_iMinValue = iMin;
	f->m_iMaxValue = iMax;
	return f;
}

#define TRACK_BOUNDS(_res,_left,_right) \
	_res = _left; \
	if ( _res.m_iStart>0 && pParser->m_pBuf[_res.m_iStart-1]=='`' ) \
		_res.m_iStart--; \
	_res.m_iEnd = _right.m_iEnd; \
	_res.m_iType = 0;


#line 105 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "bissphinxql.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "$end"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_IDENT = 3,                  /* "identifier"  */
  YYSYMBOL_TOK_BACKIDENT = 4,              /* "`identifier`"  */
  YYSYMBOL_TOK_ATIDENT = 5,                /* TOK_ATIDENT  */
  YYSYMBOL_TOK_CONST_INT = 6,              /* "integer"  */
  YYSYMBOL_TOK_CONST_FLOAT = 7,            /* "float"  */
  YYSYMBOL_TOK_CONST_MVA = 8,              /* TOK_CONST_MVA  */
  YYSYMBOL_TOK_QUOTED_STRING = 9,          /* "string"  */
  YYSYMBOL_TOK_NULL = 10,                  /* "null"  */
  YYSYMBOL_TOK_USERVAR = 11,               /* "@uservar"  */
  YYSYMBOL_TOK_SYSVAR = 12,                /* "@@sysvar"  */
  YYSYMBOL_TOK_CONST_STRINGS = 13,         /* TOK_CONST_STRINGS  */
  YYSYMBOL_TOK_BAD_NUMERIC = 14,           /* TOK_BAD_NUMERIC  */
  YYSYMBOL_TOK_SUBKEY = 15,                /* TOK_SUBKEY  */
  YYSYMBOL_TOK_BACKTICKED_SUBKEY = 16,     /* TOK_BACKTICKED_SUBKEY  */
  YYSYMBOL_TOK_DOT_NUMBER = 17,            /* ".number"  */
  YYSYMBOL_TOK_MANTICORE_DOT = 18,         /* "Manticore."  */
  YYSYMBOL_TOK_SYSTEM = 19,                /* "system"  */
  YYSYMBOL_TOK_AGENT = 20,                 /* TOK_AGENT  */
  YYSYMBOL_TOK_ALL = 21,                   /* TOK_ALL  */
  YYSYMBOL_TOK_ANY = 22,                   /* TOK_ANY  */
  YYSYMBOL_TOK_AS = 23,                    /* TOK_AS  */
  YYSYMBOL_TOK_ASC = 24,                   /* TOK_ASC  */
  YYSYMBOL_TOK_AVG = 25,                   /* TOK_AVG  */
  YYSYMBOL_TOK_BEGIN = 26,                 /* TOK_BEGIN  */
  YYSYMBOL_TOK_BETWEEN = 27,               /* TOK_BETWEEN  */
  YYSYMBOL_TOK_BIGINT = 28,                /* TOK_BIGINT  */
  YYSYMBOL_TOK_BY = 29,                    /* TOK_BY  */
  YYSYMBOL_TOK_CALL = 30,                  /* TOK_CALL  */
  YYSYMBOL_TOK_CHARACTER = 31,             /* TOK_CHARACTER  */
  YYSYMBOL_TOK_CHUNK = 32,                 /* TOK_CHUNK  */
  YYSYMBOL_TOK_CLUSTER = 33,               /* TOK_CLUSTER  */
  YYSYMBOL_TOK_COLLATE = 34,               /* TOK_COLLATE  */
  YYSYMBOL_TOK_COLLATION = 35,             /* TOK_COLLATION  */
  YYSYMBOL_TOK_COLUMN = 36,                /* TOK_COLUMN  */
  YYSYMBOL_TOK_COMMIT = 37,                /* TOK_COMMIT  */
  YYSYMBOL_TOK_COUNT = 38,                 /* TOK_COUNT  */
  YYSYMBOL_TOK_CREATE = 39,                /* TOK_CREATE  */
  YYSYMBOL_TOK_DATABASES = 40,             /* TOK_DATABASES  */
  YYSYMBOL_TOK_DAY = 41,                   /* TOK_DAY  */
  YYSYMBOL_TOK_DATE_ADD = 42,              /* TOK_DATE_ADD  */
  YYSYMBOL_TOK_DATE_SUB = 43,              /* TOK_DATE_SUB  */
  YYSYMBOL_TOK_DELETE = 44,                /* TOK_DELETE  */
  YYSYMBOL_TOK_DESC = 45,                  /* TOK_DESC  */
  YYSYMBOL_TOK_DESCRIBE = 46,              /* TOK_DESCRIBE  */
  YYSYMBOL_TOK_DISTINCT = 47,              /* TOK_DISTINCT  */
  YYSYMBOL_TOK_DIV = 48,                   /* TOK_DIV  */
  YYSYMBOL_TOK_DOUBLE = 49,                /* TOK_DOUBLE  */
  YYSYMBOL_TOK_EXPLAIN = 50,               /* TOK_EXPLAIN  */
  YYSYMBOL_TOK_FACET = 51,                 /* TOK_FACET  */
  YYSYMBOL_TOK_FALSE = 52,                 /* TOK_FALSE  */
  YYSYMBOL_TOK_FLOAT = 53,                 /* TOK_FLOAT  */
  YYSYMBOL_TOK_FOR = 54,                   /* TOK_FOR  */
  YYSYMBOL_TOK_FORCE = 55,                 /* TOK_FORCE  */
  YYSYMBOL_TOK_FROM = 56,                  /* TOK_FROM  */
  YYSYMBOL_TOK_FREEZE = 57,                /* TOK_FREEZE  */
  YYSYMBOL_TOK_GLOBAL = 58,                /* TOK_GLOBAL  */
  YYSYMBOL_TOK_GROUP = 59,                 /* TOK_GROUP  */
  YYSYMBOL_TOK_GROUPBY = 60,               /* TOK_GROUPBY  */
  YYSYMBOL_TOK_GROUP_CONCAT = 61,          /* TOK_GROUP_CONCAT  */
  YYSYMBOL_TOK_HAVING = 62,                /* TOK_HAVING  */
  YYSYMBOL_TOK_HINT_SECONDARY = 63,        /* TOK_HINT_SECONDARY  */
  YYSYMBOL_TOK_HINT_NO_SECONDARY = 64,     /* TOK_HINT_NO_SECONDARY  */
  YYSYMBOL_TOK_HINT_DOCID = 65,            /* TOK_HINT_DOCID  */
  YYSYMBOL_TOK_HINT_NO_DOCID = 66,         /* TOK_HINT_NO_DOCID  */
  YYSYMBOL_TOK_HINT_CLOSE = 67,            /* TOK_HINT_CLOSE  */
  YYSYMBOL_TOK_HINT_COLUMNAR = 68,         /* TOK_HINT_COLUMNAR  */
  YYSYMBOL_TOK_HINT_NO_COLUMNAR = 69,      /* TOK_HINT_NO_COLUMNAR  */
  YYSYMBOL_TOK_HINT_OPEN = 70,             /* TOK_HINT_OPEN  */
  YYSYMBOL_TOK_HOSTNAMES = 71,             /* TOK_HOSTNAMES  */
  YYSYMBOL_TOK_HOUR = 72,                  /* TOK_HOUR  */
  YYSYMBOL_TOK_IGNORE = 73,                /* TOK_IGNORE  */
  YYSYMBOL_TOK_IN = 74,                    /* TOK_IN  */
  YYSYMBOL_TOK_INDEX = 75,                 /* TOK_INDEX  */
  YYSYMBOL_TOK_INDEXES = 76,               /* TOK_INDEXES  */
  YYSYMBOL_TOK_INDEXOF = 77,               /* TOK_INDEXOF  */
  YYSYMBOL_TOK_INNER = 78,                 /* TOK_INNER  */
  YYSYMBOL_TOK_INSERT = 79,                /* TOK_INSERT  */
  YYSYMBOL_TOK_INT = 80,                   /* TOK_INT  */
  YYSYMBOL_TOK_INTERVAL = 81,              /* TOK_INTERVAL  */
  YYSYMBOL_TOK_INTEGER = 82,               /* TOK_INTEGER  */
  YYSYMBOL_TOK_INTO = 83,                  /* TOK_INTO  */
  YYSYMBOL_TOK_IS = 84,                    /* TOK_IS  */
  YYSYMBOL_TOK_JOIN = 85,                  /* TOK_JOIN  */
  YYSYMBOL_TOK_KILL = 86,                  /* TOK_KILL  */
  YYSYMBOL_TOK_KNN = 87,                   /* TOK_KNN  */
  YYSYMBOL_TOK_LEFT = 88,                  /* TOK_LEFT  */
  YYSYMBOL_TOK_LIKE = 89,                  /* TOK_LIKE  */
  YYSYMBOL_TOK_LIMIT = 90,                 /* TOK_LIMIT  */
  YYSYMBOL_TOK_LOGS = 91,                  /* TOK_LOGS  */
  YYSYMBOL_TOK_LOCKS = 92,                 /* TOK_LOCKS  */
  YYSYMBOL_TOK_MATCH = 93,                 /* TOK_MATCH  */
  YYSYMBOL_TOK_MAX = 94,                   /* TOK_MAX  */
  YYSYMBOL_TOK_META = 95,                  /* TOK_META  */
  YYSYMBOL_TOK_MIN = 96,                   /* TOK_MIN  */
  YYSYMBOL_TOK_MINUTE = 97,                /* TOK_MINUTE  */
  YYSYMBOL_TOK_MOD = 98,                   /* TOK_MOD  */
  YYSYMBOL_TOK_MONTH = 99,                 /* TOK_MONTH  */
  YYSYMBOL_TOK_MULTI = 100,                /* TOK_MULTI  */
  YYSYMBOL_TOK_MULTI64 = 101,              /* TOK_MULTI64  */
  YYSYMBOL_TOK_NAMES = 102,                /* TOK_NAMES  */
  YYSYMBOL_TOK_NOT = 103,                  /* TOK_NOT  */
  YYSYMBOL_TOK_OFFSET = 104,               /* TOK_OFFSET  */
  YYSYMBOL_TOK_ON = 105,                   /* TOK_ON  */
  YYSYMBOL_TOK_OPTION = 106,               /* TOK_OPTION  */
  YYSYMBOL_TOK_ORDER = 107,                /* TOK_ORDER  */
  YYSYMBOL_TOK_OPTIMIZE = 108,             /* TOK_OPTIMIZE  */
  YYSYMBOL_TOK_PLAN = 109,                 /* TOK_PLAN  */
  YYSYMBOL_TOK_PLUGINS = 110,              /* TOK_PLUGINS  */
  YYSYMBOL_TOK_PROFILE = 111,              /* TOK_PROFILE  */
  YYSYMBOL_TOK_QUARTER = 112,              /* TOK_QUARTER  */
  YYSYMBOL_TOK_QUERY = 113,                /* TOK_QUERY  */
  YYSYMBOL_TOK_RAND = 114,                 /* TOK_RAND  */
  YYSYMBOL_TOK_REBUILD = 115,              /* TOK_REBUILD  */
  YYSYMBOL_TOK_REGEX = 116,                /* TOK_REGEX  */
  YYSYMBOL_TOK_RELOAD = 117,               /* TOK_RELOAD  */
  YYSYMBOL_TOK_REPLACE = 118,              /* TOK_REPLACE  */
  YYSYMBOL_TOK_REMAP = 119,                /* TOK_REMAP  */
  YYSYMBOL_TOK_ROLLBACK = 120,             /* TOK_ROLLBACK  */
  YYSYMBOL_TOK_SCROLL = 121,               /* TOK_SCROLL  */
  YYSYMBOL_TOK_SECOND = 122,               /* TOK_SECOND  */
  YYSYMBOL_TOK_SECONDARY = 123,            /* TOK_SECONDARY  */
  YYSYMBOL_TOK_SELECT = 124,               /* TOK_SELECT  */
  YYSYMBOL_TOK_SET = 125,                  /* TOK_SET  */
  YYSYMBOL_TOK_SETTINGS = 126,             /* TOK_SETTINGS  */
  YYSYMBOL_TOK_SESSION = 127,              /* TOK_SESSION  */
  YYSYMBOL_TOK_SHOW = 128,                 /* TOK_SHOW  */
  YYSYMBOL_TOK_SONAME = 129,               /* TOK_SONAME  */
  YYSYMBOL_TOK_START = 130,                /* TOK_START  */
  YYSYMBOL_TOK_STATUS = 131,               /* TOK_STATUS  */
  YYSYMBOL_TOK_STRING = 132,               /* TOK_STRING  */
  YYSYMBOL_TOK_SYSFILTERS = 133,           /* TOK_SYSFILTERS  */
  YYSYMBOL_TOK_SUM = 134,                  /* TOK_SUM  */
  YYSYMBOL_TOK_TABLE = 135,                /* TOK_TABLE  */
  YYSYMBOL_TOK_TABLES = 136,               /* TOK_TABLES  */
  YYSYMBOL_TOK_THREADS = 137,              /* TOK_THREADS  */
  YYSYMBOL_TOK_TO = 138,                   /* TOK_TO  */
  YYSYMBOL_TOK_TRANSACTION = 139,          /* TOK_TRANSACTION  */
  YYSYMBOL_TOK_TRUE = 140,                 /* TOK_TRUE  */
  YYSYMBOL_TOK_UNFREEZE = 141,             /* TOK_UNFREEZE  */
  YYSYMBOL_TOK_UPDATE = 142,               /* TOK_UPDATE  */
  YYSYMBOL_TOK_VALUES = 143,               /* TOK_VALUES  */
  YYSYMBOL_TOK_VARIABLES = 144,            /* TOK_VARIABLES  */
  YYSYMBOL_TOK_WARNINGS = 145,             /* TOK_WARNINGS  */
  YYSYMBOL_TOK_WEEK = 146,                 /* TOK_WEEK  */
  YYSYMBOL_TOK_WEIGHT = 147,               /* TOK_WEIGHT  */
  YYSYMBOL_TOK_WHERE = 148,                /* TOK_WHERE  */
  YYSYMBOL_TOK_WITHIN = 149,               /* TOK_WITHIN  */
  YYSYMBOL_TOK_YEAR = 150,                 /* TOK_YEAR  */
  YYSYMBOL_TOK_LTE = 151,                  /* "<="  */
  YYSYMBOL_TOK_GTE = 152,                  /* ">="  */
  YYSYMBOL_TOK_NE = 153,                   /* "!="  */
  YYSYMBOL_TOK_OR = 154,                   /* TOK_OR  */
  YYSYMBOL_TOK_AND = 155,                  /* TOK_AND  */
  YYSYMBOL_156_ = 156,                     /* '|'  */
  YYSYMBOL_157_ = 157,                     /* '&'  */
  YYSYMBOL_158_ = 158,                     /* '='  */
  YYSYMBOL_159_ = 159,                     /* '<'  */
  YYSYMBOL_160_ = 160,                     /* '>'  */
  YYSYMBOL_161_ = 161,                     /* '+'  */
  YYSYMBOL_162_ = 162,                     /* '-'  */
  YYSYMBOL_163_ = 163,                     /* '*'  */
  YYSYMBOL_164_ = 164,                     /* '/'  */
  YYSYMBOL_165_ = 165,                     /* '%'  */
  YYSYMBOL_TOK_NEG = 166,                  /* TOK_NEG  */
  YYSYMBOL_167_ = 167,                     /* ';'  */
  YYSYMBOL_168_ = 168,                     /* ':'  */
  YYSYMBOL_169_ = 169,                     /* ','  */
  YYSYMBOL_170_ = 170,                     /* '('  */
  YYSYMBOL_171_ = 171,                     /* ')'  */
  YYSYMBOL_172_ = 172,                     /* '{'  */
  YYSYMBOL_173_ = 173,                     /* '}'  */
  YYSYMBOL_174_ = 174,                     /* '['  */
  YYSYMBOL_175_ = 175,                     /* ']'  */
  YYSYMBOL_YYACCEPT = 176,                 /* $accept  */
  YYSYMBOL_request = 177,                  /* request  */
  YYSYMBOL_multi_stmt_list = 178,          /* multi_stmt_list  */
  YYSYMBOL_statement = 179,                /* statement  */
  YYSYMBOL_multi_stmt = 180,               /* multi_stmt  */
  YYSYMBOL_reserved_tokens_without_option = 181, /* reserved_tokens_without_option  */
  YYSYMBOL_names_transaction_collate = 182, /* names_transaction_collate  */
  YYSYMBOL_ident_without_option = 183,     /* ident_without_option  */
  YYSYMBOL_ident_for_set_stmt = 184,       /* ident_for_set_stmt  */
  YYSYMBOL_non_reserved_tokens = 185,      /* non_reserved_tokens  */
  YYSYMBOL_all_set_tail = 186,             /* all_set_tail  */
  YYSYMBOL_ident = 187,                    /* ident  */
  YYSYMBOL_option_name = 188,              /* option_name  */
  YYSYMBOL_identcol = 189,                 /* identcol  */
  YYSYMBOL_single_tablename = 190,         /* single_tablename  */
  YYSYMBOL_single_manticore_tablename = 191, /* single_manticore_tablename  */
  YYSYMBOL_tablename_with_maybecluster = 192, /* tablename_with_maybecluster  */
  YYSYMBOL_chunk = 193,                    /* chunk  */
  YYSYMBOL_chunks = 194,                   /* chunks  */
  YYSYMBOL_string_key = 195,               /* string_key  */
  YYSYMBOL_string_keys = 196,              /* string_keys  */
  YYSYMBOL_maybechunk_then_subkeys = 197,  /* maybechunk_then_subkeys  */
  YYSYMBOL_maybesubkey_then_chunks = 198,  /* maybesubkey_then_chunks  */
  YYSYMBOL_subkeys_for_target_in_select_from = 199, /* subkeys_for_target_in_select_from  */
  YYSYMBOL_single_tablename_with_maybecluster = 200, /* single_tablename_with_maybecluster  */
  YYSYMBOL_one_index_opt_subindex = 201,   /* one_index_opt_subindex  */
  YYSYMBOL_one_index_opt_chunk = 202,      /* one_index_opt_chunk  */
  YYSYMBOL_target_in_update = 203,         /* target_in_update  */
  YYSYMBOL_target_in_delete_from = 204,    /* target_in_delete_from  */
  YYSYMBOL_target_in_select_from = 205,    /* target_in_select_from  */
  YYSYMBOL_list_of_indexes = 206,          /* list_of_indexes  */
  YYSYMBOL_string_nokeys = 207,            /* string_nokeys  */
  YYSYMBOL_multi_strings_and_maybe_chunk_nokey = 208, /* multi_strings_and_maybe_chunk_nokey  */
  YYSYMBOL_sysvar = 209,                   /* sysvar  */
  YYSYMBOL_sysvar_ext = 210,               /* sysvar_ext  */
  YYSYMBOL_select_without_from = 211,      /* select_without_from  */
  YYSYMBOL_select = 212,                   /* select  */
  YYSYMBOL_select1 = 213,                  /* select1  */
  YYSYMBOL_opt_tablefunc_args = 214,       /* opt_tablefunc_args  */
  YYSYMBOL_tablefunc_args_list = 215,      /* tablefunc_args_list  */
  YYSYMBOL_tablefunc_arg = 216,            /* tablefunc_arg  */
  YYSYMBOL_subselect_start = 217,          /* subselect_start  */
  YYSYMBOL_opt_outer_order = 218,          /* opt_outer_order  */
  YYSYMBOL_opt_outer_limit = 219,          /* opt_outer_limit  */
  YYSYMBOL_select_from = 220,              /* select_from  */
  YYSYMBOL_221_1 = 221,                    /* $@1  */
  YYSYMBOL_select_items_list = 222,        /* select_items_list  */
  YYSYMBOL_select_item = 223,              /* select_item  */
  YYSYMBOL_opt_alias = 224,                /* opt_alias  */
  YYSYMBOL_distinct_joined_col = 225,      /* distinct_joined_col  */
  YYSYMBOL_distinct_ident = 226,           /* distinct_ident  */
  YYSYMBOL_select_expr = 227,              /* select_expr  */
  YYSYMBOL_opt_where_clause = 228,         /* opt_where_clause  */
  YYSYMBOL_where_tok = 229,                /* where_tok  */
  YYSYMBOL_where_clause = 230,             /* where_clause  */
  YYSYMBOL_where_expr = 231,               /* where_expr  */
  YYSYMBOL_where_item = 232,               /* where_item  */
  YYSYMBOL_knn_item = 233,                 /* knn_item  */
  YYSYMBOL_opt_join_clause = 234,          /* opt_join_clause  */
  YYSYMBOL_join_type = 235,                /* join_type  */
  YYSYMBOL_join_tok = 236,                 /* join_tok  */
  YYSYMBOL_join_clause = 237,              /* join_clause  */
  YYSYMBOL_on_clause_type_cast = 238,      /* on_clause_type_cast  */
  YYSYMBOL_on_clause = 239,                /* on_clause  */
  YYSYMBOL_filter_expr = 240,              /* filter_expr  */
  YYSYMBOL_filter_item = 241,              /* filter_item  */
  YYSYMBOL_expr_ident = 242,               /* expr_ident  */
  YYSYMBOL_mva_aggr = 243,                 /* mva_aggr  */
  YYSYMBOL_const_int = 244,                /* const_int  */
  YYSYMBOL_const_float = 245,              /* const_float  */
  YYSYMBOL_const_float_unsigned = 246,     /* const_float_unsigned  */
  YYSYMBOL_const_list = 247,               /* const_list  */
  YYSYMBOL_string_list = 248,              /* string_list  */
  YYSYMBOL_opt_group_clause = 249,         /* opt_group_clause  */
  YYSYMBOL_opt_int = 250,                  /* opt_int  */
  YYSYMBOL_group_items_list = 251,         /* group_items_list  */
  YYSYMBOL_opt_having_clause = 252,        /* opt_having_clause  */
  YYSYMBOL_opt_group_order_clause = 253,   /* opt_group_order_clause  */
  YYSYMBOL_group_order_clause = 254,       /* group_order_clause  */
  YYSYMBOL_opt_order_clause = 255,         /* opt_order_clause  */
  YYSYMBOL_order_clause = 256,             /* order_clause  */
  YYSYMBOL_order_items_list = 257,         /* order_items_list  */
  YYSYMBOL_order_item = 258,               /* order_item  */
  YYSYMBOL_opt_limit_clause = 259,         /* opt_limit_clause  */
  YYSYMBOL_limit_clause = 260,             /* limit_clause  */
  YYSYMBOL_opt_option_clause = 261,        /* opt_option_clause  */
  YYSYMBOL_option_clause = 262,            /* option_clause  */
  YYSYMBOL_option_clause_item = 263,       /* option_clause_item  */
  YYSYMBOL_default_option_table_setup = 264, /* default_option_table_setup  */
  YYSYMBOL_option_table_setup = 265,       /* option_table_setup  */
  YYSYMBOL_option_list = 266,              /* option_list  */
  YYSYMBOL_option_item = 267,              /* option_item  */
  YYSYMBOL_named_const_list = 268,         /* named_const_list  */
  YYSYMBOL_named_const = 269,              /* named_const  */
  YYSYMBOL_opt_hint_clause = 270,          /* opt_hint_clause  */
  YYSYMBOL_hint_list = 271,                /* hint_list  */
  YYSYMBOL_hint_attr_list = 272,           /* hint_attr_list  */
  YYSYMBOL_hint_item = 273,                /* hint_item  */
  YYSYMBOL_time_unit = 274,                /* time_unit  */
  YYSYMBOL_expr = 275,                     /* expr  */
  YYSYMBOL_accepted_funcs = 276,           /* accepted_funcs  */
  YYSYMBOL_function = 277,                 /* function  */
  YYSYMBOL_arglist = 278,                  /* arglist  */
  YYSYMBOL_arg = 279,                      /* arg  */
  YYSYMBOL_json_aggr = 280,                /* json_aggr  */
  YYSYMBOL_consthash = 281,                /* consthash  */
  YYSYMBOL_hash_key = 282,                 /* hash_key  */
  YYSYMBOL_hash_val = 283,                 /* hash_val  */
  YYSYMBOL_show_stmt = 284,                /* show_stmt  */
  YYSYMBOL_like_filter = 285,              /* like_filter  */
  YYSYMBOL_show_what = 286,                /* show_what  */
  YYSYMBOL_index_or_table = 287,           /* index_or_table  */
  YYSYMBOL_set_stmt = 288,                 /* set_stmt  */
  YYSYMBOL_opt_collate = 289,              /* opt_collate  */
  YYSYMBOL_set_string_value = 290,         /* set_string_value  */
  YYSYMBOL_bool_or_integer_value = 291,    /* bool_or_integer_value  */
  YYSYMBOL_ident_or_string_or_num_or_nulls = 292, /* ident_or_string_or_num_or_nulls  */
  YYSYMBOL_ident_or_string_or_num_or_null = 293, /* ident_or_string_or_num_or_null  */
  YYSYMBOL_transact_op = 294,              /* transact_op  */
  YYSYMBOL_start_transaction = 295,        /* start_transaction  */
  YYSYMBOL_insert_into = 296,              /* insert_into  */
  YYSYMBOL_insert_or_replace = 297,        /* insert_or_replace  */
  YYSYMBOL_opt_column_list = 298,          /* opt_column_list  */
  YYSYMBOL_column_ident = 299,             /* column_ident  */
  YYSYMBOL_column_list = 300,              /* column_list  */
  YYSYMBOL_insert_rows_list = 301,         /* insert_rows_list  */
  YYSYMBOL_insert_row = 302,               /* insert_row  */
  YYSYMBOL_insert_vals_list = 303,         /* insert_vals_list  */
  YYSYMBOL_insert_val = 304,               /* insert_val  */
  YYSYMBOL_delete_from = 305,              /* delete_from  */
  YYSYMBOL_306_2 = 306,                    /* $@2  */
  YYSYMBOL_call_proc = 307,                /* call_proc  */
  YYSYMBOL_call_args_list = 308,           /* call_args_list  */
  YYSYMBOL_call_arg = 309,                 /* call_arg  */
  YYSYMBOL_const_string_list = 310,        /* const_string_list  */
  YYSYMBOL_opt_call_opts_list = 311,       /* opt_call_opts_list  */
  YYSYMBOL_call_opts_list = 312,           /* call_opts_list  */
  YYSYMBOL_call_opt = 313,                 /* call_opt  */
  YYSYMBOL_opt_as = 314,                   /* opt_as  */
  YYSYMBOL_call_opt_name = 315,            /* call_opt_name  */
  YYSYMBOL_describe = 316,                 /* describe  */
  YYSYMBOL_317_3 = 317,                    /* $@3  */
  YYSYMBOL_describe_opt = 318,             /* describe_opt  */
  YYSYMBOL_describe_tok = 319,             /* describe_tok  */
  YYSYMBOL_update = 320,                   /* update  */
  YYSYMBOL_321_4 = 321,                    /* $@4  */
  YYSYMBOL_update_items_list = 322,        /* update_items_list  */
  YYSYMBOL_update_item = 323,              /* update_item  */
  YYSYMBOL_global_or_session = 324,        /* global_or_session  */
  YYSYMBOL_optimize_index = 325,           /* optimize_index  */
  YYSYMBOL_326_5 = 326,                    /* $@5  */
  YYSYMBOL_json_field = 327,               /* json_field  */
  YYSYMBOL_json_expr = 328,                /* json_expr  */
  YYSYMBOL_subscript = 329,                /* subscript  */
  YYSYMBOL_subkey = 330,                   /* subkey  */
  YYSYMBOL_streq = 331,                    /* streq  */
  YYSYMBOL_strval = 332,                   /* strval  */
  YYSYMBOL_opt_distinct_item = 333,        /* opt_distinct_item  */
  YYSYMBOL_opt_facet_by_items_list = 334,  /* opt_facet_by_items_list  */
  YYSYMBOL_facet_by = 335,                 /* facet_by  */
  YYSYMBOL_facet_item = 336,               /* facet_item  */
  YYSYMBOL_facet_expr = 337,               /* facet_expr  */
  YYSYMBOL_facet_items_list = 338,         /* facet_items_list  */
  YYSYMBOL_facet_stmt = 339,               /* facet_stmt  */
  YYSYMBOL_sysfilters = 340,               /* sysfilters  */
  YYSYMBOL_explain_query = 341,            /* explain_query  */
  YYSYMBOL_342_6 = 342                     /* $@6  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  262
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7189

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  176
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  167
/* YYNRULES -- Number of rules.  */
#define YYNRULES  633
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1119

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   621


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   165,   157,     2,
     170,   171,   163,   161,   169,   162,     2,   164,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   168,   167,
     159,   158,   160,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   174,     2,   175,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   172,   156,   173,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     2,     2,
       6,     7,     8,     9,     2,     2,     2,     2,     2,    13,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   135,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    10,     2,     3,     4,     5,    11,    12,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   166
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   212,   212,   213,   214,   215,   219,   220,   221,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   238,
     239,   240,   262,   262,   262,   262,   263,   263,   263,   263,
     263,   264,   264,   264,   264,   264,   264,   265,   265,   265,
     265,   266,   266,   266,   267,   267,   267,   267,   267,   268,
     268,   268,   268,   268,   268,   268,   269,   269,   269,   270,
     270,   270,   270,   270,   270,   270,   271,   271,   271,   272,
     272,   272,   272,   273,   273,   274,   274,   274,   274,   275,
     275,   275,   275,   275,   275,   276,   276,   276,   276,   276,
     277,   277,   277,   277,   278,   278,   278,   278,   278,   278,
     279,   279,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   281,   281,   285,   285,   285,   289,   289,   293,
     293,   301,   305,   305,   309,   309,   309,   313,   313,   313,
     319,   320,   325,   331,   331,   336,   337,   341,   342,   351,
     356,   365,   366,   371,   379,   380,   385,   386,   391,   392,
     395,   397,   398,   402,   409,   410,   414,   415,   416,   423,
     424,   425,   429,   430,   431,   432,   436,   442,   446,   454,
     458,   468,   469,   476,   477,   478,   482,   486,   493,   494,
     501,   502,   503,   509,   521,   522,   530,   531,   538,   540,
     544,   548,   555,   556,   560,   573,   580,   582,   587,   593,
     603,   602,   617,   618,   622,   623,   626,   628,   632,   633,
     637,   638,   642,   643,   644,   645,   646,   647,   648,   649,
     650,   651,   654,   656,   661,   665,   669,   670,   671,   672,
     673,   674,   675,   676,   677,   681,   686,   691,   696,   701,
     705,   710,   715,   720,   725,   730,   735,   740,   747,   749,
     752,   754,   755,   759,   763,   771,   772,   773,   777,   778,
     782,   783,   784,   785,   786,   790,   795,   800,   805,   814,
     824,   830,   837,   842,   847,   852,   857,   862,   867,   872,
     877,   882,   887,   892,   897,   902,   907,   912,   917,   922,
     927,   932,   937,   942,   947,   952,   957,   962,   967,   972,
     977,   982,   987,   992,  1001,  1013,  1019,  1030,  1035,  1042,
    1046,  1055,  1059,  1063,  1067,  1071,  1081,  1082,  1087,  1093,
    1099,  1105,  1106,  1107,  1108,  1109,  1110,  1114,  1115,  1119,
    1124,  1132,  1133,  1140,  1141,  1145,  1152,  1159,  1164,  1172,
    1179,  1186,  1188,  1191,  1193,  1200,  1204,  1210,  1212,  1218,
    1220,  1224,  1235,  1237,  1241,  1245,  1249,  1254,  1262,  1263,
    1267,  1268,  1269,  1272,  1274,  1278,  1282,  1286,  1290,  1296,
    1298,  1302,  1303,  1307,  1308,  1312,  1318,  1325,  1326,  1330,
    1335,  1340,  1346,  1351,  1359,  1364,  1371,  1376,  1383,  1385,
    1389,  1390,  1394,  1395,  1399,  1403,  1407,  1411,  1415,  1419,
    1426,  1427,  1428,  1429,  1430,  1431,  1432,  1433,  1439,  1440,
    1441,  1442,  1443,  1444,  1445,  1447,  1448,  1449,  1450,  1451,
    1452,  1453,  1454,  1455,  1456,  1457,  1458,  1459,  1460,  1461,
    1462,  1463,  1464,  1465,  1466,  1467,  1468,  1469,  1470,  1471,
    1475,  1476,  1477,  1478,  1479,  1480,  1481,  1482,  1483,  1484,
    1485,  1486,  1487,  1488,  1489,  1493,  1494,  1495,  1496,  1497,
    1498,  1499,  1500,  1501,  1502,  1503,  1504,  1505,  1506,  1510,
    1511,  1515,  1516,  1520,  1521,  1522,  1525,  1527,  1528,  1532,
    1533,  1534,  1538,  1539,  1540,  1546,  1549,  1551,  1555,  1556,
    1557,  1558,  1559,  1560,  1561,  1562,  1563,  1564,  1569,  1574,
    1579,  1584,  1589,  1594,  1598,  1602,  1606,  1610,  1615,  1619,
    1623,  1627,  1634,  1635,  1641,  1646,  1651,  1655,  1656,  1657,
    1660,  1662,  1666,  1667,  1671,  1672,  1673,  1677,  1678,  1682,
    1683,  1684,  1685,  1686,  1693,  1694,  1695,  1699,  1700,  1706,
    1710,  1711,  1714,  1716,  1720,  1724,  1725,  1729,  1730,  1734,
    1738,  1739,  1743,  1744,  1745,  1746,  1747,  1753,  1753,  1763,
    1771,  1775,  1782,  1783,  1790,  1800,  1806,  1808,  1812,  1817,
    1821,  1828,  1830,  1834,  1835,  1841,  1841,  1844,  1846,  1853,
    1854,  1861,  1861,  1869,  1870,  1874,  1888,  1894,  1898,  1903,
    1917,  1923,  1931,  1933,  1937,  1946,  1946,  1958,  1959,  1963,
    1966,  1967,  1971,  1972,  1973,  1974,  1975,  1979,  1980,  1981,
    1982,  1983,  1984,  1985,  1986,  1987,  1988,  1989,  1990,  1994,
    1999,  2001,  2002,  2005,  2007,  2011,  2020,  2024,  2032,  2033,
    2037,  2045,  2055,  2055
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"$end\"", "error", "\"invalid token\"", "\"identifier\"",
  "\"`identifier`\"", "TOK_ATIDENT", "\"integer\"", "\"float\"",
  "TOK_CONST_MVA", "\"string\"", "\"null\"", "\"@uservar\"",
  "\"@@sysvar\"", "TOK_CONST_STRINGS", "TOK_BAD_NUMERIC", "TOK_SUBKEY",
  "TOK_BACKTICKED_SUBKEY", "\".number\"", "\"Manticore.\"", "\"system\"",
  "TOK_AGENT", "TOK_ALL", "TOK_ANY", "TOK_AS", "TOK_ASC", "TOK_AVG",
  "TOK_BEGIN", "TOK_BETWEEN", "TOK_BIGINT", "TOK_BY", "TOK_CALL",
  "TOK_CHARACTER", "TOK_CHUNK", "TOK_CLUSTER", "TOK_COLLATE",
  "TOK_COLLATION", "TOK_COLUMN", "TOK_COMMIT", "TOK_COUNT", "TOK_CREATE",
  "TOK_DATABASES", "TOK_DAY", "TOK_DATE_ADD", "TOK_DATE_SUB", "TOK_DELETE",
  "TOK_DESC", "TOK_DESCRIBE", "TOK_DISTINCT", "TOK_DIV", "TOK_DOUBLE",
  "TOK_EXPLAIN", "TOK_FACET", "TOK_FALSE", "TOK_FLOAT", "TOK_FOR",
  "TOK_FORCE", "TOK_FROM", "TOK_FREEZE", "TOK_GLOBAL", "TOK_GROUP",
  "TOK_GROUPBY", "TOK_GROUP_CONCAT", "TOK_HAVING", "TOK_HINT_SECONDARY",
  "TOK_HINT_NO_SECONDARY", "TOK_HINT_DOCID", "TOK_HINT_NO_DOCID",
  "TOK_HINT_CLOSE", "TOK_HINT_COLUMNAR", "TOK_HINT_NO_COLUMNAR",
  "TOK_HINT_OPEN", "TOK_HOSTNAMES", "TOK_HOUR", "TOK_IGNORE", "TOK_IN",
  "TOK_INDEX", "TOK_INDEXES", "TOK_INDEXOF", "TOK_INNER", "TOK_INSERT",
  "TOK_INT", "TOK_INTERVAL", "TOK_INTEGER", "TOK_INTO", "TOK_IS",
  "TOK_JOIN", "TOK_KILL", "TOK_KNN", "TOK_LEFT", "TOK_LIKE", "TOK_LIMIT",
  "TOK_LOGS", "TOK_LOCKS", "TOK_MATCH", "TOK_MAX", "TOK_META", "TOK_MIN",
  "TOK_MINUTE", "TOK_MOD", "TOK_MONTH", "TOK_MULTI", "TOK_MULTI64",
  "TOK_NAMES", "TOK_NOT", "TOK_OFFSET", "TOK_ON", "TOK_OPTION",
  "TOK_ORDER", "TOK_OPTIMIZE", "TOK_PLAN", "TOK_PLUGINS", "TOK_PROFILE",
  "TOK_QUARTER", "TOK_QUERY", "TOK_RAND", "TOK_REBUILD", "TOK_REGEX",
  "TOK_RELOAD", "TOK_REPLACE", "TOK_REMAP", "TOK_ROLLBACK", "TOK_SCROLL",
  "TOK_SECOND", "TOK_SECONDARY", "TOK_SELECT", "TOK_SET", "TOK_SETTINGS",
  "TOK_SESSION", "TOK_SHOW", "TOK_SONAME", "TOK_START", "TOK_STATUS",
  "TOK_STRING", "TOK_SYSFILTERS", "TOK_SUM", "TOK_TABLE", "TOK_TABLES",
  "TOK_THREADS", "TOK_TO", "TOK_TRANSACTION", "TOK_TRUE", "TOK_UNFREEZE",
  "TOK_UPDATE", "TOK_VALUES", "TOK_VARIABLES", "TOK_WARNINGS", "TOK_WEEK",
  "TOK_WEIGHT", "TOK_WHERE", "TOK_WITHIN", "TOK_YEAR", "\"<=\"", "\">=\"",
  "\"!=\"", "TOK_OR", "TOK_AND", "'|'", "'&'", "'='", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "TOK_NEG", "';'", "':'", "','", "'('", "')'",
  "'{'", "'}'", "'['", "']'", "$accept", "request", "multi_stmt_list",
  "statement", "multi_stmt", "reserved_tokens_without_option",
  "names_transaction_collate", "ident_without_option",
  "ident_for_set_stmt", "non_reserved_tokens", "all_set_tail", "ident",
  "option_name", "identcol", "single_tablename",
  "single_manticore_tablename", "tablename_with_maybecluster", "chunk",
  "chunks", "string_key", "string_keys", "maybechunk_then_subkeys",
  "maybesubkey_then_chunks", "subkeys_for_target_in_select_from",
  "single_tablename_with_maybecluster", "one_index_opt_subindex",
  "one_index_opt_chunk", "target_in_update", "target_in_delete_from",
  "target_in_select_from", "list_of_indexes", "string_nokeys",
  "multi_strings_and_maybe_chunk_nokey", "sysvar", "sysvar_ext",
  "select_without_from", "select", "select1", "opt_tablefunc_args",
  "tablefunc_args_list", "tablefunc_arg", "subselect_start",
  "opt_outer_order", "opt_outer_limit", "select_from", "$@1",
  "select_items_list", "select_item", "opt_alias", "distinct_joined_col",
  "distinct_ident", "select_expr", "opt_where_clause", "where_tok",
  "where_clause", "where_expr", "where_item", "knn_item",
  "opt_join_clause", "join_type", "join_tok", "join_clause",
  "on_clause_type_cast", "on_clause", "filter_expr", "filter_item",
  "expr_ident", "mva_aggr", "const_int", "const_float",
  "const_float_unsigned", "const_list", "string_list", "opt_group_clause",
  "opt_int", "group_items_list", "opt_having_clause",
  "opt_group_order_clause", "group_order_clause", "opt_order_clause",
  "order_clause", "order_items_list", "order_item", "opt_limit_clause",
  "limit_clause", "opt_option_clause", "option_clause",
  "option_clause_item", "default_option_table_setup", "option_table_setup",
  "option_list", "option_item", "named_const_list", "named_const",
  "opt_hint_clause", "hint_list", "hint_attr_list", "hint_item",
  "time_unit", "expr", "accepted_funcs", "function", "arglist", "arg",
  "json_aggr", "consthash", "hash_key", "hash_val", "show_stmt",
  "like_filter", "show_what", "index_or_table", "set_stmt", "opt_collate",
  "set_string_value", "bool_or_integer_value",
  "ident_or_string_or_num_or_nulls", "ident_or_string_or_num_or_null",
  "transact_op", "start_transaction", "insert_into", "insert_or_replace",
  "opt_column_list", "column_ident", "column_list", "insert_rows_list",
  "insert_row", "insert_vals_list", "insert_val", "delete_from", "$@2",
  "call_proc", "call_args_list", "call_arg", "const_string_list",
  "opt_call_opts_list", "call_opts_list", "call_opt", "opt_as",
  "call_opt_name", "describe", "$@3", "describe_opt", "describe_tok",
  "update", "$@4", "update_items_list", "update_item", "global_or_session",
  "optimize_index", "$@5", "json_field", "json_expr", "subscript",
  "subkey", "streq", "strval", "opt_distinct_item",
  "opt_facet_by_items_list", "facet_by", "facet_item", "facet_expr",
  "facet_items_list", "facet_stmt", "sysfilters", "explain_query", "$@6", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-897)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-599)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    7047,  -897,  6211,  -897,  -897,  -897,  -897,  -897,  -897,  -897,
    -897,  -897,  1562,  6644,   586,  -116,  3226,  -897,    68,    -9,
     -65,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,
    -897,    73,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,
    -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,
    -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,
    -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,
    -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,
    -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,
    -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,
    -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,
    -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,
    -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,
    -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,
    -897,  -897,  -897,  -897,  -897,    49,   214,  6211,     7,   106,
    -897,  -897,  -897,  -897,   219,  -897,   118,   130,   142,   147,
     154,   165,   175,   198,   212,   241,   250,   257,   260,  -897,
     282,   288,   329,   336,   347,   356,   363,  2612,   367,   374,
     375,   388,   399,   405,   438,   441,   453,   463,  2612,  -897,
    2612,  4879,    79,   228,  -897,    -5,  -897,    30,  6856,   464,
    -897,   472,    40,   232,  -897,   286,   252,  4731,   319,   323,
    5027,   416,  -897,   524,   510,  -897,  -897,  -897,   510,  -897,
    -897,  -897,  -897,  -897,  -897,   510,   548,    24,  -897,  -897,
     554,  5619,   536,  -897,  -897,  -897,   538,   540,   541,   544,
     545,   546,   549,   550,   555,   557,  3226,   558,   559,   562,
     688,  3226,   120,   228,   563,   207,  -897,   395,   304,    77,
    -897,  5619,  -897,  2612,   277,  -897,  -897,  5619,  5619,    32,
    5619,  6211,  -897,  5767,  1978,   709,   719,  -897,   720,   721,
    -897,  2612,     5,  2612,  2612,   568,  2612,  2612,  2612,   570,
     571,   572,  -897,   584,  2138,  2612,  2612,   585,  -897,  1300,
    -897,  -897,  -897,   228,   104,   599,   588,  -897,  -897,  2766,
     123,  -897,  6211,  3531,    13,  1816,  -897,  -897,  -897,  -897,
    6211,  2612,  2612,  2612,  2612,  2612,  2612,  2612,  2612,  2612,
    2612,  2612,  2612,  2612,  2612,  2612,  2612,  2612,  2920,  2612,
     589,    82,  2612,  2612,  2612,  2612,  2612,  2612,  4731,  -897,
    -897,  -897,  -897,  -897,     3,  -897,  4287,  4731,   592,   630,
    6359,   153,   594,   595,   596,  -897,  -897,   635,  -897,  5767,
     758,  -897,  -897,  -897,   510,   751,  -897,   601,  -897,   554,
    -897,   603,   138,   125,   606,   510,  6211,  6211,  6211,   613,
    6211,   607,   608,  6211,  -897,  6211,   610,  -897,    93,   612,
    5175,  3226,  3226,   614,   615,    81,  3835,    90,   349,   292,
     298,   140,  4139,   321,   334,    21,   617,   193,    21,    21,
      21,    21,    21,    21,    21,    21,   243,  -897,   652,  6856,
    -897,    83,    -8,  1562,  -897,  -897,   243,   618,   648,  -897,
    -897,  -897,   341,    38,  -897,  -897,  -897,  -897,   620,  -897,
     243,   642,   782,  -897,  -897,  -897,   554,   226,  2298,  -897,
    6856,   262,  -897,  -897,   709,  -897,   719,  1321,  6211,   621,
     670,  6686,  -897,  1342,   852,  1161,  2452,  2612,  2612,  -897,
    -897,   271,  6720,  1390,  -897,  -897,  4879,  -897,  4583,   622,
     619,   512,  -897,  -897,  -897,   243,  -897,    44,  -897,   606,
    -897,   -26,   792,  -897,   228,  -897,  -897,   403,  -897,   403,
    -897,   645,   221,  6887,  6907,   420,   987,   645,   221,   403,
    -897,   403,  -897,    61,    61,  -897,  -897,  -897,   278,  6839,
    2920,  -897,   790,   403,   403,   645,   645,   403,   403,   639,
    4731,  4731,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,
    -897,   639,   510,  -897,  -897,  5767,   510,  -897,  -897,  -897,
     510,  5767,  6496,  -897,  5619,  -897,   796,  -897,   138,   510,
    -897,   510,  5619,  -897,   -17,   185,   123,   640,   643,   644,
    -897,  -897,   647,   123,   650,  -897,  -897,  -897,   665,   666,
     658,  -897,   807,   807,   683,   687,   343,  -897,  -897,   834,
     675,   676,    21,  3987,  -897,  -897,  -897,  -897,  -897,  -897,
    -897,  -897,  -897,  -897,   677,  -897,  -897,  -897,  -897,  -897,
    -897,  -897,  -897,  -897,   694,    81,    21,   681,  -897,  -897,
    -897,  -897,  -897,  -897,  -897,  -897,  -897,   243,  6211,  -897,
    -897,  2612,   805,  2612,    15,   838,   838,  -897,  6211,   711,
    -897,   510,  -897,  -897,  -897,  -897,  -897,   290,   296,    32,
     685,   138,   243,  -897,  3074,   554,   554,  -897,  1816,   690,
    2920,  -897,  -897,  -897,    28,   696,  -897,   777,   784,  -897,
    2612,  -897,  2612,  -897,  6769,  6788,  -897,  2612,  -897,   710,
    -897,   228,  -897,  -897,  -897,  -897,  -897,   838,  -897,   745,
     838,   138,   138,  -897,  -897,  -897,   248,   864,   865,  -897,
    -897,  6211,   301,  -897,   639,  -897,  -897,  -897,  -897,  -897,
     701,  -897,  -897,  -897,   715,   705,  -897,  -897,  -897,  -897,
    -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,   866,
    -897,   722,  -897,   302,   307,    81,    81,   311,   316,  -897,
     807,   807,   723,   343,  -897,  5175,    21,   333,   726,    81,
     138,   123,   -84,     0,  -897,   724,  -897,  6211,   770,   716,
     838,   228,  -897,   360,   714,   554,    81,  -897,   877,  -897,
      41,  -897,   718,  -897,  -897,   138,   725,   727,  3378,  -897,
     733,  -897,   235,  -897,  -897,   729,  -897,  -897,   874,  -897,
    2612,  2612,  1638,  6651,  6808,  4583,  1816,   728,   138,  -897,
    -897,   642,   806,  -897,  -897,  -897,   -24,  -897,  -897,  3683,
    6496,   730,  5175,   881,  -897,  -897,  -897,  -897,  -897,  -897,
    -897,  -897,   361,   365,    21,   371,   380,   731,  -897,  -897,
      21,   381,   112,  6211,   554,    81,   228,   863,   804,  -897,
    6211,  -897,   116,    22,  -897,  -897,  -897,  -897,  -897,  5915,
     116,  6211,   887,   734,  3074,  3074,  6063,   732,  -897,  1143,
    1143,  -897,  -897,   736,  -897,    17,   801,   853,  -897,  -897,
    6359,  6211,  6496,  -897,  -897,  6211,   389,  -897,  -897,  -897,
    -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,
      60,  -897,  -897,  -897,   841,  -897,  -897,  5323,  -897,  -897,
     110,   392,  -897,   714,  -897,  -897,  -897,  -897,   897,  -897,
     752,   417,   921,   778,   280,   779,  -897,   228,   766,  -897,
    -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,  -897,   765,
     768,  2920,  5471,   908,   851,   936,   794,   839,   774,   705,
     174,   418,  -897,   937,  -897,   422,   456,  -897,   781,   785,
     247,   780,  -897,   116,  -897,  -897,    25,  6359,  -897,   425,
    3226,  3074,  3074,  6063,  -897,  -897,   429,  5175,   942,  -897,
    -897,   930,   901,   899,  -897,  4435,  -897,    81,  6211,  -897,
     791,  -897,   793,   795,   797,   802,   808,   809,   682,  -897,
      58,   803,  -897,  -897,  5175,  -897,   449,    81,   811,   810,
    6359,   813,   207,  -897,  -897,   207,  -897,   816,   780,    -3,
    5175,   857,  4435,   770,   821,  -897,  -897,  -897,  -897,  -897,
    6211,  6211,  6211,  6211,  6211,  6211,  -897,  -897,  6211,  -897,
    -897,   815,  -897,   459,     4,  -897,   817,  -897,   812,   960,
     971,  -897,   820,   962,  -897,   804,  4435,   460,  -897,   469,
     470,   474,   478,   514,   822,  6211,   517,   520,    81,   825,
    2920,  -897,  -897,  5175,  5175,   554,  -897,  6211,  -897,  -897,
    -897,  -897,  -897,  -897,   263,   206,   826,  -897,   827,  -897,
     521,  -897,   529,  -897,   780,   841,  -897,  -897,  -897,   829,
    6211,  6211,   534,   830,  -897,  -897,   240,   245,   850,  -897,
    -897,   854,   855,  6211,  -897,  -897,   256,   856,  -897
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   537,     0,   534,   557,   580,   579,   632,   540,   595,
     541,   535,     0,     0,   592,     0,     0,   581,     0,     4,
       2,     6,    15,    19,   184,   186,    20,    21,    11,   536,
       9,     0,    10,    12,    13,   575,    14,    16,    17,    18,
     117,   126,   121,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,   116,    34,    35,    36,    37,
      38,    39,   104,   102,   103,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    50,    49,    51,    52,   105,    53,
      54,    55,    56,   100,    57,    58,    98,    59,    60,   112,
      61,    62,    63,    64,   106,   107,    65,    66,   114,   119,
      67,    68,    69,    70,   108,    99,    71,    72,   101,    74,
      73,    75,   113,   109,    76,    78,    79,    77,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,   115,    90,
      91,    92,    93,    94,   110,    95,    96,    97,   111,   118,
     122,   120,   124,   123,   125,     0,     0,     0,     0,   117,
     409,   410,   411,   619,   178,   412,    23,    24,    26,    29,
      37,   104,   102,   103,    43,    44,    50,    49,   105,   445,
      54,   100,    57,    62,    64,   106,   107,     0,   108,    99,
      71,   101,    73,   109,    85,   110,    95,   111,     0,   204,
       0,   476,   130,   408,   213,   363,   202,   571,   212,     0,
     434,     0,     0,   435,   436,     0,    31,     0,     0,     0,
       0,     0,   504,     0,   486,   593,   512,   511,   486,   493,
     494,   492,   496,   510,   594,   486,   513,   486,   495,   488,
     369,     0,     0,   538,   317,   329,    23,    24,    29,    37,
      43,     0,    44,    50,    56,    57,     0,   101,    84,    95,
       0,     0,   130,   316,     0,   631,   260,     0,     0,     0,
     321,     0,     1,     0,     5,     8,     3,     0,     0,     0,
       0,     0,   513,     0,     0,   171,   174,   144,     0,   173,
     179,     0,     0,     0,     0,     0,     0,     0,     0,   117,
      62,    64,   414,     0,     0,     0,     0,     0,   413,     0,
     480,   481,   130,   479,     0,     0,   602,   603,   604,     0,
     599,   600,     0,     0,     0,     0,   183,   364,   572,   205,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   532,
     533,   531,   530,   529,   520,   527,     0,     0,   132,     0,
       0,   486,   133,   134,     0,   135,   137,     0,   505,     0,
       0,   508,   490,   489,   486,     0,   506,   375,   485,   370,
     371,   153,   156,     0,   158,   486,     0,     0,     0,     0,
       0,     0,     0,     0,   263,     0,     0,   330,     0,   602,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   156,   159,     0,   627,
     628,   571,   623,     0,     7,   153,   154,   542,   577,   333,
     554,   334,     0,     0,   552,   553,   331,   562,   566,   560,
     162,     0,     0,   132,   133,   134,   369,   619,     0,   457,
     471,     0,   469,   175,   172,   145,   176,     0,     0,     0,
       0,     0,   220,     0,     0,     0,     0,     0,     0,   458,
     464,     0,     0,     0,   461,   432,     0,   433,     0,     0,
     619,     0,   602,   601,   131,   180,   194,   150,   200,   167,
     168,   365,     0,   203,   207,   424,   425,   426,   615,   427,
     617,   429,   609,   431,   430,   422,   421,   428,   607,   419,
     611,   420,   613,   415,   416,   417,   418,   423,     0,     0,
       0,   437,     0,   616,   618,   610,   608,   612,   614,   519,
       0,     0,   517,   523,   516,   525,   524,   522,   526,   515,
     514,   518,   486,   136,   491,     0,   486,   497,   487,   503,
     486,     0,     0,   372,     0,   139,     0,   141,   157,   486,
     501,   486,     0,   509,     0,     0,     0,     0,     0,     0,
     325,   319,     0,   598,     0,   597,   320,   264,     0,     0,
     262,   261,     0,     0,     0,     0,     0,   278,   301,     0,
       0,     0,     0,     0,   300,   285,   294,   299,   284,   293,
     296,   287,   269,   295,     0,   265,   286,   268,   298,   283,
     292,   297,   282,   291,     0,     0,     0,     0,   313,   314,
     306,   305,   311,   312,   304,   303,   143,   160,     0,   626,
     625,     0,   620,     0,     0,     0,   146,   155,     0,     0,
     578,   486,   332,   564,   556,   335,   336,     0,     0,     0,
       0,   163,   164,   224,     0,   369,   369,   596,     0,     0,
       0,   455,   177,   214,   210,     0,   219,     0,     0,   218,
       0,   215,     0,   216,     0,     0,   465,     0,   217,     0,
     484,   483,   482,   477,   439,   606,   605,   182,   181,     0,
     141,   148,   144,   151,   152,   166,   248,     0,     0,   366,
     468,     0,     0,   438,   521,   528,   498,   138,   499,   507,
       0,   129,   127,   128,     0,   373,   377,   169,   140,   142,
     502,   500,   170,   328,   327,   324,   318,   323,   322,     0,
     326,     0,   339,     0,     0,     0,     0,     0,     0,   302,
       0,     0,     0,     0,   279,     0,     0,     0,     0,     0,
     161,   130,     0,     0,   583,     0,   629,   621,   352,   624,
     147,   544,   545,     0,     0,   369,     0,   555,     0,   563,
     571,   561,   567,   568,   559,   165,     0,    61,     0,   225,
     226,   239,   227,   558,   633,   188,   470,   208,   211,   221,
       0,     0,     0,     0,     0,     0,     0,     0,   149,   251,
     252,   222,     0,   249,   368,   367,     0,   456,   376,     0,
       0,     0,     0,     0,   276,   274,   280,   289,   290,   288,
     270,   272,     0,     0,     0,     0,     0,     0,   309,   307,
       0,     0,     0,     0,   369,     0,   622,     0,   363,   353,
       0,   543,     0,   369,   547,   576,   337,   338,   565,     0,
       0,     0,     0,    61,     0,     0,     0,     0,   209,     0,
       0,   460,   459,     0,   478,     0,     0,   341,   223,   253,
       0,     0,     0,   380,   383,     0,   379,   378,   315,   267,
     340,   277,   275,   281,   271,   273,   266,   310,   308,   591,
       0,   585,   586,   584,   388,   589,   590,     0,   630,   546,
       0,     0,   550,     0,   539,   574,   573,   570,   571,   569,
       0,     0,     0,   229,   228,   233,   193,   192,   189,   190,
     185,   403,   402,   401,   405,   406,   400,   404,   407,     0,
       0,     0,     0,     0,   196,   343,   349,     0,     0,   374,
       0,     0,   384,     0,   588,     0,     0,   582,    37,    71,
     360,   354,   358,     0,   549,   548,     0,     0,   235,     0,
       0,     0,     0,     0,   466,   467,     0,     0,     0,   187,
     344,     0,     0,   347,   350,     0,   462,     0,     0,   381,
       0,   587,     0,     0,     0,     0,     0,     0,     0,   390,
       0,     0,   361,   362,     0,   551,     0,     0,     0,     0,
       0,     0,   231,   230,   232,   234,   191,     0,   195,   197,
       0,     0,     0,   352,   254,   258,   386,   387,   385,   382,
       0,     0,     0,     0,     0,     0,   389,   391,     0,   355,
     359,     0,   243,     0,     0,   236,     0,   237,     0,     0,
       0,   345,   342,     0,   348,   363,     0,     0,   392,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   199,   198,     0,     0,   369,   259,     0,   394,   395,
     396,   397,   398,   399,     0,     0,     0,   241,     0,   242,
       0,   238,     0,   346,   351,   388,   393,   356,   357,     0,
       0,     0,     0,     0,   201,   247,     0,     0,     0,   240,
     463,     0,     0,     0,   245,   246,     0,     0,   244
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -897,  -897,  -897,  -897,   773,  -897,  -897,  -559,    52,  -897,
    -198,    -2,  -897,    88,  -352,  -266,  -205,  -416,  -439,  -243,
    -404,   209,  -897,  -897,  -120,   771,   783,  -897,  -897,  -897,
    -307,  -260,  -897,   984,  -897,  -897,  -897,   576,  -897,  -897,
      65,  -897,  -897,  -897,   342,  -897,   -11,   735,   609,  -897,
       8,  -897,  -897,  -897,  -701,  -897,  -733,  -897,  -897,  -897,
    -897,  -897,   631,    -7,   -14,  -896,  -372,  -897,   504,  -233,
     600,  -571,  -536,  -897,  -897,  -897,  -897,  -897,  -897,    29,
    -897,  -870,    43,  -839,  -897,  -438,  -897,   669,  -897,  -897,
     169,   233,  -810,    67,   -39,  -897,  -540,    59,   194,  1100,
    -897,  -897,  -290,   398,  -897,  -897,   583,   265,  -897,  -128,
    -897,   926,  -897,  -897,  -897,    99,  -333,   537,  -897,  -897,
    -897,  -897,  -897,   227,  -897,  -897,   166,  -897,  -649,  -897,
    -897,  -897,  -897,   421,  -897,  -897,  -897,   222,  -751,  -897,
    -897,  -897,  -897,  -897,  -897,  -897,  -897,   238,  -897,  -897,
    -897,  -378,   202,  -897,   776,  -897,   184,  -897,  -897,  -897,
     443,  -897,   444,  -897,  -897,  -897,  -897
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    18,    19,    20,    21,   139,   140,   141,   142,   143,
     144,   192,   724,   193,   365,   366,   435,   567,   568,   277,
     278,   647,   704,   705,   436,   437,   383,   428,   451,   498,
     384,   279,   280,   194,   500,    22,    23,    24,   867,   928,
     929,   699,   944,   979,    25,   706,   644,   196,   319,   798,
     675,   197,   877,   664,   665,   789,   790,   791,   811,   812,
     880,   813,   254,  1024,   591,   256,   257,   258,   259,   656,
     446,   657,   743,   946,   981,  1052,  1023,   983,   984,   848,
     849,   961,   962,   316,   317,   378,   379,   380,   562,   882,
     725,   726,   951,   952,   957,   998,  1057,   999,   939,   460,
     199,   200,   461,   462,   201,   304,   305,   693,    26,   371,
     230,   231,    27,   542,   549,   550,   354,   355,    28,    29,
      30,    31,   649,   772,   773,   853,   854,   911,   447,    32,
     146,    33,   448,   449,   658,   660,   782,   783,   320,   917,
      34,   268,   651,    35,    36,   261,   763,   764,   232,    37,
     148,   202,   203,   310,   311,   204,   205,   768,   642,   643,
     430,   431,   432,   265,    38,    39,   147
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     145,   195,   255,   722,   481,   367,   499,   456,   553,   908,
     780,   661,   363,  1067,   252,   539,   463,   584,   667,   501,
     645,   640,   637,   233,   551,   747,   381,   235,   589,   859,
    -206,   235,   646,   363,  1006,   465,   445,   540,   235,   439,
     615,   440,   263,   797,   235,   439,   662,   653,   528,   441,
     881,   313,   468,   318,   757,   441,   381,   744,   701,   636,
     748,   565,   844,   363,   318,   208,   235,   439,   262,   363,
     363,   313,   363,   942,   842,   455,   566,   441,   707,   697,
     375,   700,   216,  -206,   312,   314,  -206,   235,   439,  1025,
     372,   646,   531,   646,   306,   307,   308,   373,   441,   376,
     598,  1049,   266,   557,   253,  1038,   318,  1018,   497,   321,
     878,   382,  -206,   370,   340,   363,   235,   439,   235,   439,
    -206,   899,   235,   439,   341,   440,  1054,   441,   377,   441,
    -206,   923,   925,   441,  -206,   399,   307,   308,   492,   307,
     308,   426,   272,   708,   312,   271,   235,   439,   663,   610,
     450,   312,   729,  -598,   733,   565,   267,   441,   264,   322,
    1025,   641,   455,  -598,   315,   541,  1050,   859,   469,   843,
     566,   455,   595,  -206,  1068,   502,   606,   609,   611,   616,
     620,   623,   835,   250,   315,   532,   315,   250,   841,   302,
    -206,   913,   545,   599,   442,  1007,   312,  -206,   760,  -206,
     442,   569,   443,   912,  1094,   353,   672,   714,   364,   654,
    -562,   918,  -562,   564,   832,   833,  1075,   836,   260,   269,
     626,   578,   442,   785,   335,   336,   337,   793,   794,   364,
     424,   954,   394,   554,   275,   425,   276,   398,  1013,  1014,
     712,   770,   370,   442,   252,   729,   559,   401,   402,   252,
    -206,   570,  -206,   309,   702,  1085,   571,   573,   636,   364,
     565,   722,   362,   808,   587,   364,   364,   627,   364,   452,
     270,  1002,   442,   486,   442,   566,   274,   487,   442,   303,
     546,   654,   900,   362,   -83,   729,   910,  1097,  -474,   717,
    1106,  1107,  1003,   770,   309,   720,   770,   309,   235,   439,
    -473,   604,   442,  1116,   235,   439,  -597,   607,  1098,   441,
     494,   364,   281,   362,  1005,   441,  -597,  -441,   302,   362,
     362,   -83,   362,   722,   282,   454,   809,   235,   439,   955,
     618,   415,   987,  -250,   253,  -450,   810,   855,   441,   253,
     235,   439,   312,   621,   729,   283,   353,   397,   439,   235,
     439,   441,   742,   312,   547,   353,   734,   455,   441,   727,
     441,   401,   402,   455,   723,   362,   363,   732,   284,   729,
     600,   601,   342,   343,   363,   988,   602,   348,   416,  1099,
     346,   347,  -443,   837,   302,   302,   576,   590,   576,   401,
     865,   576,   729,   583,   465,  -472,   312,  -472,   252,   252,
     252,   433,    13,   465,   597,    14,   904,   417,   504,   988,
     252,  -442,   454,  1111,   988,   914,   403,   404,  1112,   465,
     285,   454,   405,   603,   716,   988,   445,   286,   718,  1117,
    -449,   670,   719,   671,   401,   971,  1043,   342,   343,   344,
     670,   730,   686,   731,   345,   346,   347,   670,   260,   710,
     889,   321,  -475,   260,   442,   418,   419,   420,  -446,   776,
     442,   777,   421,   422,   423,   778,   302,   779,   321,   406,
     670,   823,   817,   824,   574,   575,   823,   356,   825,   407,
     776,   357,   830,   442,   302,   823,   302,   831,   253,   253,
     253,  1059,  1060,  1061,  1062,  1063,   442,  1090,   408,  -440,
     253,   322,   776,   948,   839,   442,   287,   508,   510,   512,
     612,   617,   827,   829,   518,   520,   522,   288,   322,   992,
     993,   994,   995,   775,   996,   997,  -448,   465,   947,   850,
     823,   851,   891,  -452,   823,   960,   892,  -453,   353,   353,
     776,   368,   894,   857,   293,   294,   409,   410,   411,   823,
     776,   895,   898,   412,   413,   414,   674,   312,  -444,   953,
     321,   963,   364,   964,   333,   334,   335,   336,   337,   295,
     364,   323,   324,   325,   303,  -447,   691,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   967,   988,   968,   989,
     577,   776,   579,   991,  1010,   582,  1011,   585,   670,   370,
    1017,   754,   260,   260,   260,   960,   210,   454,   296,   902,
     322,  -451,   906,   454,   260,  1009,   362,   211,  1041,   445,
    1042,   212,   723,   297,   362,   213,   214,   445,   776,  1077,
    1066,  1078,   960,  -454,   338,   499,   761,  1095,  1077,  1077,
    1079,  1080,   339,  1077,   215,  1081,   302,  1077,  1051,  1082,
     792,   976,  1058,  1058,  1058,  1058,  1058,  1058,  1046,   369,
     377,   216,   252,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   217,   374,
     385,   218,   455,  1077,   723,  1083,  1086,   696,  1087,  1088,
     776,  1089,  1102,   321,   397,   219,   220,   221,   670,  1096,
    1103,  1093,   960,  1108,   698,  1109,   703,   222,   386,   302,
     387,   388,   223,   224,   389,   390,   391,   225,   321,  -256,
     392,   226,   227,   228,  -143,  -255,   762,   393,   395,  -257,
     445,   229,   396,   400,   275,   464,   771,   497,   466,   472,
     476,   477,   478,   322,   363,   992,   993,   994,   995,  1036,
     996,   997,   253,   252,  1027,   479,   484,   488,   489,   530,
    -126,   552,  -124,  -125,   555,   302,   556,   558,   322,   455,
     560,   561,   564,   444,   398,   572,   578,   638,   580,   581,
    1092,   586,   588,   650,   592,   593,   252,   625,   648,   659,
     663,   666,   676,   694,   695,   875,   323,   324,   709,   816,
     713,   541,   728,   302,   331,   332,   333,   334,   335,   336,
     337,   735,   455,   402,   736,   737,   742,   302,   738,   739,
     252,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   740,   741,   745,   677,
     765,   761,   746,   253,   749,   750,   751,   755,   302,   756,
     924,   759,   767,   636,   774,   846,   784,   916,   800,   920,
     548,   795,   252,   252,   302,   801,   260,   799,   805,   806,
     814,   815,   818,   819,   820,   821,   253,   847,   834,   583,
     822,   840,   845,   302,   852,   641,   858,   860,   864,   868,
     890,   879,   907,   691,   314,   861,   921,   862,   866,   876,
     321,   888,   896,   930,   922,   252,   941,   886,   943,   594,
     253,   956,   945,   605,   608,   548,   548,   619,   622,   624,
     318,   966,   628,   629,   630,   631,   632,   633,   634,   635,
     969,   762,   454,   970,   972,   973,   974,   977,   771,   975,
     364,   978,   980,   982,   985,   986,   990,   655,  1019,  1004,
     322,  1000,   253,   253,   927,  1001,  1012,   260,  1015,  1020,
    1021,  1022,  1029,  1030,  1053,  1031,  1071,  1032,   252,   252,
     252,   302,  1033,   950,  1039,   252,  1056,  1072,  1034,  1035,
    1044,  1045,  1070,   252,  1047,  1048,   302,  1065,  1069,  1073,
     260,  1074,   692,  1084,   362,   253,  1091,   209,  1100,  1101,
    1105,  1110,   252,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   252,   454,
     252,   680,  1113,   681,   260,  1114,  1115,  1118,   583,   583,
     583,   583,   583,   583,   669,   321,   302,   434,  1016,   438,
     639,   807,   652,   614,   427,   765,  1064,  1040,   563,  1076,
     503,   949,  1055,   887,   252,  1028,  1104,  1037,   253,   253,
     253,   927,   454,   302,   940,   253,   260,   260,   796,   689,
     874,   252,   252,   253,   273,   583,   950,   909,   715,   965,
     781,   903,   919,   585,   766,   322,   493,   769,     0,     0,
       0,     0,   253,     0,     0,     0,     0,     0,   302,   302,
     655,     0,     0,     0,     0,     0,   752,     0,   253,   260,
     253,   302,   198,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   674,     0,     0,   655,
     758,     0,     0,     0,     0,     0,     0,     0,   323,   324,
     325,     0,     0,     0,   253,   330,   331,   332,   333,   334,
     335,   336,   337,   950,     0,     0,     0,     0,     0,     0,
       0,   253,   253,   444,     0,     0,     0,     0,     0,     0,
       0,     0,   260,   260,   260,     0,     0,     0,     0,   260,
       0,     0,     0,     0,   931,     0,     0,   260,   950,   950,
       0,   321,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   950,     0,     0,     0,     0,   260,     0,     0,   321,
       0,     0,     0,     0,     0,   932,     0,     0,     0,     0,
       0,     0,   260,     0,   260,     0,     0,     0,     0,     0,
       0,     0,   585,   585,   585,   585,   585,   585,     0,     0,
     933,   322,   934,     0,     0,     0,     0,     0,     0,   826,
     828,     0,     0,     0,     0,   935,     0,   655,   260,   322,
     838,     0,     0,   655,     0,   936,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   260,   260,   292,     0,   585,
     856,     0,     0,     0,     0,     0,     0,     0,   298,   937,
     299,     0,     0,   938,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   692,
       0,     0,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,     0,     0,     0,
     682,     0,   683,     0,     0,     0,     0,     0,   893,     0,
       0,     0,     0,     0,   897,     0,   901,     0,   321,   905,
       0,     0,     0,     0,     0,     0,   444,     0,     0,     0,
       0,     0,     0,   429,   444,     0,     0,     0,     0,   321,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   467,     0,   470,   471,     0,   473,   474,   475,     0,
     321,     0,     0,     0,     0,   482,   483,     0,   322,     0,
       0,     0,     0,     0,   655,     0,     0,     0,     0,   491,
       0,     0,     0,     0,   655,   198,     0,     0,     0,   322,
       0,   505,   506,   507,   509,   511,   513,   514,   515,   516,
     517,   519,   521,   523,   524,   525,   526,   527,   321,   529,
     322,     0,   533,   534,   535,   536,   537,   538,     0,     0,
       0,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,     0,   444,     0,     0,
    1008,   485,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,     0,   322,     0,
       0,  1026,   673,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,     0,     0,
       0,   655,     0,   679,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   198,     0,     0,     0,     0,     0,     0,
       0,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,     0,     0,   299,     0,
       0,   688,     0,     0,     0,   149,    41,   150,   151,   152,
       0,   153,   655,     0,   154,     0,     0,   684,   685,   155,
       0,    42,    43,   156,   157,     0,    46,   158,    48,    49,
     159,     0,    51,    52,    53,    54,    55,    56,    57,    58,
     160,    60,    61,   161,   162,   163,    65,    66,    67,     0,
       0,   164,     0,     0,     0,   165,    70,     0,     0,    71,
      72,    73,   166,   167,    76,     0,     0,     0,     0,     0,
       0,     0,     0,    77,   168,     0,   169,    79,     0,   170,
       0,    81,    82,   171,   172,    85,     0,     0,    86,     0,
       0,    87,     0,    88,    89,    90,   173,    92,   174,   175,
       0,   176,    96,    97,    98,   177,     0,     0,    99,     0,
     100,   101,   102,   103,   178,   179,   180,   107,   181,     0,
     109,   182,   111,   112,   183,   114,   321,   115,   116,   117,
     118,   119,   120,   121,   122,     0,   184,   124,   125,   126,
     127,   128,     0,   129,   130,   131,   132,   133,   185,   186,
     136,   137,   187,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   188,   189,     0,     0,     0,     0,
       0,     0,   190,     0,   191,     0,   322,     0,     0,     0,
       0,   429,     0,   429,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   198,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     802,     0,   803,     0,     0,     0,     0,   804,     0,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,     0,     0,     0,     0,     0,   871,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   289,
      41,   150,   151,   152,     0,   153,     0,     0,   154,     0,
       0,     0,     0,   155,     0,    42,    43,   156,   157,     0,
      46,   158,    48,    49,   159,     0,    51,    52,    53,    54,
      55,    56,    57,    58,   160,    60,    61,   161,   162,   163,
      65,    66,    67,     0,     0,   164,     0,     0,     0,   165,
      70,     0,     0,    71,    72,    73,   166,   167,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    77,   168,     0,
     169,    79,     0,   170,     0,    81,    82,   171,   172,    85,
     869,   870,    86,     0,     0,    87,   198,    88,    89,    90,
     173,    92,   174,   175,     0,   176,    96,    97,    98,   177,
       0,     0,    99,     0,   100,   101,   102,   103,   178,   179,
     180,   107,   181,     0,   109,   182,   111,   112,   183,   114,
       0,   115,   116,   117,   118,   119,   120,   121,   122,     0,
     184,   124,   125,   126,   127,   128,     0,   129,   130,   131,
     132,   133,   185,   186,   136,   137,   187,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   188,   189,
       0,   289,    41,   150,   151,   152,   190,   457,   191,     0,
       0,     0,     0,     0,     0,   155,     0,    42,    43,   156,
     157,     0,    46,    47,    48,    49,   159,     0,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,   161,
     162,   163,    65,    66,    67,     0,     0,   164,     0,     0,
       0,   165,    70,     0,     0,    71,    72,    73,    74,    75,
      76,     0,     0,     0,     0,     0,     0,     0,     0,    77,
     168,     0,   169,    79,     0,   170,     0,    81,    82,   171,
     172,    85,     0,     0,    86,     0,     0,    87,     0,    88,
      89,    90,   290,    92,   291,   175,     0,   176,    96,    97,
      98,   177,     0,     0,    99,     0,   100,   101,   102,   103,
     178,   179,   180,   107,   181,     0,   109,   182,   111,   112,
     183,   114,     0,   115,   116,   117,   118,   119,   120,   121,
     122,     0,   123,   124,   125,   126,   127,   128,     0,   129,
     130,   131,   132,   133,   185,   186,   136,   137,   187,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     188,   289,    41,   150,   151,   152,     0,   457,   458,   459,
     191,     0,     0,     0,     0,   155,     0,    42,    43,   156,
     157,     0,    46,    47,    48,    49,   159,     0,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,   161,
     162,   163,    65,    66,    67,     0,     0,   164,     0,     0,
       0,   165,    70,     0,     0,    71,    72,    73,    74,    75,
      76,     0,     0,     0,     0,     0,     0,     0,     0,    77,
     168,     0,   169,    79,     0,   170,     0,    81,    82,   171,
     172,    85,     0,     0,    86,     0,     0,    87,     0,    88,
      89,    90,   290,    92,   291,   175,     0,   176,    96,    97,
      98,   177,     0,     0,    99,     0,   100,   101,   102,   103,
     178,   179,   180,   107,   181,     0,   109,   182,   111,   112,
     183,   114,     0,   115,   116,   117,   118,   119,   120,   121,
     122,     0,   123,   124,   125,   126,   127,   128,     0,   129,
     130,   131,   132,   133,   185,   186,   136,   137,   187,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     188,   289,    41,   150,   151,   152,     0,   153,   190,   480,
     191,     0,     0,     0,     0,   155,     0,    42,    43,   156,
     157,     0,    46,    47,    48,    49,   159,     0,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,   161,
     162,   163,    65,    66,    67,     0,     0,   164,     0,     0,
       0,   165,    70,     0,     0,    71,    72,    73,    74,    75,
      76,     0,     0,     0,     0,     0,     0,     0,     0,    77,
     168,     0,   169,    79,     0,   170,     0,    81,    82,   171,
     172,    85,     0,     0,    86,     0,     0,    87,     0,    88,
      89,    90,   290,    92,   291,   175,     0,   176,    96,    97,
      98,   177,     0,     0,    99,     0,   100,   101,   102,   103,
     178,   179,   180,   107,   181,     0,   109,   182,   111,   112,
     183,   114,   668,   115,   116,   117,   118,   119,   120,   121,
     122,     0,   123,   124,   125,   126,   127,   128,     0,   129,
     130,   131,   132,   133,   185,   186,   136,   137,   187,     0,
       0,     0,     0,     0,     0,   289,    41,   150,   151,   152,
     188,   457,     0,     0,     0,     0,     0,     0,   190,   155,
     191,    42,    43,   156,   157,     0,    46,    47,    48,    49,
     159,     0,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,   161,   162,   163,    65,    66,    67,     0,
       0,   164,     0,     0,     0,   165,    70,     0,     0,    71,
      72,    73,    74,    75,    76,     0,     0,     0,     0,     0,
       0,     0,     0,    77,   168,     0,   169,    79,     0,   170,
       0,    81,    82,   171,   172,    85,     0,     0,    86,     0,
       0,    87,     0,    88,    89,    90,   290,    92,   291,   175,
       0,   176,    96,    97,    98,   177,     0,     0,    99,     0,
     100,   101,   102,   103,   178,   179,   180,   107,   181,     0,
     109,   182,   111,   112,   183,   114,     0,   115,   116,   117,
     118,   119,   120,   121,   122,     0,   123,   124,   125,   126,
     127,   128,     0,   129,   130,   131,   132,   133,   185,   186,
     136,   137,   187,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   188,   289,    41,   150,   151,   152,
       0,   153,   190,   459,   191,     0,     0,     0,     0,   155,
       0,    42,    43,   156,   157,     0,    46,    47,    48,    49,
     159,     0,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,   161,   162,   163,    65,    66,    67,     0,
       0,   164,     0,     0,     0,   165,    70,     0,     0,    71,
      72,    73,    74,    75,    76,     0,     0,     0,     0,     0,
       0,     0,     0,    77,   168,     0,   169,    79,     0,   170,
       0,    81,    82,   171,   172,    85,     0,     0,    86,     0,
       0,    87,     0,    88,    89,    90,   290,    92,   291,   175,
       0,   176,    96,    97,    98,   177,     0,     0,    99,     0,
     100,   101,   102,   103,   178,   179,   180,   107,   181,     0,
     109,   182,   111,   112,   183,   114,     0,   115,   116,   117,
     118,   119,   120,   121,   122,     0,   123,   124,   125,   126,
     127,   128,     0,   129,   130,   131,   132,   133,   185,   186,
     136,   137,   187,     0,     0,     0,     0,     0,     0,   289,
      41,   150,   151,   152,   188,   490,     0,     0,     0,     0,
       0,     0,   190,   155,   191,    42,    43,   156,   157,     0,
      46,    47,    48,    49,   159,     0,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,   161,   162,   163,
      65,    66,    67,     0,     0,   164,     0,     0,     0,   165,
      70,     0,     0,    71,    72,    73,    74,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    77,   168,     0,
     169,    79,     0,   170,     0,    81,    82,   171,   172,    85,
       0,     0,    86,     0,     0,    87,     0,    88,    89,    90,
     290,    92,   291,   175,     0,   176,    96,    97,    98,   177,
       0,     0,    99,     0,   100,   101,   102,   103,   178,   179,
     180,   107,   181,     0,   109,   182,   111,   112,   183,   114,
       0,   115,   116,   117,   118,   119,   120,   121,   122,     0,
     123,   124,   125,   126,   127,   128,     0,   129,   130,   131,
     132,   133,   185,   186,   136,   137,   187,     0,     0,     0,
       0,     0,     0,   289,    41,   150,   151,   152,   188,   457,
       0,     0,     0,     0,     0,     0,   190,   155,   191,    42,
      43,   156,   157,     0,    46,    47,    48,    49,   159,     0,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,   161,   162,   163,    65,    66,    67,     0,     0,   164,
       0,     0,     0,   165,    70,     0,     0,    71,    72,    73,
      74,    75,    76,     0,     0,     0,     0,     0,     0,     0,
       0,    77,   168,     0,   169,    79,     0,   170,     0,    81,
      82,   171,   172,    85,     0,     0,    86,     0,     0,    87,
       0,    88,    89,    90,   290,    92,   291,   175,     0,   176,
      96,    97,    98,   177,     0,     0,    99,     0,   100,   101,
     102,   103,   178,   179,   180,   107,   181,     0,   109,   182,
     111,   112,   183,   114,     0,   115,   116,   117,   118,   119,
     120,   121,   122,     0,   123,   124,   125,   126,   127,   128,
       0,   129,   130,   131,   132,   133,   185,   186,   136,   137,
     187,     0,     0,     0,     0,     0,     0,    40,    41,   234,
     235,     0,   188,     0,     0,     0,     0,     0,     0,     0,
     190,     0,   191,    42,    43,   236,   237,     0,    46,    47,
      48,    49,   238,     0,    51,    52,    53,    54,    55,    56,
      57,    58,   239,    60,    61,    62,    63,    64,    65,    66,
      67,     0,     0,   240,     0,   241,     0,   242,    70,     0,
       0,    71,    72,    73,   243,    75,    76,     0,     0,     0,
       0,     0,     0,     0,     0,    77,    78,     0,     0,    79,
       0,    80,     0,    81,   244,    83,   245,    85,     0,     0,
      86,   786,     0,    87,     0,    88,    89,   787,    91,    92,
      93,    94,     0,    95,    96,    97,    98,   246,     0,     0,
      99,     0,   100,   101,   102,   103,   104,   105,   106,   107,
     247,     0,   109,   110,   111,   112,   113,   114,     0,   115,
     116,   117,   118,   119,   120,   121,   248,     0,   123,   124,
     125,   126,   127,   128,     0,   129,   130,   131,   132,   133,
     134,   249,   136,   137,   138,     0,     0,     0,     0,    40,
      41,   234,   235,     0,     0,     0,   250,     0,     0,     0,
       0,     0,     0,     0,   788,    42,    43,   236,   237,     0,
      46,    47,    48,    49,   238,     0,    51,    52,    53,    54,
      55,    56,    57,    58,   239,    60,    61,    62,    63,    64,
      65,    66,    67,     0,     0,   240,     0,   241,     0,   242,
      70,     0,     0,    71,    72,    73,   243,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    77,    78,     0,
       0,    79,     0,    80,     0,    81,   244,    83,   245,    85,
       0,     0,    86,     0,     0,    87,     0,    88,    89,    90,
      91,    92,    93,    94,     0,    95,    96,    97,    98,   246,
       0,     0,    99,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   247,     0,   109,   110,   111,   112,   113,   114,
       0,   115,   116,   117,   118,   119,   120,   121,   248,     0,
     123,   124,   125,   126,   127,   128,     0,   129,   130,   131,
     132,   133,   134,   249,   136,   137,   138,     0,     0,     0,
       0,    40,    41,   234,   235,     0,     0,     0,   250,     0,
       0,     0,     0,     0,     0,     0,   251,    42,    43,   236,
     237,     0,    46,    47,    48,    49,   238,     0,    51,    52,
      53,    54,    55,    56,    57,    58,   239,    60,    61,    62,
      63,    64,    65,    66,    67,     0,     0,   240,     0,   241,
       0,   242,    70,     0,     0,    71,    72,    73,   243,    75,
      76,     0,     0,     0,     0,     0,     0,     0,     0,    77,
      78,     0,     0,    79,     0,    80,     0,    81,   244,    83,
     245,    85,     0,     0,    86,     0,     0,    87,     0,    88,
      89,   863,    91,    92,    93,    94,     0,    95,    96,    97,
      98,   246,     0,     0,    99,     0,   100,   101,   102,   103,
     104,   105,   106,   107,   247,     0,   109,   110,   111,   112,
     113,   114,     0,   115,   116,   117,   118,   119,   120,   121,
     248,     0,   123,   124,   125,   126,   127,   128,     0,   129,
     130,   131,   132,   133,   134,   249,   136,   137,   138,     0,
       0,     0,     0,     0,    40,   358,     0,     0,     0,     0,
     250,     0,     0,   495,     0,     0,     0,     0,   251,   360,
      42,    43,    44,    45,     0,    46,    47,    48,    49,    50,
       0,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,     0,
      68,     0,     0,     0,    69,    70,     0,     0,    71,    72,
      73,    74,    75,    76,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    78,     0,     0,    79,     0,    80,     0,
      81,    82,    83,    84,    85,     0,     0,    86,     0,     0,
      87,     0,    88,    89,    90,    91,    92,    93,    94,     0,
      95,    96,    97,    98,     0,     0,     0,    99,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     0,   109,
     110,   111,   112,   113,   114,     0,   115,   116,   117,   118,
     119,   120,   121,   122,     0,   123,   124,   125,   126,   127,
     128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,     0,     0,     0,     0,    40,    41,     0,   883,
       0,     0,   884,     0,     0,     0,     0,     0,     0,     0,
       0,   496,    42,    43,    44,    45,     0,    46,    47,    48,
      49,    50,     0,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
       0,     0,    68,     0,     0,     0,    69,    70,     0,     0,
      71,    72,    73,    74,    75,    76,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    78,     0,     0,    79,     0,
      80,     0,    81,    82,    83,    84,    85,     0,     0,    86,
       0,     0,    87,     0,    88,    89,    90,    91,    92,    93,
      94,     0,    95,    96,    97,    98,     0,     0,     0,    99,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,   109,   110,   111,   112,   113,   114,     0,   115,   116,
     117,   118,   119,   120,   121,   122,     0,   123,   124,   125,
     126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,     0,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   885,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,     0,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,     0,     0,    68,     0,     0,     0,    69,    70,
       0,     0,    71,    72,    73,    74,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,    77,    78,     0,     0,
      79,     0,    80,     0,    81,    82,    83,    84,    85,     0,
       0,    86,     0,     0,    87,     0,    88,    89,    90,    91,
      92,    93,    94,     0,    95,    96,    97,    98,     0,     0,
       0,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,     0,   109,   110,   111,   112,   113,   114,     0,
     115,   116,   117,   118,   119,   120,   121,   122,     0,   123,
     124,   125,   126,   127,   128,     0,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,     0,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   596,    42,    43,    44,    45,
       0,    46,    47,    48,    49,    50,     0,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,     0,     0,    68,     0,     0,     0,
      69,    70,     0,     0,    71,    72,    73,    74,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,    77,    78,
       0,     0,    79,     0,    80,     0,    81,    82,    83,    84,
      85,     0,     0,    86,     0,     0,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,    95,    96,    97,    98,
       0,     0,     0,    99,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     0,   109,   110,   111,   112,   113,
     114,     0,   115,   116,   117,   118,   119,   120,   121,   122,
       0,   123,   124,   125,   126,   127,   128,     0,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,     0,     0,
       0,     0,    40,    41,   234,   235,   439,     0,   613,     0,
       0,     0,     0,     0,     0,     0,   441,   753,    42,    43,
      44,    45,     0,    46,    47,    48,    49,   238,     0,    51,
      52,    53,    54,    55,    56,    57,    58,   239,    60,    61,
      62,    63,    64,    65,    66,    67,     0,     0,   240,     0,
     241,   545,   242,    70,     0,     0,    71,    72,    73,   243,
      75,    76,     0,     0,     0,     0,     0,     0,     0,     0,
      77,    78,     0,     0,    79,     0,    80,     0,    81,   244,
      83,   245,    85,     0,     0,    86,     0,     0,    87,     0,
      88,    89,    90,    91,    92,    93,    94,     0,    95,    96,
      97,    98,     0,     0,     0,    99,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,   109,   110,   111,
     112,   113,   114,     0,   115,   116,   117,   118,   119,   120,
     121,   248,     0,   123,   124,   125,   126,   127,   128,   546,
     129,   130,   131,   132,   133,   134,   249,   136,   137,   138,
      40,    41,     0,   235,     0,     0,   543,   544,     0,     0,
       0,   442,     0,     0,     0,     0,    42,    43,    44,    45,
       0,    46,    47,    48,    49,    50,     0,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,     0,     0,    68,     0,     0,   545,
      69,    70,     0,     0,    71,    72,    73,    74,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,    77,    78,
       0,     0,    79,     0,    80,     0,    81,    82,    83,    84,
      85,     0,     0,    86,     0,     0,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,    95,    96,    97,    98,
       0,     0,     0,    99,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     0,   109,   110,   111,   112,   113,
     114,     0,   115,   116,   117,   118,   119,   120,   121,   122,
       0,   123,   124,   125,   126,   127,   128,   546,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    40,    41,
     234,   235,     0,     0,     0,     0,     0,     0,     0,   250,
       0,     0,     0,     0,    42,    43,   236,   237,     0,    46,
      47,    48,    49,   238,     0,    51,    52,    53,    54,    55,
      56,    57,    58,   239,    60,    61,    62,    63,    64,    65,
      66,    67,     0,     0,   240,     0,   241,     0,   242,    70,
       0,     0,    71,    72,    73,   243,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,    77,    78,     0,     0,
      79,     0,    80,     0,    81,   244,    83,   245,    85,     0,
       0,    86,     0,     0,    87,     0,    88,    89,    90,    91,
      92,    93,    94,     0,    95,    96,    97,    98,     0,     0,
       0,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   247,     0,   109,   110,   111,   112,   113,   114,     0,
     115,   116,   117,   118,   119,   120,   121,   248,     0,   123,
     124,   125,   126,   127,   128,     0,   129,   130,   131,   132,
     133,   134,   249,   136,   137,   138,    40,    41,     0,   235,
       0,     0,   690,     0,     0,     0,     0,   250,     0,     0,
       0,     0,    42,    43,    44,    45,     0,    46,    47,    48,
      49,    50,     0,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
       0,     0,    68,     0,     0,     0,    69,    70,     0,     0,
      71,    72,    73,    74,    75,    76,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    78,     0,     0,    79,     0,
      80,     0,    81,    82,    83,    84,    85,     0,     0,    86,
       0,     0,    87,     0,    88,    89,    90,    91,    92,    93,
      94,     0,    95,    96,    97,    98,     0,     0,     0,    99,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,   109,   110,   111,   112,   113,   114,     0,   115,   116,
     117,   118,   119,   120,   121,   122,     0,   123,   124,   125,
     126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    40,    41,     0,   349,   350,     0,
     351,   352,     0,     0,     0,   250,     0,     0,     0,     0,
      42,    43,    44,    45,     0,    46,    47,    48,    49,    50,
       0,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,     0,
      68,     0,     0,     0,    69,    70,     0,     0,    71,    72,
      73,    74,    75,    76,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    78,     0,     0,    79,     0,    80,     0,
      81,    82,    83,    84,    85,     0,     0,    86,     0,     0,
      87,     0,    88,    89,    90,    91,    92,    93,    94,     0,
      95,    96,    97,    98,     0,     0,     0,    99,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     0,   109,
     110,   111,   112,   113,   114,     0,   115,   116,   117,   118,
     119,   120,   121,   122,     0,   123,   124,   125,   126,   127,
     128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      44,    45,     0,    46,    47,    48,    49,    50,     0,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,     0,     0,    68,     0,
       0,     0,    69,    70,     0,     0,    71,    72,    73,    74,
      75,    76,     0,     0,     0,     0,     0,     0,     0,     0,
      77,    78,     0,   300,    79,     0,    80,     0,    81,    82,
      83,    84,    85,     0,     0,    86,     0,     0,    87,   301,
      88,    89,    90,    91,    92,    93,    94,     0,    95,    96,
      97,    98,     0,     0,     0,    99,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,   109,   110,   111,
     112,   113,   114,     0,   115,   116,   117,   118,   119,   120,
     121,   122,     0,   123,   124,   125,   126,   127,   128,     0,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      40,   358,     0,     0,     0,     0,   359,     0,     0,     0,
       0,     0,     0,     0,     0,   360,    42,    43,    44,    45,
       0,    46,    47,    48,    49,    50,     0,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,     0,     0,    68,     0,     0,     0,
      69,    70,     0,     0,    71,    72,    73,    74,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,    77,    78,
       0,     0,    79,     0,    80,     0,    81,    82,    83,    84,
      85,     0,     0,    86,     0,     0,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,    95,    96,    97,    98,
       0,     0,     0,    99,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     0,   109,   110,   111,   112,   113,
     114,     0,   115,   116,   117,   118,   119,   120,   361,   122,
       0,   123,   124,   125,   126,   127,   128,     0,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    40,    41,
     234,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,    44,    45,     0,    46,
      47,    48,    49,   238,     0,    51,    52,    53,    54,    55,
      56,    57,    58,   239,    60,    61,    62,    63,    64,    65,
      66,    67,     0,     0,   240,     0,   241,     0,    69,    70,
       0,     0,    71,    72,    73,   243,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,    77,    78,     0,     0,
      79,     0,    80,     0,    81,    82,    83,   245,    85,     0,
       0,    86,     0,     0,    87,     0,    88,    89,    90,    91,
      92,    93,    94,     0,    95,    96,    97,    98,     0,     0,
       0,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,     0,   109,   110,   111,   112,   113,   114,     0,
     115,   116,   117,   118,   119,   120,   121,   122,     0,   123,
     124,   125,   126,   127,   128,     0,   129,   130,   131,   132,
     133,   134,   249,   136,   137,   138,    40,    41,   234,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    43,    44,    45,     0,    46,    47,    48,
      49,   238,     0,    51,    52,    53,    54,    55,    56,    57,
      58,   958,    60,    61,    62,    63,    64,    65,    66,    67,
       0,     0,   240,     0,   241,     0,    69,    70,     0,     0,
      71,    72,    73,   243,    75,    76,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    78,     0,     0,    79,     0,
      80,     0,    81,    82,    83,   245,    85,     0,     0,    86,
       0,     0,    87,     0,    88,    89,    90,    91,    92,    93,
      94,     0,    95,    96,    97,    98,     0,     0,     0,    99,
       0,   100,   101,   102,   103,   104,   105,   959,   107,   108,
       0,   109,   110,   111,   112,   113,   114,     0,   115,   116,
     117,   118,   119,   120,   121,   122,     0,   123,   124,   125,
     126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
     249,   136,   137,   138,    40,   358,     0,     0,     0,     0,
       0,     0,     0,   495,     0,     0,     0,     0,     0,   360,
      42,    43,    44,    45,     0,    46,    47,    48,    49,    50,
       0,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,     0,
      68,     0,     0,     0,    69,    70,     0,     0,    71,    72,
      73,    74,    75,    76,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    78,     0,     0,    79,     0,    80,     0,
      81,    82,    83,    84,    85,     0,     0,    86,     0,     0,
      87,     0,    88,    89,    90,    91,    92,    93,    94,     0,
      95,    96,    97,    98,     0,     0,     0,    99,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     0,   109,
     110,   111,   112,   113,   114,     0,   115,   116,   117,   118,
     119,   120,   121,   122,     0,   123,   124,   125,   126,   127,
     128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    40,   358,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   360,    42,    43,
      44,    45,     0,    46,    47,    48,    49,    50,     0,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,     0,     0,    68,     0,
       0,     0,    69,    70,     0,     0,    71,    72,    73,    74,
      75,    76,     0,     0,     0,     0,     0,     0,     0,     0,
      77,    78,     0,     0,    79,     0,    80,     0,    81,    82,
      83,    84,    85,     0,     0,    86,     0,     0,    87,     0,
      88,    89,    90,    91,    92,    93,    94,     0,    95,    96,
      97,    98,     0,     0,     0,    99,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,   109,   110,   111,
     112,   113,   114,     0,   115,   116,   117,   118,   119,   120,
     121,   122,     0,   123,   124,   125,   126,   127,   128,     0,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      40,   453,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   360,    42,    43,    44,    45,
       0,    46,    47,    48,    49,    50,     0,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,     0,     0,    68,     0,     0,     0,
      69,    70,     0,     0,    71,    72,    73,    74,    75,    76,
       0,     0,     0,     0,     0,     0,     0,     0,    77,    78,
       0,     0,    79,     0,    80,     0,    81,    82,    83,    84,
      85,     0,     0,    86,     0,     0,    87,     0,    88,    89,
      90,    91,    92,    93,    94,     0,    95,    96,    97,    98,
       0,     0,     0,    99,     0,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     0,   109,   110,   111,   112,   113,
     114,     0,   115,   116,   117,   118,   119,   120,   121,   122,
       0,   123,   124,   125,   126,   127,   128,     0,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,     0,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,     0,     0,    68,     0,     0,     0,    69,    70,
       0,     0,    71,    72,    73,    74,    75,    76,     0,     0,
       0,     0,     0,     0,     0,     0,    77,    78,     0,     0,
      79,     0,    80,     0,    81,    82,    83,    84,    85,     0,
       0,    86,     0,     0,    87,   915,    88,    89,    90,    91,
      92,    93,    94,     0,    95,    96,    97,    98,     0,     0,
       0,    99,     0,   100,   101,   102,   103,   104,   105,   106,
     107,   108,     0,   109,   110,   111,   112,   113,   114,     0,
     115,   116,   117,   118,   119,   120,   121,   122,     0,   123,
     124,   125,   126,   127,   128,     0,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    40,    41,     0,   926,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    43,    44,    45,     0,    46,    47,    48,
      49,    50,     0,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
       0,     0,    68,     0,     0,     0,    69,    70,     0,     0,
      71,    72,    73,    74,    75,    76,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    78,     0,     0,    79,     0,
      80,     0,    81,    82,    83,    84,    85,     0,     0,    86,
       0,     0,    87,     0,    88,    89,    90,    91,    92,    93,
      94,     0,    95,    96,    97,    98,     0,     0,     0,    99,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       0,   109,   110,   111,   112,   113,   114,     0,   115,   116,
     117,   118,   119,   120,   121,   122,     0,   123,   124,   125,
     126,   127,   128,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,    43,    44,    45,     0,    46,    47,    48,    49,    50,
       0,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     0,     0,
      68,     0,     0,     0,    69,    70,     0,     0,    71,    72,
      73,    74,    75,    76,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    78,     0,     0,    79,     0,    80,     0,
      81,    82,    83,    84,    85,     0,     0,    86,     0,     0,
      87,     0,    88,    89,    90,    91,    92,    93,    94,     0,
      95,    96,    97,    98,     0,     0,     0,    99,     0,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     0,   109,
     110,   111,   112,   113,   114,     0,   115,   116,   117,   118,
     119,   120,   121,   122,     0,   123,   124,   125,   126,   127,
     128,     0,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    40,   453,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      44,    45,     0,    46,    47,    48,    49,    50,     0,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,     0,     0,    68,     0,
       0,     0,    69,    70,     0,     0,    71,    72,    73,    74,
      75,    76,     0,     0,     0,     0,     0,     0,     0,     0,
      77,    78,     0,     0,    79,     0,    80,     0,    81,    82,
      83,    84,    85,     0,     0,    86,     0,     0,    87,     0,
      88,    89,    90,    91,    92,    93,    94,     0,    95,    96,
      97,    98,     0,     0,     0,    99,     0,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     0,   109,   110,   111,
     112,   113,   114,     0,   115,   116,   117,   118,   119,   120,
     121,   122,     0,   123,   124,   125,   126,   127,   128,    40,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
       0,     0,     0,     0,     0,    42,    43,    44,    45,     0,
      46,    47,    48,    49,    50,     0,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,     0,     0,    68,     0,     0,     0,    69,
      70,   721,     0,    71,    72,    73,    74,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    77,    78,     0,
       0,    79,     0,    80,     0,    81,    82,    83,    84,    85,
       0,     0,    86,     0,     0,    87,     0,    88,    89,    90,
      91,    92,    93,    94,     0,    95,    96,    97,    98,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   108,     0,   109,   110,   111,   112,   113,   114,
       0,   115,   116,   117,   118,   119,   120,   121,   122,     0,
     123,   124,   125,   126,   127,   128,     0,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    40,     0,     0,
       0,     0,     0,     0,     0,     0,   154,     0,     0,     0,
       0,     0,     0,     0,    43,    44,    45,     0,    46,    47,
      48,    49,    50,     0,    51,   206,    53,    54,     0,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,     0,     0,    68,     0,     0,     0,    69,    70,   321,
       0,    71,    72,    73,    74,    75,    76,     0,     0,     0,
       0,     0,     0,     0,     0,    77,    78,     0,     0,    79,
       0,    80,     0,    81,    82,    83,    84,    85,     0,     0,
      86,     0,     0,    87,   321,    88,    89,    90,    91,    92,
      93,    94,     0,    95,    96,    97,   207,     0,     0,   322,
      99,     0,   100,   101,   102,   103,   104,   105,   106,   107,
     108,     0,   109,   110,   111,   112,   113,   114,   321,   115,
     116,   117,   118,   119,   120,   121,   122,     0,   123,   124,
     125,   126,   127,     0,   322,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,     0,     0,     0,     0,     0,
       0,     0,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   321,   322,     0,
       0,     0,   872,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   321,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,     0,     0,     0,   678,   321,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   322,     0,     0,
       0,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   322,   321,     0,   687,
       0,     0,     0,   711,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   321,     0,   322,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   321,     0,   322,   680,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   322,   321,     0,   682,     0,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,     0,     0,     0,   873,     0,     0,
       0,     0,     0,     0,     0,   322,     0,     0,     0,     0,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   322,     0,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   323,   324,
     325,     0,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,     0,     0,     0,     0,     0,   323,   324,
     325,     0,     0,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,     1,     0,     0,     0,     2,     0,     0,
       0,     0,     0,     0,     3,     0,     0,     0,     0,     0,
       0,     4,     5,     6,     0,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,    11,     0,     0,
       0,    12,    13,     0,     0,    14,     0,    15,     0,     0,
      16,     0,     0,     0,     0,     0,     0,     0,     0,    17
};

static const yytype_int16 yycheck[] =
{
       2,    12,    16,   562,   294,   210,   313,   273,   360,   848,
     659,   450,   210,     9,    16,   348,   276,   395,   456,     6,
     436,    29,   426,   139,   357,   596,   231,     6,   400,   780,
       0,     6,   436,   231,     9,   278,   269,    34,     6,     7,
     412,     9,    51,    15,     6,     7,   450,     9,   338,    17,
      74,    56,    47,    23,   625,    17,   261,   593,   497,    15,
     596,    17,   763,   261,    23,    13,     6,     7,     0,   267,
     268,    56,   270,    56,   158,   273,    32,    17,   104,   495,
      56,   497,    75,     0,   168,    90,    56,     6,     7,   985,
     218,   495,    10,   497,    15,    16,    17,   225,    17,   227,
      10,   104,   167,   369,    16,    47,    23,   977,   313,    48,
     811,   231,    29,    89,    74,   313,     6,     7,     6,     7,
      90,     9,     6,     7,    84,     9,  1022,    17,   106,    17,
      47,   864,   865,    17,    51,    15,    16,    17,    15,    16,
      17,   261,   135,   169,   168,   147,     6,     7,   148,     9,
     270,   168,   568,    74,   171,    17,    83,    17,   167,    98,
    1056,   169,   360,    84,   169,   162,   169,   918,   163,   169,
      32,   369,   405,    90,   170,   162,   409,   410,   411,   412,
     413,   414,   753,   162,   169,   103,   169,   162,   759,   191,
     107,   169,    52,   103,   162,   170,   168,   167,   637,   169,
     162,    76,   170,   852,  1074,   207,   466,   540,   210,   171,
     169,   860,   171,   169,   750,   751,  1055,   753,    16,   170,
      27,   163,   162,   662,   163,   164,   165,   665,   666,   231,
     153,   171,   246,   361,    15,   158,    17,   251,   971,   972,
     530,   645,    89,   162,   246,   661,   374,   154,   155,   251,
     167,   126,   169,   174,   497,  1065,   131,   385,    15,   261,
      17,   820,   210,   702,   171,   267,   268,    74,   270,   271,
      56,    24,   162,   169,   162,    32,   170,   173,   162,   191,
     140,   171,   170,   231,   131,   701,   170,    24,   170,   555,
    1100,  1101,    45,   697,   174,   561,   700,   174,     6,     7,
     170,     9,   162,  1113,     6,     7,    74,     9,    45,    17,
     312,   313,   170,   261,   963,    17,    84,   170,   320,   267,
     268,   168,   270,   882,   170,   273,    78,     6,     7,   900,
       9,    27,   158,    85,   246,   170,    88,   775,    17,   251,
       6,     7,   168,     9,   760,   170,   348,     6,     7,     6,
       7,    17,     9,   168,   356,   357,   171,   555,    17,   564,
      17,   154,   155,   561,   562,   313,   564,   572,   170,   785,
      21,    22,   151,   152,   572,   169,    27,   125,    74,   173,
     159,   160,   170,   755,   386,   387,   388,   401,   390,   154,
     155,   393,   808,   395,   637,   169,   168,   171,   400,   401,
     402,   124,   125,   646,   406,   128,   844,   103,   320,   169,
     412,   170,   360,   173,   169,   853,    21,    22,   173,   662,
     170,   369,    27,    74,   552,   169,   659,   170,   556,   173,
     170,   169,   560,   171,   154,   155,  1007,   151,   152,   153,
     169,   569,   171,   571,   158,   159,   160,   169,   246,   171,
     822,    48,   170,   251,   162,   151,   152,   153,   170,   169,
     162,   171,   158,   159,   160,   169,   468,   171,    48,    74,
     169,   169,   171,   171,   386,   387,   169,   158,   171,    84,
     169,   158,   171,   162,   486,   169,   488,   171,   400,   401,
     402,  1031,  1032,  1033,  1034,  1035,   162,  1068,   103,   170,
     412,    98,   169,   881,   171,   162,   170,   323,   324,   325,
     411,   412,   745,   746,   330,   331,   332,   170,    98,    63,
      64,    65,    66,   651,    68,    69,   170,   770,   880,   169,
     169,   171,   171,   170,   169,   907,   171,   170,   540,   541,
     169,   125,   171,   776,   170,   170,   151,   152,   153,   169,
     169,   171,   171,   158,   159,   160,   468,   168,   170,   170,
      48,   169,   564,   171,   161,   162,   163,   164,   165,   170,
     572,   151,   152,   153,   486,   170,   488,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   169,   169,   171,   171,
     388,   169,   390,   171,   169,   393,   171,   395,   169,    89,
     171,   603,   400,   401,   402,   977,    20,   555,   170,   842,
      98,   170,   845,   561,   412,   967,   564,    31,   169,   852,
     171,    35,   820,   170,   572,    39,    40,   860,   169,   169,
     171,   171,  1004,   170,   170,   942,   638,  1075,   169,   169,
     171,   171,   170,   169,    58,   171,   648,   169,  1020,   171,
     664,   941,  1030,  1031,  1032,  1033,  1034,  1035,  1010,   135,
     106,    75,   664,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,    92,   131,
     144,    95,   880,   169,   882,   171,   169,   175,   171,   169,
     169,   171,   171,    48,     6,   109,   110,   111,   169,  1077,
     171,  1073,  1074,   169,   495,   171,   497,   121,   170,   711,
     170,   170,   126,   127,   170,   170,   170,   131,    48,   170,
     170,   135,   136,   137,    15,   170,   638,   170,   170,   170,
     963,   145,   170,   170,    15,    15,   648,   942,    17,   171,
     170,   170,   170,    98,   942,    63,    64,    65,    66,    67,
      68,    69,   664,   755,   987,   171,   171,   158,   170,   170,
     168,   131,   168,   168,   168,   767,   131,     9,    98,   967,
      19,   170,   169,   269,   788,   169,   163,   125,   171,   171,
    1070,   171,   170,   135,   170,   170,   788,   170,   170,   169,
     148,     9,   171,   171,   175,   806,   151,   152,     6,   711,
      10,   162,     6,   805,   159,   160,   161,   162,   163,   164,
     165,   171,  1010,   155,   171,   171,     9,   819,   171,   169,
     822,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   171,   171,   155,   169,
     638,   843,   155,   755,    10,   170,   170,   170,   850,   155,
     864,   170,    47,    15,   143,   767,   171,   859,    81,   861,
     356,   171,   864,   865,   866,    81,   664,   171,   158,   124,
       6,     6,   171,   158,   169,     9,   788,   107,   155,   881,
     158,   155,   158,   885,   170,   169,     9,   169,   155,    15,
       9,    85,    29,   805,    90,   170,     9,   170,   169,   171,
      48,   171,   171,   171,   170,   907,   170,   819,   107,   405,
     822,    70,    59,   409,   410,   411,   412,   413,   414,   415,
      23,   169,   418,   419,   420,   421,   422,   423,   424,   425,
       9,   843,   880,   155,   155,   169,   171,    29,   850,   171,
     942,    90,     6,   149,   105,   171,     9,   443,     6,   169,
      98,   170,   864,   865,   866,   170,   970,   755,   972,    29,
      59,    62,   171,   170,   107,   170,     6,   170,   970,   971,
     972,   973,   170,   885,   171,   977,   155,     6,   170,   170,
     169,   171,   170,   985,   171,   169,   988,   172,   171,   169,
     788,    29,   488,   171,   942,   907,   171,    13,   172,   172,
     171,   171,  1004,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,  1020,   967,
    1022,   169,   172,   171,   822,   171,   171,   171,  1030,  1031,
    1032,  1033,  1034,  1035,   458,    48,  1038,   264,   973,   268,
     431,   699,   442,   412,   261,   843,  1038,  1004,   379,  1056,
     315,   882,  1023,   820,  1056,   988,  1095,   998,   970,   971,
     972,   973,  1010,  1065,   870,   977,   864,   865,   670,   486,
     805,  1073,  1074,   985,   148,  1077,   988,   850,   541,   913,
     659,   843,   860,   881,   641,    98,   310,   643,    -1,    -1,
      -1,    -1,  1004,    -1,    -1,    -1,    -1,    -1,  1100,  1101,
     596,    -1,    -1,    -1,    -1,    -1,   602,    -1,  1020,   907,
    1022,  1113,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1038,    -1,    -1,   625,
     626,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,   152,
     153,    -1,    -1,    -1,  1056,   158,   159,   160,   161,   162,
     163,   164,   165,  1065,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1073,  1074,   659,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   970,   971,   972,    -1,    -1,    -1,    -1,   977,
      -1,    -1,    -1,    -1,    41,    -1,    -1,   985,  1100,  1101,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1113,    -1,    -1,    -1,    -1,  1004,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,  1020,    -1,  1022,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1030,  1031,  1032,  1033,  1034,  1035,    -1,    -1,
      97,    98,    99,    -1,    -1,    -1,    -1,    -1,    -1,   745,
     746,    -1,    -1,    -1,    -1,   112,    -1,   753,  1056,    98,
     756,    -1,    -1,   759,    -1,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1073,  1074,   177,    -1,  1077,
     776,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   188,   146,
     190,    -1,    -1,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   805,
      -1,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,    -1,    -1,    -1,
     169,    -1,   171,    -1,    -1,    -1,    -1,    -1,   834,    -1,
      -1,    -1,    -1,    -1,   840,    -1,   842,    -1,    48,   845,
      -1,    -1,    -1,    -1,    -1,    -1,   852,    -1,    -1,    -1,
      -1,    -1,    -1,   263,   860,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   281,    -1,   283,   284,    -1,   286,   287,   288,    -1,
      48,    -1,    -1,    -1,    -1,   295,   296,    -1,    98,    -1,
      -1,    -1,    -1,    -1,   900,    -1,    -1,    -1,    -1,   309,
      -1,    -1,    -1,    -1,   910,   315,    -1,    -1,    -1,    98,
      -1,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,    48,   339,
      98,    -1,   342,   343,   344,   345,   346,   347,    -1,    -1,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,    -1,   963,    -1,    -1,
     966,   171,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,    -1,    98,    -1,
      -1,   987,   171,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,    -1,    -1,
      -1,  1007,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   433,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,    -1,    -1,   458,    -1,
      -1,   171,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,     9,  1068,    -1,    12,    -1,    -1,   477,   478,    17,
      -1,    19,    20,    21,    22,    -1,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    -1,    74,    75,    -1,    77,
      -1,    79,    80,    81,    82,    83,    -1,    -1,    86,    -1,
      -1,    89,    -1,    91,    92,    93,    94,    95,    96,    97,
      -1,    99,   100,   101,   102,   103,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,   119,   120,   121,   122,   123,    48,   125,   126,   127,
     128,   129,   130,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,    -1,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162,   163,    -1,    -1,    -1,    -1,
      -1,    -1,   170,    -1,   172,    -1,    98,    -1,    -1,    -1,
      -1,   641,    -1,   643,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   668,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     680,    -1,   682,    -1,    -1,    -1,    -1,   687,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    17,    -1,    19,    20,    21,    22,    -1,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,
      54,    -1,    -1,    57,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,
      74,    75,    -1,    77,    -1,    79,    80,    81,    82,    83,
     800,   801,    86,    -1,    -1,    89,   806,    91,    92,    93,
      94,    95,    96,    97,    -1,    99,   100,   101,   102,   103,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,   119,   120,   121,   122,   123,
      -1,   125,   126,   127,   128,   129,   130,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,    -1,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,   163,
      -1,     3,     4,     5,     6,     7,   170,     9,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    19,    20,    21,
      22,    -1,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    49,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    58,    59,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    86,    -1,    -1,    89,    -1,    91,
      92,    93,    94,    95,    96,    97,    -1,    99,   100,   101,
     102,   103,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,   119,   120,   121,
     122,   123,    -1,   125,   126,   127,   128,   129,   130,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,    -1,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     162,     3,     4,     5,     6,     7,    -1,     9,   170,   171,
     172,    -1,    -1,    -1,    -1,    17,    -1,    19,    20,    21,
      22,    -1,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    49,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    58,    59,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    86,    -1,    -1,    89,    -1,    91,
      92,    93,    94,    95,    96,    97,    -1,    99,   100,   101,
     102,   103,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,   119,   120,   121,
     122,   123,    -1,   125,   126,   127,   128,   129,   130,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,    -1,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     162,     3,     4,     5,     6,     7,    -1,     9,   170,   171,
     172,    -1,    -1,    -1,    -1,    17,    -1,    19,    20,    21,
      22,    -1,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    49,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    58,    59,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    74,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    86,    -1,    -1,    89,    -1,    91,
      92,    93,    94,    95,    96,    97,    -1,    99,   100,   101,
     102,   103,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,    -1,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
     162,     9,    -1,    -1,    -1,    -1,    -1,    -1,   170,    17,
     172,    19,    20,    21,    22,    -1,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    -1,    74,    75,    -1,    77,
      -1,    79,    80,    81,    82,    83,    -1,    -1,    86,    -1,
      -1,    89,    -1,    91,    92,    93,    94,    95,    96,    97,
      -1,    99,   100,   101,   102,   103,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,   119,   120,   121,   122,   123,    -1,   125,   126,   127,
     128,   129,   130,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,    -1,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162,     3,     4,     5,     6,     7,
      -1,     9,   170,   171,   172,    -1,    -1,    -1,    -1,    17,
      -1,    19,    20,    21,    22,    -1,    24,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,
      58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    -1,    74,    75,    -1,    77,
      -1,    79,    80,    81,    82,    83,    -1,    -1,    86,    -1,
      -1,    89,    -1,    91,    92,    93,    94,    95,    96,    97,
      -1,    99,   100,   101,   102,   103,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,   119,   120,   121,   122,   123,    -1,   125,   126,   127,
     128,   129,   130,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,    -1,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,   162,     9,    -1,    -1,    -1,    -1,
      -1,    -1,   170,    17,   172,    19,    20,    21,    22,    -1,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,
      54,    -1,    -1,    57,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,
      74,    75,    -1,    77,    -1,    79,    80,    81,    82,    83,
      -1,    -1,    86,    -1,    -1,    89,    -1,    91,    92,    93,
      94,    95,    96,    97,    -1,    99,   100,   101,   102,   103,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,   119,   120,   121,   122,   123,
      -1,   125,   126,   127,   128,   129,   130,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,    -1,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,   162,     9,
      -1,    -1,    -1,    -1,    -1,    -1,   170,    17,   172,    19,
      20,    21,    22,    -1,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    -1,    49,
      -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,    59,
      60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    -1,    74,    75,    -1,    77,    -1,    79,
      80,    81,    82,    83,    -1,    -1,    86,    -1,    -1,    89,
      -1,    91,    92,    93,    94,    95,    96,    97,    -1,    99,
     100,   101,   102,   103,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,   119,
     120,   121,   122,   123,    -1,   125,   126,   127,   128,   129,
     130,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
      -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    -1,   172,    19,    20,    21,    22,    -1,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    49,    -1,    51,    -1,    53,    54,    -1,
      -1,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,    77,    -1,    79,    80,    81,    82,    83,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    94,    95,
      96,    97,    -1,    99,   100,   101,   102,   103,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,   119,   120,   121,   122,   123,    -1,   125,
     126,   127,   128,   129,   130,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   170,    19,    20,    21,    22,    -1,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    49,    -1,    51,    -1,    53,
      54,    -1,    -1,    57,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,
      -1,    75,    -1,    77,    -1,    79,    80,    81,    82,    83,
      -1,    -1,    86,    -1,    -1,    89,    -1,    91,    92,    93,
      94,    95,    96,    97,    -1,    99,   100,   101,   102,   103,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,   119,   120,   121,   122,   123,
      -1,   125,   126,   127,   128,   129,   130,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,    -1,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,   162,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,    19,    20,    21,
      22,    -1,    24,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    49,    -1,    51,
      -1,    53,    54,    -1,    -1,    57,    58,    59,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    -1,    -1,    75,    -1,    77,    -1,    79,    80,    81,
      82,    83,    -1,    -1,    86,    -1,    -1,    89,    -1,    91,
      92,    93,    94,    95,    96,    97,    -1,    99,   100,   101,
     102,   103,    -1,    -1,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,   119,   120,   121,
     122,   123,    -1,   125,   126,   127,   128,   129,   130,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,    -1,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,
     162,    -1,    -1,    12,    -1,    -1,    -1,    -1,   170,    18,
      19,    20,    21,    22,    -1,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,
      79,    80,    81,    82,    83,    -1,    -1,    86,    -1,    -1,
      89,    -1,    91,    92,    93,    94,    95,    96,    97,    -1,
      99,   100,   101,   102,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
     119,   120,   121,   122,   123,    -1,   125,   126,   127,   128,
     129,   130,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,    -1,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    19,    20,    21,    22,    -1,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    86,
      -1,    -1,    89,    -1,    91,    92,    93,    94,    95,    96,
      97,    -1,    99,   100,   101,   102,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,   119,   120,   121,   122,   123,    -1,   125,   126,
     127,   128,   129,   130,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,    -1,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   170,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,
      -1,    -1,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,
      75,    -1,    77,    -1,    79,    80,    81,    82,    83,    -1,
      -1,    86,    -1,    -1,    89,    -1,    91,    92,    93,    94,
      95,    96,    97,    -1,    99,   100,   101,   102,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,   119,   120,   121,   122,   123,    -1,
     125,   126,   127,   128,   129,   130,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,    -1,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    19,    20,    21,    22,
      -1,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      -1,    -1,    75,    -1,    77,    -1,    79,    80,    81,    82,
      83,    -1,    -1,    86,    -1,    -1,    89,    -1,    91,    92,
      93,    94,    95,    96,    97,    -1,    99,   100,   101,   102,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,   119,   120,   121,   122,
     123,    -1,   125,   126,   127,   128,   129,   130,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,    -1,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,   170,    19,    20,
      21,    22,    -1,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    49,    -1,
      51,    52,    53,    54,    -1,    -1,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,    80,
      81,    82,    83,    -1,    -1,    86,    -1,    -1,    89,    -1,
      91,    92,    93,    94,    95,    96,    97,    -1,    99,   100,
     101,   102,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,   119,   120,
     121,   122,   123,    -1,   125,   126,   127,   128,   129,   130,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       3,     4,    -1,     6,    -1,    -1,     9,    10,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      -1,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    49,    -1,    -1,    52,
      53,    54,    -1,    -1,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      -1,    -1,    75,    -1,    77,    -1,    79,    80,    81,    82,
      83,    -1,    -1,    86,    -1,    -1,    89,    -1,    91,    92,
      93,    94,    95,    96,    97,    -1,    99,   100,   101,   102,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,   119,   120,   121,   122,
     123,    -1,   125,   126,   127,   128,   129,   130,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    49,    -1,    51,    -1,    53,    54,
      -1,    -1,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,
      75,    -1,    77,    -1,    79,    80,    81,    82,    83,    -1,
      -1,    86,    -1,    -1,    89,    -1,    91,    92,    93,    94,
      95,    96,    97,    -1,    99,   100,   101,   102,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,   119,   120,   121,   122,   123,    -1,
     125,   126,   127,   128,   129,   130,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,    -1,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     3,     4,    -1,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,   162,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    -1,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    86,
      -1,    -1,    89,    -1,    91,    92,    93,    94,    95,    96,
      97,    -1,    99,   100,   101,   102,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,   119,   120,   121,   122,   123,    -1,   125,   126,
     127,   128,   129,   130,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,    -1,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     3,     4,    -1,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    -1,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,
      79,    80,    81,    82,    83,    -1,    -1,    86,    -1,    -1,
      89,    -1,    91,    92,    93,    94,    95,    96,    97,    -1,
      99,   100,   101,   102,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
     119,   120,   121,   122,   123,    -1,   125,   126,   127,   128,
     129,   130,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,    -1,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    -1,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    -1,    74,    75,    -1,    77,    -1,    79,    80,
      81,    82,    83,    -1,    -1,    86,    -1,    -1,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    99,   100,
     101,   102,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,   119,   120,
     121,   122,   123,    -1,   125,   126,   127,   128,   129,   130,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       3,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      -1,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      -1,    -1,    75,    -1,    77,    -1,    79,    80,    81,    82,
      83,    -1,    -1,    86,    -1,    -1,    89,    -1,    91,    92,
      93,    94,    95,    96,    97,    -1,    99,   100,   101,   102,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,   119,   120,   121,   122,
     123,    -1,   125,   126,   127,   128,   129,   130,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,    -1,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    49,    -1,    51,    -1,    53,    54,
      -1,    -1,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,
      75,    -1,    77,    -1,    79,    80,    81,    82,    83,    -1,
      -1,    86,    -1,    -1,    89,    -1,    91,    92,    93,    94,
      95,    96,    97,    -1,    99,   100,   101,   102,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,   119,   120,   121,   122,   123,    -1,
     125,   126,   127,   128,   129,   130,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,    -1,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    -1,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    49,    -1,    51,    -1,    53,    54,    -1,    -1,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    86,
      -1,    -1,    89,    -1,    91,    92,    93,    94,    95,    96,
      97,    -1,    99,   100,   101,   102,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,   119,   120,   121,   122,   123,    -1,   125,   126,
     127,   128,   129,   130,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,    -1,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     3,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    -1,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,
      79,    80,    81,    82,    83,    -1,    -1,    86,    -1,    -1,
      89,    -1,    91,    92,    93,    94,    95,    96,    97,    -1,
      99,   100,   101,   102,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
     119,   120,   121,   122,   123,    -1,   125,   126,   127,   128,
     129,   130,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,    -1,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    -1,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,    80,
      81,    82,    83,    -1,    -1,    86,    -1,    -1,    89,    -1,
      91,    92,    93,    94,    95,    96,    97,    -1,    99,   100,
     101,   102,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,   119,   120,
     121,   122,   123,    -1,   125,   126,   127,   128,   129,   130,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      -1,    24,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    -1,    -1,    57,    58,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      -1,    -1,    75,    -1,    77,    -1,    79,    80,    81,    82,
      83,    -1,    -1,    86,    -1,    -1,    89,    -1,    91,    92,
      93,    94,    95,    96,    97,    -1,    99,   100,   101,   102,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,   119,   120,   121,   122,
     123,    -1,   125,   126,   127,   128,   129,   130,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,    -1,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,
      -1,    -1,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,
      75,    -1,    77,    -1,    79,    80,    81,    82,    83,    -1,
      -1,    86,    -1,    -1,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    -1,    99,   100,   101,   102,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,   119,   120,   121,   122,   123,    -1,
     125,   126,   127,   128,   129,   130,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,    -1,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     3,     4,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    -1,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,
      77,    -1,    79,    80,    81,    82,    83,    -1,    -1,    86,
      -1,    -1,    89,    -1,    91,    92,    93,    94,    95,    96,
      97,    -1,    99,   100,   101,   102,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,   119,   120,   121,   122,   123,    -1,   125,   126,
     127,   128,   129,   130,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,    -1,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,     3,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    20,    21,    22,    -1,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    57,    58,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,
      79,    80,    81,    82,    83,    -1,    -1,    86,    -1,    -1,
      89,    -1,    91,    92,    93,    94,    95,    96,    97,    -1,
      99,   100,   101,   102,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
     119,   120,   121,   122,   123,    -1,   125,   126,   127,   128,
     129,   130,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,    -1,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    -1,    24,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,    80,
      81,    82,    83,    -1,    -1,    86,    -1,    -1,    89,    -1,
      91,    92,    93,    94,    95,    96,    97,    -1,    99,   100,
     101,   102,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,   119,   120,
     121,   122,   123,    -1,   125,   126,   127,   128,   129,   130,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,     3,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    -1,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    -1,
      -1,    75,    -1,    77,    -1,    79,    80,    81,    82,    83,
      -1,    -1,    86,    -1,    -1,    89,    -1,    91,    92,    93,
      94,    95,    96,    97,    -1,    99,   100,   101,   102,    -1,
      -1,    -1,    -1,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,   119,   120,   121,   122,   123,
      -1,   125,   126,   127,   128,   129,   130,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,    -1,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,    48,
      -1,    57,    58,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,    77,    -1,    79,    80,    81,    82,    83,    -1,    -1,
      86,    -1,    -1,    89,    48,    91,    92,    93,    94,    95,
      96,    97,    -1,    99,   100,   101,   102,    -1,    -1,    98,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,   119,   120,   121,   122,   123,    48,   125,
     126,   127,   128,   129,   130,   131,   132,    -1,   134,   135,
     136,   137,   138,    -1,    98,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,    48,    98,    -1,
      -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,    -1,    -1,    -1,   169,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,    98,    48,    -1,   169,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,    48,    -1,    98,   169,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,    98,    48,    -1,   169,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,    -1,    -1,    -1,   169,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,    98,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,   152,
     153,    -1,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,    -1,    -1,    -1,    -1,    -1,   151,   152,
     153,    -1,    -1,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,    26,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,   120,    -1,    -1,
      -1,   124,   125,    -1,    -1,   128,    -1,   130,    -1,    -1,
     133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    26,    30,    37,    44,    45,    46,    50,    79,   108,
     118,   120,   124,   125,   128,   130,   133,   142,   177,   178,
     179,   180,   211,   212,   213,   220,   284,   288,   294,   295,
     296,   297,   305,   307,   316,   319,   320,   325,   340,   341,
       3,     4,    19,    20,    21,    22,    24,    25,    26,    27,
      28,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    49,    53,
      54,    57,    58,    59,    60,    61,    62,    71,    72,    75,
      77,    79,    80,    81,    82,    83,    86,    89,    91,    92,
      93,    94,    95,    96,    97,    99,   100,   101,   102,   106,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   118,
     119,   120,   121,   122,   123,   125,   126,   127,   128,   129,
     130,   131,   132,   134,   135,   136,   137,   138,   139,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   181,
     182,   183,   184,   185,   186,   187,   306,   342,   326,     3,
       5,     6,     7,     9,    12,    17,    21,    22,    25,    28,
      38,    41,    42,    43,    49,    53,    60,    61,    72,    74,
      77,    81,    82,    94,    96,    97,    99,   103,   112,   113,
     114,   116,   119,   122,   134,   146,   147,   150,   162,   163,
     170,   172,   187,   189,   209,   222,   223,   227,   275,   276,
     277,   280,   327,   328,   331,   332,    31,   102,   184,   209,
      20,    31,    35,    39,    40,    58,    75,    92,    95,   109,
     110,   111,   121,   126,   127,   131,   135,   136,   137,   145,
     286,   287,   324,   139,     5,     6,    21,    22,    28,    38,
      49,    51,    53,    60,    80,    82,   103,   116,   132,   147,
     162,   170,   187,   189,   238,   240,   241,   242,   243,   244,
     328,   321,     0,    51,   167,   339,   167,    83,   317,   170,
      56,   187,   135,   287,   170,    15,    17,   195,   196,   207,
     208,   170,   170,   170,   170,   170,   170,   170,   170,     3,
      94,    96,   275,   170,   170,   170,   170,   170,   275,   275,
      74,    90,   187,   189,   281,   282,    15,    16,    17,   174,
     329,   330,   168,    56,    90,   169,   259,   260,    23,   224,
     314,    48,    98,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   170,   170,
      74,    84,   151,   152,   153,   158,   159,   160,   125,     6,
       7,     9,    10,   187,   292,   293,   158,   158,     4,     9,
      18,   131,   184,   186,   187,   190,   191,   192,   125,   135,
      89,   285,   285,   285,   131,    56,   285,   106,   261,   262,
     263,   192,   200,   202,   206,   144,   170,   170,   170,   170,
     170,   170,   170,   170,   240,   170,   170,     6,   240,    15,
     170,   154,   155,    21,    22,    27,    74,    84,   103,   151,
     152,   153,   158,   159,   160,    27,    74,   103,   151,   152,
     153,   158,   159,   160,   153,   158,   200,   202,   203,   275,
     336,   337,   338,   124,   180,   192,   200,   201,   201,     7,
       9,    17,   162,   170,   244,   245,   246,   304,   308,   309,
     200,   204,   187,     4,   184,   186,   191,     9,   170,   171,
     275,   278,   279,   207,    15,   195,    17,   275,    47,   163,
     275,   275,   171,   275,   275,   275,   170,   170,   170,   171,
     171,   278,   275,   275,   171,   171,   169,   173,   158,   170,
       9,   275,    15,   330,   187,    12,   170,   192,   205,   206,
     210,     6,   162,   223,   189,   275,   275,   275,   332,   275,
     332,   275,   332,   275,   275,   275,   275,   275,   332,   275,
     332,   275,   332,   275,   275,   275,   275,   275,   278,   275,
     170,    10,   103,   275,   275,   275,   275,   275,   275,   292,
      34,   162,   289,     9,    10,    52,   140,   187,   244,   290,
     291,   292,   131,   190,   285,   168,   131,   191,     9,   285,
      19,   170,   264,   263,   169,    17,    32,   193,   194,    76,
     126,   131,   169,   285,   189,   189,   187,   328,   163,   328,
     171,   171,   328,   187,   327,   328,   171,   171,   170,   242,
     240,   240,   170,   170,   244,   245,   170,   187,    10,   103,
      21,    22,    27,    74,     9,   244,   245,     9,   244,   245,
       9,   245,   291,     9,   238,   242,   245,   291,     9,   244,
     245,     9,   244,   245,   244,   170,    27,    74,   244,   244,
     244,   244,   244,   244,   244,   244,    15,   196,   125,   224,
      29,   169,   334,   335,   222,   193,   196,   197,   170,   298,
     135,   318,   246,     9,   171,   244,   245,   247,   310,   169,
     311,   194,   196,   148,   229,   230,     9,   261,   124,   213,
     169,   171,   207,   171,   189,   226,   171,   169,   169,   171,
     169,   171,   169,   171,   275,   275,   171,   169,   171,   282,
       9,   189,   244,   283,   171,   175,   175,   193,   197,   217,
     193,   194,   195,   197,   198,   199,   221,   104,   169,     6,
     171,    54,   278,    10,   292,   293,   285,   191,   285,   285,
     191,    55,   183,   186,   188,   266,   267,   192,     6,   193,
     285,   285,   192,   171,   171,   171,   171,   171,   171,   169,
     171,   171,     9,   248,   248,   155,   155,   247,   248,    10,
     170,   170,   244,   170,   187,   170,   155,   247,   244,   170,
     194,   187,   189,   322,   323,   328,   336,    47,   333,   338,
     196,   189,   299,   300,   143,   285,   169,   171,   169,   171,
     304,   309,   312,   313,   171,   194,    87,    93,   170,   231,
     232,   233,   240,   261,   261,   171,   279,    15,   225,   171,
      81,    81,   275,   275,   275,   158,   124,   220,   194,    78,
      88,   234,   235,   237,     6,     6,   189,   171,   171,   158,
     169,     9,   158,   169,   171,   171,   244,   245,   244,   245,
     171,   171,   248,   248,   155,   247,   248,   242,   244,   171,
     155,   247,   158,   169,   230,   158,   189,   107,   255,   256,
     169,   171,   170,   301,   302,   261,   244,   245,     9,   314,
     169,   170,   170,    93,   155,   155,   169,   214,    15,   275,
     275,   171,   171,   169,   283,   222,   171,   228,   230,    85,
     236,    74,   265,     6,     9,   170,   189,   267,   171,   242,
       9,   171,   171,   244,   171,   171,   171,   244,   171,     9,
     170,   244,   245,   323,   261,   244,   245,    29,   259,   299,
     170,   303,   304,   169,   261,    90,   187,   315,   304,   313,
     187,     9,   170,   232,   240,   232,     6,   189,   215,   216,
     171,    41,    72,    97,    99,   112,   122,   146,   150,   274,
     274,   170,    56,   107,   218,    59,   249,   190,   327,   266,
     189,   268,   269,   170,   171,   247,    70,   270,    38,   114,
     242,   257,   258,   169,   171,   302,   169,   169,   171,     9,
     155,   155,   155,   169,   171,   171,   278,    29,    90,   219,
       6,   250,   149,   253,   254,   105,   171,   158,   169,   171,
       9,   171,    63,    64,    65,    66,    68,    69,   271,   273,
     170,   170,    24,    45,   169,   304,     9,   170,   244,   190,
     169,   171,   240,   232,   232,   240,   216,   171,   257,     6,
      29,    59,    62,   252,   239,   241,   244,   245,   269,   171,
     170,   170,   170,   170,   170,   170,    67,   273,    47,   171,
     258,   169,   171,   247,   169,   171,   190,   171,   169,   104,
     169,   242,   251,   107,   241,   255,   155,   272,   327,   272,
     272,   272,   272,   272,   226,   172,   171,     9,   170,   171,
     170,     6,     6,   169,    29,   259,   239,   169,   171,   171,
     171,   171,   171,   171,   171,   268,   169,   171,   169,   171,
     247,   171,   278,   242,   257,   261,   327,    24,    45,   173,
     172,   172,   171,   171,   270,   171,   268,   268,   169,   171,
     171,   173,   173,   172,   171,   171,   268,   173,   171
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int16 yyr1[] =
{
       0,   176,   177,   177,   177,   177,   178,   178,   178,   179,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   180,
     180,   180,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   181,   181,   181,   181,   181,   181,
     181,   181,   181,   181,   182,   182,   182,   183,   183,   184,
     184,   185,   186,   186,   187,   187,   187,   188,   188,   188,
     189,   189,   190,   190,   190,   191,   191,   192,   192,   193,
     193,   194,   194,   195,   196,   196,   197,   197,   198,   198,
     199,   199,   199,   200,   201,   201,   202,   202,   202,   203,
     203,   203,   204,   204,   204,   204,   205,   205,   205,   206,
     206,   207,   207,   208,   208,   208,   208,   208,   209,   209,
     210,   210,   210,   211,   212,   212,   213,   213,   214,   214,
     215,   215,   216,   216,   217,   218,   219,   219,   219,   219,
     221,   220,   222,   222,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   228,   228,   229,   230,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   232,   232,   232,   232,   232,
     233,   233,   233,   233,   233,   233,   233,   233,   234,   234,
     235,   235,   235,   236,   237,   238,   238,   238,   239,   239,
     240,   240,   240,   240,   240,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   241,   241,   241,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   243,   243,   244,
     244,   245,   245,   246,   246,   247,   247,   247,   247,   248,
     248,   249,   249,   250,   250,   251,   251,   252,   252,   253,
     253,   254,   255,   255,   256,   256,   256,   256,   257,   257,
     258,   258,   258,   259,   259,   260,   260,   260,   260,   261,
     261,   262,   262,   263,   263,   264,   265,   266,   266,   267,
     267,   267,   267,   267,   268,   268,   269,   269,   270,   270,
     271,   271,   272,   272,   273,   273,   273,   273,   273,   273,
     274,   274,   274,   274,   274,   274,   274,   274,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   278,
     278,   279,   279,   280,   280,   280,   281,   281,   281,   282,
     282,   282,   283,   283,   283,   284,   285,   285,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   286,   286,   286,   286,   286,   286,   286,   286,
     286,   286,   287,   287,   288,   288,   288,   288,   288,   288,
     289,   289,   290,   290,   291,   291,   291,   292,   292,   293,
     293,   293,   293,   293,   294,   294,   294,   295,   295,   296,
     297,   297,   298,   298,   299,   300,   300,   301,   301,   302,
     303,   303,   304,   304,   304,   304,   304,   306,   305,   307,
     308,   308,   309,   309,   310,   310,   311,   311,   312,   312,
     313,   314,   314,   315,   315,   317,   316,   318,   318,   319,
     319,   321,   320,   322,   322,   323,   323,   323,   323,   323,
     323,   323,   324,   324,   324,   326,   325,   327,   327,   328,
     329,   329,   330,   330,   330,   330,   330,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   332,
     333,   333,   333,   334,   334,   335,   336,   337,   338,   338,
     339,   340,   342,   341
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     2,     1,     3,     1,
       2,     1,     2,     1,     1,     2,     1,     2,     1,     2,
       0,     1,     1,     1,     1,     2,     1,     2,     1,     1,
       2,     3,     1,     2,     2,     3,     2,     1,     1,     3,
       3,     1,     2,     1,     1,     2,     2,     3,     1,     2,
       1,     2,     2,     3,     1,     8,     1,     9,     0,     2,
       1,     3,     1,     1,     0,     3,     0,     2,     4,     4,
       0,    14,     1,     3,     1,     2,     0,     2,     1,     2,
       1,     2,     1,     1,     4,     4,     4,     4,     4,     4,
       3,     5,     0,     1,     1,     2,     1,     1,     3,     3,
       5,     5,     5,     3,     5,     4,     6,     6,     8,     1,
      10,     8,     8,     6,    14,    12,    12,    10,     0,     1,
       0,     1,     1,     1,     5,     1,     1,     1,     1,     3,
       1,     3,     3,     2,     3,     3,     6,     6,     3,     3,
       5,     6,     5,     6,     5,     6,     5,     6,     3,     4,
       5,     6,     3,     3,     3,     3,     3,     3,     5,     5,
       5,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     3,     3,     3,     5,     6,     5,
       6,     3,     3,     3,     3,     6,     1,     1,     4,     3,
       3,     1,     4,     4,     4,     3,     4,     4,     4,     1,
       2,     1,     2,     1,     1,     1,     1,     3,     3,     1,
       3,     0,     4,     0,     1,     1,     3,     0,     2,     0,
       1,     5,     0,     1,     3,     5,     8,     8,     1,     3,
       1,     2,     2,     0,     1,     2,     3,     4,     4,     0,
       1,     1,     2,     3,     6,     0,     0,     1,     3,     3,
       3,     5,     6,     3,     1,     3,     3,     3,     0,     3,
       1,     2,     1,     3,     4,     4,     4,     4,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     3,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     3,     3,     6,
       6,     3,     8,    14,     3,     4,     8,     8,     4,     1,
       3,     1,     1,     1,     1,     1,     0,     3,     5,     1,
       1,     1,     1,     1,     1,     3,     0,     2,     1,     2,
       2,     3,     1,     1,     1,     1,     1,     3,     4,     4,
       4,     3,     4,     3,     1,     2,     2,     4,     2,     3,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     7,
       1,     1,     0,     3,     1,     1,     3,     1,     3,     3,
       1,     3,     1,     1,     1,     3,     2,     0,     6,     6,
       1,     3,     1,     3,     1,     3,     0,     2,     1,     3,
       3,     0,     1,     1,     1,     0,     6,     0,     1,     1,
       1,     0,     8,     1,     3,     3,     3,     5,     4,     3,
       3,     3,     0,     1,     1,     0,     5,     1,     1,     2,
       1,     2,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       0,     1,     2,     0,     2,     1,     2,     1,     1,     3,
       6,     2,     0,     6
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (pParser, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, pParser); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, SqlParser_c * pParser)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (pParser);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, SqlParser_c * pParser)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, pParser);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, SqlParser_c * pParser)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], pParser);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, pParser); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, SqlParser_c * pParser)
{
  YY_USE (yyvaluep);
  YY_USE (pParser);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (SqlParser_c * pParser)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, pParser);
    }

  if (yychar <= END)
    {
      yychar = END;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* request: statement  */
#line 212 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { pParser->PushQuery(); }
#line 3802 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 3: /* request: statement ';'  */
#line 213 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { pParser->PushQuery(); }
#line 3808 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 6: /* multi_stmt_list: multi_stmt  */
#line 219 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                        { pParser->PushQuery(); }
#line 3814 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 7: /* multi_stmt_list: multi_stmt_list ';' multi_stmt  */
#line 220 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { pParser->PushQuery(); }
#line 3820 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 8: /* multi_stmt_list: multi_stmt_list facet_stmt  */
#line 221 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { pParser->PushQuery(); }
#line 3826 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 131: /* identcol: identcol ':' ident  */
#line 320 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                             {TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] );}
#line 3832 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 132: /* single_tablename: "`identifier`"  */
#line 326 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
        {
		yyval = yyvsp[0];
		++yyval.m_iStart;
		--yyval.m_iEnd;
	}
#line 3842 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 136: /* single_manticore_tablename: "Manticore." single_tablename  */
#line 337 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                              {yyval = yyvsp[0];}
#line 3848 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 138: /* tablename_with_maybecluster: ident ':' single_manticore_tablename  */
#line 343 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->ToString (pParser->m_pStmt->m_sCluster, yyvsp[-2]);
			yyval = yyvsp[0];
		}
#line 3857 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 139: /* chunk: ".number"  */
#line 352 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->AddDotIntSubkey (yyvsp[0]);
			pParser->m_pStmt->m_iIntParam = yyvsp[0].GetValueInt();
		}
#line 3866 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 140: /* chunk: TOK_CHUNK "integer"  */
#line 357 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->AddIntSubkey (yyvsp[0]);
			pParser->m_pStmt->m_iIntParam = yyvsp[0].GetValueInt();
		}
#line 3875 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 143: /* string_key: TOK_SUBKEY  */
#line 372 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
    		pParser->AddStringSubkey (yyvsp[0]);
    	}
#line 3883 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 153: /* single_tablename_with_maybecluster: tablename_with_maybecluster  */
#line 403 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->SetIndex (yyvsp[0]);
		}
#line 3891 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 158: /* one_index_opt_chunk: list_of_indexes  */
#line 417 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
        {
    		pParser->ToString (pParser->m_pQuery->m_sIndexes, yyvsp[0]);
    	}
#line 3899 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 166: /* target_in_select_from: tablename_with_maybecluster subkeys_for_target_in_select_from  */
#line 437 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->SetIndex (yyvsp[-1]);
			pParser->m_pQuery->m_sIndexes = pParser->m_pStmt->m_sIndex;
			pParser->SwapSubkeys();
		}
#line 3909 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 167: /* target_in_select_from: list_of_indexes  */
#line 443 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->ToString (pParser->m_pQuery->m_sIndexes, yyvsp[0]);
		}
#line 3917 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 168: /* target_in_select_from: sysvar_ext  */
#line 447 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
    		pParser->ToString (pParser->m_pQuery->m_sIndexes, yyvsp[0]);
    		pParser->SwapSubkeys();
    	}
#line 3926 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 169: /* list_of_indexes: tablename_with_maybecluster ',' tablename_with_maybecluster  */
#line 455 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
    		TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] );
    	}
#line 3934 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 170: /* list_of_indexes: list_of_indexes ',' tablename_with_maybecluster  */
#line 459 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] );
		}
#line 3942 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 172: /* string_nokeys: string_keys TOK_SUBKEY  */
#line 470 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			yyval = yyvsp[0];
		}
#line 3950 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 175: /* multi_strings_and_maybe_chunk_nokey: ".number" string_nokeys  */
#line 479 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
    		yyval = yyvsp[0];
    	}
#line 3958 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 176: /* multi_strings_and_maybe_chunk_nokey: string_nokeys ".number"  */
#line 483 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
        {
    		yyval = yyvsp[0];
    	}
#line 3966 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 177: /* multi_strings_and_maybe_chunk_nokey: string_nokeys ".number" string_nokeys  */
#line 487 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
        {
    		yyval = yyvsp[0];
    	}
#line 3974 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 179: /* sysvar: "@@sysvar" multi_strings_and_maybe_chunk_nokey  */
#line 495 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			TRACK_BOUNDS ( yyval, yyvsp[-1], yyvsp[0] );
		}
#line 3982 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 183: /* select_without_from: TOK_SELECT select_items_list opt_limit_clause  */
#line 510 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_SELECT_COLUMNS;
		}
#line 3990 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 185: /* select: TOK_SELECT "identifier" '(' '(' select1 ')' opt_tablefunc_args ')'  */
#line 523 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			assert ( pParser->m_pStmt->m_eStmt==STMT_SELECT ); // set by table argument
			pParser->ToString ( pParser->m_pStmt->m_sTableFunc, yyvsp[-6] );
		}
#line 3999 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 187: /* select1: TOK_SELECT select_items_list TOK_FROM '(' subselect_start select_from ')' opt_outer_order opt_outer_limit  */
#line 533 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			assert ( pParser->m_pStmt->m_eStmt==STMT_SELECT ); // set by subselect
		}
#line 4007 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 190: /* tablefunc_args_list: tablefunc_arg  */
#line 545 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->ToString ( pParser->m_pStmt->m_dTableFuncArgs.Add(), yyvsp[0] );
		}
#line 4015 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 191: /* tablefunc_args_list: tablefunc_args_list ',' tablefunc_arg  */
#line 549 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->ToString ( pParser->m_pStmt->m_dTableFuncArgs.Add(), yyvsp[0] );
		}
#line 4023 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 194: /* subselect_start: %empty  */
#line 560 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
        {
		CSphVector<CSphQueryItem> & dItems = pParser->m_pQuery->m_dItems;
		if ( dItems.GetLength()!=1 || dItems[0].m_sExpr!="*" )
		{
			yyerror ( pParser, "outer select list must be a single star" );
			YYERROR;
		}
		dItems.Reset();
		pParser->ResetSelect();
	}
#line 4038 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 195: /* opt_outer_order: TOK_ORDER TOK_BY order_items_list  */
#line 574 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->ToString ( pParser->m_pQuery->m_sOuterOrderBy, yyvsp[0] );
			pParser->m_pQuery->m_bHasOuter = true;
		}
#line 4047 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 197: /* opt_outer_limit: TOK_LIMIT "integer"  */
#line 583 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pQuery->m_iOuterLimit = yyvsp[0].GetValueInt();
			pParser->m_pQuery->m_bHasOuter = true;
		}
#line 4056 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 198: /* opt_outer_limit: TOK_LIMIT "integer" ',' "integer"  */
#line 588 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pQuery->m_iOuterOffset = yyvsp[-2].GetValueInt();
			pParser->m_pQuery->m_iOuterLimit = yyvsp[0].GetValueInt();
			pParser->m_pQuery->m_bHasOuter = true;
		}
#line 4066 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 199: /* opt_outer_limit: TOK_LIMIT "integer" TOK_OFFSET "integer"  */
#line 594 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pQuery->m_iOuterLimit = yyvsp[-2].GetValueInt();
			pParser->m_pQuery->m_iOuterOffset = yyvsp[0].GetValueInt();
			pParser->m_pQuery->m_bHasOuter = true;
		}
#line 4076 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 200: /* $@1: %empty  */
#line 603 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                       { pParser->m_pStmt->m_eStmt = STMT_SELECT; }
#line 4082 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 204: /* select_item: '*'  */
#line 622 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                                { pParser->AddItem ( &yyvsp[0] ); }
#line 4088 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 207: /* opt_alias: opt_as identcol  */
#line 628 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                        { pParser->AliasLastItem ( &yyvsp[0] ); }
#line 4094 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 209: /* distinct_joined_col: distinct_joined_col TOK_SUBKEY  */
#line 633 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 4100 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 211: /* distinct_ident: identcol distinct_joined_col  */
#line 638 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 4106 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 212: /* select_expr: expr  */
#line 642 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                        { pParser->AddItem ( &yyvsp[0] ); }
#line 4112 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 213: /* select_expr: sysvar  */
#line 643 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                        { pParser->AddItem ( &yyvsp[0] ); }
#line 4118 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 214: /* select_expr: TOK_AVG '(' expr ')'  */
#line 644 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_AVG, &yyvsp[-3], &yyvsp[0] ); }
#line 4124 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 215: /* select_expr: TOK_MAX '(' expr ')'  */
#line 645 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MAX, &yyvsp[-3], &yyvsp[0] ); }
#line 4130 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 216: /* select_expr: TOK_MIN '(' expr ')'  */
#line 646 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MIN, &yyvsp[-3], &yyvsp[0] ); }
#line 4136 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 217: /* select_expr: TOK_SUM '(' expr ')'  */
#line 647 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_SUM, &yyvsp[-3], &yyvsp[0] ); }
#line 4142 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 218: /* select_expr: TOK_GROUP_CONCAT '(' expr ')'  */
#line 648 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_CAT, &yyvsp[-3], &yyvsp[0] ); }
#line 4148 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 219: /* select_expr: TOK_COUNT '(' '*' ')'  */
#line 649 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { if ( !pParser->AddItem ( "count(*)", &yyvsp[-3], &yyvsp[0] ) ) YYERROR; }
#line 4154 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 220: /* select_expr: TOK_GROUPBY '(' ')'  */
#line 650 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { if ( !pParser->AddItem ( "groupby()", &yyvsp[-2], &yyvsp[0] ) ) YYERROR; }
#line 4160 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 221: /* select_expr: TOK_COUNT '(' TOK_DISTINCT distinct_ident ')'  */
#line 651 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { if ( !pParser->AddDistinct ( &yyvsp[-1], &yyvsp[-4], &yyvsp[0] ) ) YYERROR; }
#line 4166 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 224: /* where_tok: TOK_WHERE  */
#line 661 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                { pParser->SetJoinParse(false); }
#line 4172 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 234: /* where_expr: filter_expr TOK_AND where_item TOK_AND filter_expr  */
#line 677 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                { pParser->FilterAnd ( yyval, yyvsp[-4], yyvsp[0] ); }
#line 4178 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 235: /* where_item: TOK_MATCH '(' "string" ')'  */
#line 682 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->SetMatch(yyvsp[-1]) )
				YYERROR;
		}
#line 4187 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 236: /* where_item: TOK_MATCH '(' "string" ',' single_tablename ')'  */
#line 687 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddMatch(yyvsp[-3],yyvsp[-1]) )
				YYERROR;
		}
#line 4196 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 237: /* where_item: '(' TOK_MATCH '(' "string" ')' ')'  */
#line 692 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->SetMatch(yyvsp[-2]) )
				YYERROR;
		}
#line 4205 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 238: /* where_item: '(' TOK_MATCH '(' "string" ',' single_tablename ')' ')'  */
#line 697 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddMatch(yyvsp[-4],yyvsp[-2]) )
				YYERROR;
		}
#line 4214 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 240: /* knn_item: TOK_KNN '(' ident ',' const_int ',' '(' const_list ')' ')'  */
#line 706 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->SetKNN ( yyvsp[-7], yyvsp[-5], yyvsp[-2], nullptr, false ) )
				YYERROR;
		}
#line 4223 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 241: /* knn_item: TOK_KNN '(' ident ',' '(' const_list ')' ')'  */
#line 711 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->SetKNN ( yyvsp[-5], yyvsp[-2], nullptr, false ) )
				YYERROR;
		}
#line 4232 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 242: /* knn_item: TOK_KNN '(' ident ',' const_int ',' "string" ')'  */
#line 716 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->SetKNN ( yyvsp[-5], yyvsp[-3], yyvsp[-1], nullptr, true ) )
				YYERROR;
		}
#line 4241 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 243: /* knn_item: TOK_KNN '(' ident ',' "string" ')'  */
#line 721 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->SetKNN ( yyvsp[-3], yyvsp[-1], nullptr, true ) )
				YYERROR;
		}
#line 4250 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 244: /* knn_item: TOK_KNN '(' ident ',' const_int ',' '(' const_list ')' ',' '{' named_const_list '}' ')'  */
#line 726 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->SetKNN ( yyvsp[-11], yyvsp[-9], yyvsp[-6], &( pParser->GetNamedVec ( yyvsp[-2].GetValueInt() ) ), false ) )
				YYERROR;
		}
#line 4259 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 245: /* knn_item: TOK_KNN '(' ident ',' '(' const_list ')' ',' '{' named_const_list '}' ')'  */
#line 731 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->SetKNN ( yyvsp[-9], yyvsp[-6], &( pParser->GetNamedVec ( yyvsp[-2].GetValueInt() ) ), false ) )
				YYERROR;
		}
#line 4268 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 246: /* knn_item: TOK_KNN '(' ident ',' const_int ',' "string" ',' '{' named_const_list '}' ')'  */
#line 736 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->SetKNN ( yyvsp[-9], yyvsp[-7], yyvsp[-5], &( pParser->GetNamedVec ( yyvsp[-2].GetValueInt() ) ), true ) )
				YYERROR;
		}
#line 4277 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 247: /* knn_item: TOK_KNN '(' ident ',' "string" ',' '{' named_const_list '}' ')'  */
#line 741 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->SetKNN ( yyvsp[-7], yyvsp[-5], &( pParser->GetNamedVec ( yyvsp[-2].GetValueInt() ) ), true ) )
				YYERROR;
		}
#line 4286 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 251: /* join_type: TOK_INNER  */
#line 754 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                        { pParser->SetJoinType ( JoinType_e::INNER ); }
#line 4292 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 252: /* join_type: TOK_LEFT  */
#line 755 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                        { pParser->SetJoinType ( JoinType_e::LEFT ); }
#line 4298 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 253: /* join_tok: TOK_JOIN  */
#line 759 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                        { pParser->SetJoinParse(true); }
#line 4304 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 254: /* join_clause: join_type join_tok single_tablename TOK_ON on_clause  */
#line 764 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->SetJoin(yyvsp[-2]) )
				YYERROR;
		}
#line 4313 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 255: /* on_clause_type_cast: TOK_INT  */
#line 771 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                { pParser->SetJoinOnCast(SPH_ATTR_INTEGER); }
#line 4319 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 256: /* on_clause_type_cast: TOK_FLOAT  */
#line 772 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                { pParser->SetJoinOnCast(SPH_ATTR_FLOAT); }
#line 4325 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 257: /* on_clause_type_cast: TOK_STRING  */
#line 773 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                        { pParser->SetJoinOnCast(SPH_ATTR_STRING); }
#line 4331 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 260: /* filter_expr: filter_item  */
#line 782 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                        { pParser->SetOp ( yyval ); }
#line 4337 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 261: /* filter_expr: filter_expr TOK_AND filter_expr  */
#line 783 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { pParser->FilterAnd ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 4343 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 262: /* filter_expr: filter_expr TOK_OR filter_expr  */
#line 784 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { pParser->FilterOr ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 4349 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 263: /* filter_expr: TOK_NOT filter_expr  */
#line 785 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { pParser->FilterNot ( yyval, yyvsp[0] ); }
#line 4355 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 264: /* filter_expr: '(' filter_expr ')'  */
#line 786 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { pParser->FilterGroup ( yyval, yyvsp[-1] ); }
#line 4361 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 265: /* filter_item: expr_ident '=' expr_ident  */
#line 791 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddOnFilter ( yyvsp[-2], yyvsp[0], -1 ) )
				YYERROR;
		}
#line 4370 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 266: /* filter_item: expr_ident '=' on_clause_type_cast '(' expr_ident ')'  */
#line 796 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddOnFilter ( yyvsp[-5], yyvsp[-1], 1 ) )
				YYERROR;
		}
#line 4379 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 267: /* filter_item: on_clause_type_cast '(' expr_ident ')' '=' expr_ident  */
#line 801 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddOnFilter ( yyvsp[-3], yyvsp[0], 0 ) )
				YYERROR;
		}
#line 4388 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 268: /* filter_item: expr_ident '=' bool_or_integer_value  */
#line 806 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			if ( pParser->NumIsSaturated (yyvsp[0]) )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].GetValueInt() );
		}
#line 4401 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 269: /* filter_item: expr_ident "!=" bool_or_integer_value  */
#line 815 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			if ( pParser->NumIsSaturated (yyvsp[0]) )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].GetValueInt() );
			pFilter->m_bExclude = true;
		}
#line 4415 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 270: /* filter_item: expr_ident TOK_IN '(' const_list ')'  */
#line 825 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-4], yyvsp[-1].m_iValues );
			if ( !pFilter )
				YYERROR;
		}
#line 4425 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 271: /* filter_item: expr_ident TOK_NOT TOK_IN '(' const_list ')'  */
#line 831 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-5], yyvsp[-1].m_iValues );
			if ( !pFilter )
				YYERROR;
			pFilter->m_bExclude = true;
		}
#line 4436 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 272: /* filter_item: expr_ident TOK_IN '(' string_list ')'  */
#line 838 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddStringListFilter ( yyvsp[-4], yyvsp[-1], StrList_e::STR_IN ) )
				YYERROR;
		}
#line 4445 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 273: /* filter_item: expr_ident TOK_NOT TOK_IN '(' string_list ')'  */
#line 843 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddStringListFilter ( yyvsp[-5], yyvsp[-1], StrList_e::STR_IN, true ) )
				YYERROR;
		}
#line 4454 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 274: /* filter_item: expr_ident TOK_ANY '(' string_list ')'  */
#line 848 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddStringListFilter ( yyvsp[-4], yyvsp[-1], StrList_e::STR_ANY ) )
				YYERROR;
		}
#line 4463 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 275: /* filter_item: expr_ident TOK_NOT TOK_ANY '(' string_list ')'  */
#line 853 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddStringListFilter ( yyvsp[-5], yyvsp[-1], StrList_e::STR_ANY, true ) )
				YYERROR;
		}
#line 4472 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 276: /* filter_item: expr_ident TOK_ALL '(' string_list ')'  */
#line 858 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddStringListFilter ( yyvsp[-4], yyvsp[-1], StrList_e::STR_ALL ) )
				YYERROR;
		}
#line 4481 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 277: /* filter_item: expr_ident TOK_NOT TOK_ALL '(' string_list ')'  */
#line 863 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddStringListFilter ( yyvsp[-5], yyvsp[-1], StrList_e::STR_ALL, true ) )
				YYERROR;
		}
#line 4490 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 278: /* filter_item: expr_ident TOK_IN ident  */
#line 868 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddUservarFilter ( yyvsp[-2], yyvsp[0], false ) )
				YYERROR;
		}
#line 4499 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 279: /* filter_item: expr_ident TOK_NOT TOK_IN ident  */
#line 873 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddUservarFilter ( yyvsp[-3], yyvsp[0], true ) )
				YYERROR;
		}
#line 4508 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 280: /* filter_item: expr_ident TOK_BETWEEN const_int TOK_AND const_int  */
#line 878 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddIntRangeFilter ( yyvsp[-4], yyvsp[-2].GetValueInt(), yyvsp[0].GetValueInt(), false ) )
				YYERROR;
		}
#line 4517 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 281: /* filter_item: expr_ident TOK_NOT TOK_BETWEEN const_int TOK_AND const_int  */
#line 883 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddIntRangeFilter ( yyvsp[-5], yyvsp[-2].GetValueInt(), yyvsp[0].GetValueInt(), true ) )
				YYERROR;
		}
#line 4526 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 282: /* filter_item: expr_ident '>' const_int  */
#line 888 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddIntFilterGreater ( yyvsp[-2], yyvsp[0].GetValueInt(), false ) )
				YYERROR;
		}
#line 4535 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 283: /* filter_item: expr_ident '<' const_int  */
#line 893 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddIntFilterLesser ( yyvsp[-2], yyvsp[0].GetValueInt(), false ) )
				YYERROR;
		}
#line 4544 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 284: /* filter_item: expr_ident ">=" const_int  */
#line 898 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddIntFilterGreater ( yyvsp[-2], yyvsp[0].GetValueInt(), true ) )
				YYERROR;
		}
#line 4553 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 285: /* filter_item: expr_ident "<=" const_int  */
#line 903 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddIntFilterLesser ( yyvsp[-2], yyvsp[0].GetValueInt(), true ) )
				YYERROR;
		}
#line 4562 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 286: /* filter_item: expr_ident '=' const_float  */
#line 908 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2], yyvsp[0].m_fValue, yyvsp[0].m_fValue, true ) )
				YYERROR;
		}
#line 4571 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 287: /* filter_item: expr_ident "!=" const_float  */
#line 913 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2], yyvsp[0].m_fValue, yyvsp[0].m_fValue, true, true ) )
				YYERROR;
		}
#line 4580 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 288: /* filter_item: expr_ident TOK_BETWEEN const_float TOK_AND const_float  */
#line 918 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4], yyvsp[-2].m_fValue, yyvsp[0].m_fValue, true ) )
				YYERROR;
		}
#line 4589 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 289: /* filter_item: expr_ident TOK_BETWEEN const_int TOK_AND const_float  */
#line 923 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4], yyvsp[-2].GetValueInt(), yyvsp[0].m_fValue, true ) )
				YYERROR;
		}
#line 4598 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 290: /* filter_item: expr_ident TOK_BETWEEN const_float TOK_AND const_int  */
#line 928 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4], yyvsp[-2].m_fValue, yyvsp[0].GetValueInt(), true ) )
				YYERROR;
		}
#line 4607 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 291: /* filter_item: expr_ident '>' const_float  */
#line 933 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddFloatFilterGreater ( yyvsp[-2], yyvsp[0].m_fValue, false ) )
				YYERROR;
		}
#line 4616 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 292: /* filter_item: expr_ident '<' const_float  */
#line 938 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddFloatFilterLesser ( yyvsp[-2], yyvsp[0].m_fValue, false ) )
				YYERROR;
		}
#line 4625 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 293: /* filter_item: expr_ident ">=" const_float  */
#line 943 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddFloatFilterGreater ( yyvsp[-2], yyvsp[0].m_fValue, true ) )
				YYERROR;
		}
#line 4634 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 294: /* filter_item: expr_ident "<=" const_float  */
#line 948 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddFloatFilterLesser ( yyvsp[-2], yyvsp[0].m_fValue, true ) )
				YYERROR;
		}
#line 4643 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 295: /* filter_item: expr_ident '=' "string"  */
#line 953 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddStringFilter ( yyvsp[-2], yyvsp[0], false ) )
				YYERROR;
		}
#line 4652 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 296: /* filter_item: expr_ident "!=" "string"  */
#line 958 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddStringFilter ( yyvsp[-2], yyvsp[0], true ) )
				YYERROR;
		}
#line 4661 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 297: /* filter_item: expr_ident '>' "string"  */
#line 963 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddStringCmpFilter ( yyvsp[-2], yyvsp[0], false, EStrCmpDir::GT ) )
				YYERROR;
		}
#line 4670 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 298: /* filter_item: expr_ident '<' "string"  */
#line 968 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddStringCmpFilter ( yyvsp[-2], yyvsp[0], false, EStrCmpDir::LT ) )
				YYERROR;
		}
#line 4679 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 299: /* filter_item: expr_ident ">=" "string"  */
#line 973 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddStringCmpFilter ( yyvsp[-2], yyvsp[0], true, EStrCmpDir::LT ) )
				YYERROR;
		}
#line 4688 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 300: /* filter_item: expr_ident "<=" "string"  */
#line 978 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddStringCmpFilter ( yyvsp[-2], yyvsp[0], true, EStrCmpDir::GT ) )
				YYERROR;
		}
#line 4697 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 301: /* filter_item: expr_ident TOK_IS "null"  */
#line 983 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddNullFilter ( yyvsp[-2], true ) )
				YYERROR;
		}
#line 4706 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 302: /* filter_item: expr_ident TOK_IS TOK_NOT "null"  */
#line 988 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddNullFilter ( yyvsp[-3], false ) )
				YYERROR;
		}
#line 4715 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 303: /* filter_item: const_int '=' const_int  */
#line 993 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			if ( pParser->NumIsSaturated (yyvsp[0]) )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].GetValueInt() );
		}
#line 4728 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 304: /* filter_item: const_int "!=" const_int  */
#line 1002 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			if ( pParser->NumIsSaturated (yyvsp[0]) )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].GetValueInt() );
			pFilter->m_bExclude = true;
		}
#line 4742 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 305: /* filter_item: mva_aggr '=' const_int  */
#line 1014 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			CSphFilterSettings * f = pParser->AddFilter ( yyvsp[-2], SPH_FILTER_VALUES );
			f->m_eMvaFunc = ( yyvsp[-2].m_iType==TOK_ALL ) ? SPH_MVAFUNC_ALL : SPH_MVAFUNC_ANY;
			f->m_dValues.Add ( yyvsp[0].GetValueInt() );
		}
#line 4752 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 306: /* filter_item: mva_aggr "!=" const_int  */
#line 1020 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			// tricky bit
			// any(tags!=val) is not equivalent to not(any(tags==val))
			// any(tags!=val) is instead equivalent to not(all(tags)==val)
			// thus, along with setting the exclude flag on, we also need to invert the function
			CSphFilterSettings * f = pParser->AddFilter ( yyvsp[-2], SPH_FILTER_VALUES );
			f->m_eMvaFunc = ( yyvsp[-2].m_iType==TOK_ALL ) ? SPH_MVAFUNC_ANY : SPH_MVAFUNC_ALL;
			f->m_bExclude = true;         
			f->m_dValues.Add ( yyvsp[0].GetValueInt() );
		}
#line 4767 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 307: /* filter_item: mva_aggr TOK_IN '(' const_list ')'  */
#line 1031 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			CSphFilterSettings * f = pParser->AddFilter ( yyvsp[-4], SPH_FILTER_VALUES, yyvsp[-1].m_iValues );
			f->m_eMvaFunc = ( yyvsp[-4].m_iType==TOK_ALL ) ? SPH_MVAFUNC_ALL : SPH_MVAFUNC_ANY;
		}
#line 4776 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 308: /* filter_item: mva_aggr TOK_NOT TOK_IN '(' const_list ')'  */
#line 1036 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			// tricky bit with inversion again
			CSphFilterSettings * f = pParser->AddFilter ( yyvsp[-5], SPH_FILTER_VALUES, yyvsp[-1].m_iValues );
			f->m_eMvaFunc = ( yyvsp[-5].m_iType==TOK_ALL ) ? SPH_MVAFUNC_ANY : SPH_MVAFUNC_ALL;
			f->m_bExclude = true;
		}
#line 4787 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 309: /* filter_item: mva_aggr TOK_BETWEEN const_int TOK_AND const_int  */
#line 1043 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			AddMvaRange ( pParser, yyvsp[-4], yyvsp[-2].GetValueInt(), yyvsp[0].GetValueInt() );
		}
#line 4795 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 310: /* filter_item: mva_aggr TOK_NOT TOK_BETWEEN const_int TOK_AND const_int  */
#line 1047 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			// tricky bit with inversion again
			CSphFilterSettings * f = pParser->AddFilter ( yyvsp[-5], SPH_FILTER_RANGE );
			f->m_eMvaFunc = ( yyvsp[-5].m_iType==TOK_ALL ) ? SPH_MVAFUNC_ANY : SPH_MVAFUNC_ALL;
			f->m_bExclude = true;
			f->m_iMinValue = yyvsp[-2].GetValueInt();
			f->m_iMaxValue = yyvsp[0].GetValueInt();
		}
#line 4808 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 311: /* filter_item: mva_aggr '<' const_int  */
#line 1056 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			AddMvaRange ( pParser, yyvsp[-2], INT64_MIN, yyvsp[0].GetValueInt()-1 );
		}
#line 4816 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 312: /* filter_item: mva_aggr '>' const_int  */
#line 1060 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			AddMvaRange ( pParser, yyvsp[-2], yyvsp[0].GetValueInt()+1, INT64_MAX );
		}
#line 4824 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 313: /* filter_item: mva_aggr "<=" const_int  */
#line 1064 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			AddMvaRange ( pParser, yyvsp[-2], INT64_MIN, yyvsp[0].GetValueInt() );
		}
#line 4832 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 314: /* filter_item: mva_aggr ">=" const_int  */
#line 1068 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			AddMvaRange ( pParser, yyvsp[-2], yyvsp[0].GetValueInt(), INT64_MAX );
		}
#line 4840 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 315: /* filter_item: TOK_REGEX '(' json_field ',' "string" ')'  */
#line 1072 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			TRACK_BOUNDS ( yyval, yyvsp[-5], yyvsp[0] );
			CSphFilterSettings * pFilter = pParser->AddFilter ( yyval, SPH_FILTER_EXPRESSION );
			if ( !pFilter )
				YYERROR;
		}
#line 4851 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 317: /* expr_ident: TOK_ATIDENT  */
#line 1083 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->SetOldSyntax() )
				YYERROR;
		}
#line 4860 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 318: /* expr_ident: TOK_COUNT '(' '*' ')'  */
#line 1088 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			yyval.m_iType = SPHINXQL_TOK_COUNT;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		}
#line 4870 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 319: /* expr_ident: TOK_GROUPBY '(' ')'  */
#line 1094 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			yyval.m_iType = SPHINXQL_TOK_GROUPBY;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		}
#line 4880 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 320: /* expr_ident: TOK_WEIGHT '(' ')'  */
#line 1100 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			yyval.m_iType = SPHINXQL_TOK_WEIGHT;
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		}
#line 4890 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 322: /* expr_ident: TOK_INTEGER '(' json_expr ')'  */
#line 1106 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); }
#line 4896 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 323: /* expr_ident: TOK_DOUBLE '(' json_expr ')'  */
#line 1107 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); }
#line 4902 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 324: /* expr_ident: TOK_BIGINT '(' json_expr ')'  */
#line 1108 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); }
#line 4908 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 326: /* expr_ident: ident TOK_SUBKEY '(' ')'  */
#line 1110 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); }
#line 4914 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 327: /* mva_aggr: TOK_ANY '(' identcol ')'  */
#line 1114 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { yyval = yyvsp[-1]; yyval.m_iType = TOK_ANY; }
#line 4920 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 328: /* mva_aggr: TOK_ALL '(' identcol ')'  */
#line 1115 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { yyval = yyvsp[-1]; yyval.m_iType = TOK_ALL; }
#line 4926 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 329: /* const_int: "integer"  */
#line 1120 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			yyval.m_iType = TOK_CONST_INT;
			yyval.SetValueInt ( yyvsp[0].GetValueUint(), false );
		}
#line 4935 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 330: /* const_int: '-' "integer"  */
#line 1125 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			yyval.m_iType = TOK_CONST_INT;
			yyval.SetValueInt ( yyvsp[0].GetValueUint(), true );
		}
#line 4944 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 331: /* const_float: const_float_unsigned  */
#line 1132 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { yyval.m_iType = TOK_CONST_FLOAT; yyval.SetValueFloat ( yyvsp[0].m_fValue ); }
#line 4950 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 332: /* const_float: '-' const_float_unsigned  */
#line 1133 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { yyval.m_iType = TOK_CONST_FLOAT; yyval.SetValueFloat ( -yyvsp[0].m_fValue ); }
#line 4956 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 333: /* const_float_unsigned: "float"  */
#line 1140 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { yyval.m_fValue = yyvsp[0].m_fValue; }
#line 4962 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 334: /* const_float_unsigned: ".number"  */
#line 1141 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { yyval.m_fValue = pParser->ToFloat (yyvsp[0]); }
#line 4968 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 335: /* const_list: const_int  */
#line 1146 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			assert ( yyval.m_iValues<0 );
        	yyval.m_iValues = pParser->AddMvaVec ();
        	auto& dVec = pParser->GetMvaVec ( yyval.m_iValues );
			dVec.Add ( { yyvsp[0].GetValueInt(), yyvsp[0].GetValueFloat(), false } );
		}
#line 4979 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 336: /* const_list: const_float  */
#line 1153 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			assert ( yyval.m_iValues<0 );
        	yyval.m_iValues = pParser->AddMvaVec ();
        	auto& dVec = pParser->GetMvaVec ( yyval.m_iValues );
			dVec.Add ( { yyvsp[0].GetValueInt(), yyvsp[0].GetValueFloat(), true } );
		}
#line 4990 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 337: /* const_list: const_list ',' const_int  */
#line 1160 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			auto& dVec = pParser->GetMvaVec ( yyval.m_iValues );
			dVec.Add ( { yyvsp[0].GetValueInt(), yyvsp[0].GetValueFloat(), false } );
		}
#line 4999 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 338: /* const_list: const_list ',' const_float  */
#line 1165 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			auto& dVec = pParser->GetMvaVec ( yyval.m_iValues );
			dVec.Add ( { yyvsp[0].GetValueInt(), yyvsp[0].GetValueFloat(), true } );
		}
#line 5008 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 339: /* string_list: "string"  */
#line 1173 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			assert ( yyval.m_iValues<0 );
        	yyval.m_iValues = pParser->AddMvaVec ();
        	auto& dVec = pParser->GetMvaVec ( yyval.m_iValues );
			dVec.Add ( { yyvsp[0].GetValueInt(), 0.0f } );
		}
#line 5019 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 340: /* string_list: string_list ',' "string"  */
#line 1180 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			auto& dVec = pParser->GetMvaVec ( yyval.m_iValues );
			dVec.Add ( { yyvsp[0].GetValueInt(), 0.0f } );
		}
#line 5028 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 344: /* opt_int: "integer"  */
#line 1194 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->SetGroupbyLimit ( yyvsp[0].GetValueInt() );
		}
#line 5036 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 345: /* group_items_list: expr_ident  */
#line 1201 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->AddGroupBy ( yyvsp[0] );
		}
#line 5044 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 346: /* group_items_list: group_items_list ',' expr_ident  */
#line 1205 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->AddGroupBy ( yyvsp[0] );
		}
#line 5052 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 348: /* opt_having_clause: TOK_HAVING filter_item  */
#line 1213 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->AddHaving();
		}
#line 5060 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 351: /* group_order_clause: TOK_WITHIN TOK_GROUP TOK_ORDER TOK_BY order_items_list  */
#line 1225 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( pParser->m_pQuery->m_sGroupBy.IsEmpty() )
			{
				yyerror ( pParser, "you must specify GROUP BY element in order to use WITHIN GROUP ORDER BY clause" );
				YYERROR;
			}
			pParser->ToString ( pParser->m_pQuery->m_sSortBy, yyvsp[0] );
		}
#line 5073 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 354: /* order_clause: TOK_ORDER TOK_BY order_items_list  */
#line 1242 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->ToString ( pParser->m_pQuery->m_sOrderBy, yyvsp[0] );
		}
#line 5081 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 355: /* order_clause: TOK_ORDER TOK_BY TOK_RAND '(' ')'  */
#line 1246 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pQuery->m_sOrderBy = "@random";
		}
#line 5089 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 356: /* order_clause: TOK_ORDER TOK_BY TOK_COUNT '(' TOK_DISTINCT distinct_ident ')' TOK_ASC  */
#line 1250 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddDistinctSort ( &yyvsp[-2], &yyvsp[-5], &yyvsp[-1], true ) )
				YYERROR;
		}
#line 5098 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 357: /* order_clause: TOK_ORDER TOK_BY TOK_COUNT '(' TOK_DISTINCT distinct_ident ')' TOK_DESC  */
#line 1255 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddDistinctSort ( &yyvsp[-2], &yyvsp[-5], &yyvsp[-1], false ) )
				YYERROR;
		}
#line 5107 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 359: /* order_items_list: order_items_list ',' order_item  */
#line 1263 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5113 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 361: /* order_item: expr_ident TOK_ASC  */
#line 1268 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { TRACK_BOUNDS ( yyval, yyvsp[-1], yyvsp[0] ); }
#line 5119 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 362: /* order_item: expr_ident TOK_DESC  */
#line 1269 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { TRACK_BOUNDS ( yyval, yyvsp[-1], yyvsp[0] ); }
#line 5125 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 365: /* limit_clause: TOK_LIMIT "integer"  */
#line 1279 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->SetLimit ( 0, yyvsp[0].GetValueInt() );
		}
#line 5133 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 366: /* limit_clause: TOK_LIMIT '-' "integer"  */
#line 1283 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
        {
      		pParser->SetLimit ( 0, -yyvsp[0].GetValueInt() );
      	}
#line 5141 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 367: /* limit_clause: TOK_LIMIT "integer" ',' "integer"  */
#line 1287 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->SetLimit ( yyvsp[-2].GetValueInt(), yyvsp[0].GetValueInt() );
		}
#line 5149 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 368: /* limit_clause: TOK_LIMIT "integer" TOK_OFFSET "integer"  */
#line 1291 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->SetLimit ( yyvsp[0].GetValueInt(), yyvsp[-2].GetValueInt() );
		}
#line 5157 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 375: /* default_option_table_setup: %empty  */
#line 1312 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
    {
        pParser->SetDefaultTableForOptions();
    }
#line 5165 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 376: /* option_table_setup: %empty  */
#line 1318 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
    {
        if ( !pParser->SetTableForOptions(yyvsp[(-1) - (0)]) )
			YYERROR;
    }
#line 5174 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 379: /* option_item: option_name '=' identcol  */
#line 1331 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		}
#line 5183 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 380: /* option_item: option_name '=' "integer"  */
#line 1336 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		}
#line 5192 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 381: /* option_item: option_name '=' '(' named_const_list ')'  */
#line 1341 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddOption ( yyvsp[-4], pParser->GetNamedVec ( yyvsp[-1].GetValueInt() ) ) )
				YYERROR;
			pParser->FreeNamedVec ( yyvsp[-1].GetValueInt() );
		}
#line 5202 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 382: /* option_item: option_name '=' identcol '(' "string" ')'  */
#line 1347 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddOption ( yyvsp[-5], yyvsp[-3], yyvsp[-1] ) )
				YYERROR;
		}
#line 5211 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 383: /* option_item: option_name '=' "string"  */
#line 1352 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		}
#line 5220 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 384: /* named_const_list: named_const  */
#line 1360 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			yyval.SetValueInt ( pParser->AllocNamedVec() );
			pParser->AddConst ( yyval.GetValueInt(), yyvsp[0] );
		}
#line 5229 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 385: /* named_const_list: named_const_list ',' named_const  */
#line 1365 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->AddConst( yyval.GetValueInt(), yyvsp[0] );
		}
#line 5237 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 386: /* named_const: identcol '=' const_int  */
#line 1372 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			yyval = yyvsp[-2];
			yyval.SetValueInt ( yyvsp[0].GetValueInt() );
		}
#line 5246 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 387: /* named_const: identcol '=' const_float  */
#line 1377 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			yyval = yyvsp[-2];
			yyval.SetValueFloat ( yyvsp[0].GetValueFloat() );
		}
#line 5255 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 393: /* hint_attr_list: hint_attr_list ',' json_field  */
#line 1395 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        {TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] );}
#line 5261 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 394: /* hint_item: TOK_HINT_SECONDARY '(' hint_attr_list ')'  */
#line 1400 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->AddIndexHint ( SecondaryIndexType_e::INDEX, true, yyvsp[-1] );
		}
#line 5269 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 395: /* hint_item: TOK_HINT_NO_SECONDARY '(' hint_attr_list ')'  */
#line 1404 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->AddIndexHint ( SecondaryIndexType_e::INDEX, false, yyvsp[-1] );
		}
#line 5277 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 396: /* hint_item: TOK_HINT_DOCID '(' hint_attr_list ')'  */
#line 1408 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->AddIndexHint ( SecondaryIndexType_e::LOOKUP, true, yyvsp[-1] );
		}
#line 5285 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 397: /* hint_item: TOK_HINT_NO_DOCID '(' hint_attr_list ')'  */
#line 1412 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->AddIndexHint ( SecondaryIndexType_e::LOOKUP, false, yyvsp[-1] );
		}
#line 5293 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 398: /* hint_item: TOK_HINT_COLUMNAR '(' hint_attr_list ')'  */
#line 1416 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->AddIndexHint ( SecondaryIndexType_e::ANALYZER, true, yyvsp[-1] );
		}
#line 5301 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 399: /* hint_item: TOK_HINT_NO_COLUMNAR '(' hint_attr_list ')'  */
#line 1420 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->AddIndexHint ( SecondaryIndexType_e::ANALYZER, false, yyvsp[-1] );
		}
#line 5309 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 409: /* expr: TOK_ATIDENT  */
#line 1440 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { if ( !pParser->SetOldSyntax() ) YYERROR; }
#line 5315 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 413: /* expr: '-' expr  */
#line 1444 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { TRACK_BOUNDS ( yyval, yyvsp[-1], yyvsp[0] ); }
#line 5321 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 414: /* expr: TOK_NOT expr  */
#line 1445 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-1], yyvsp[0] ); }
#line 5327 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 415: /* expr: expr '+' expr  */
#line 1447 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5333 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 416: /* expr: expr '-' expr  */
#line 1448 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5339 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 417: /* expr: expr '*' expr  */
#line 1449 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5345 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 418: /* expr: expr '/' expr  */
#line 1450 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5351 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 419: /* expr: expr '<' expr  */
#line 1451 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5357 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 420: /* expr: expr '>' expr  */
#line 1452 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5363 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 421: /* expr: expr '&' expr  */
#line 1453 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5369 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 422: /* expr: expr '|' expr  */
#line 1454 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5375 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 423: /* expr: expr '%' expr  */
#line 1455 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5381 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 424: /* expr: expr TOK_DIV expr  */
#line 1456 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5387 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 425: /* expr: expr TOK_MOD expr  */
#line 1457 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5393 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 426: /* expr: expr "<=" expr  */
#line 1458 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5399 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 427: /* expr: expr ">=" expr  */
#line 1459 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5405 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 428: /* expr: expr '=' expr  */
#line 1460 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5411 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 429: /* expr: expr "!=" expr  */
#line 1461 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5417 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 430: /* expr: expr TOK_AND expr  */
#line 1462 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5423 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 431: /* expr: expr TOK_OR expr  */
#line 1463 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5429 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 432: /* expr: '(' expr ')'  */
#line 1464 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5435 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 433: /* expr: '{' consthash '}'  */
#line 1465 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5441 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 437: /* expr: json_field TOK_IS "null"  */
#line 1469 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5447 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 438: /* expr: json_field TOK_IS TOK_NOT "null"  */
#line 1470 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); }
#line 5453 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 439: /* expr: ident TOK_SUBKEY '(' ')'  */
#line 1471 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); }
#line 5459 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 455: /* function: "identifier" '(' arglist ')'  */
#line 1493 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); }
#line 5465 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 456: /* function: json_field TOK_IN '(' arglist ')'  */
#line 1494 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                            { TRACK_BOUNDS ( yyval, yyvsp[-4], yyvsp[0] ); }
#line 5471 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 457: /* function: "identifier" '(' ')'  */
#line 1495 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5477 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 458: /* function: TOK_QUERY '(' ')'  */
#line 1496 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5483 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 459: /* function: TOK_MIN '(' expr ',' expr ')'  */
#line 1497 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { TRACK_BOUNDS ( yyval, yyvsp[-5], yyvsp[0] ); }
#line 5489 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 460: /* function: TOK_MAX '(' expr ',' expr ')'  */
#line 1498 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { TRACK_BOUNDS ( yyval, yyvsp[-5], yyvsp[0] ); }
#line 5495 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 461: /* function: TOK_WEIGHT '(' ')'  */
#line 1499 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5501 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 462: /* function: json_aggr '(' expr TOK_FOR identcol TOK_IN json_field ')'  */
#line 1500 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                    { TRACK_BOUNDS ( yyval, yyvsp[-7], yyvsp[0] ); }
#line 5507 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 463: /* function: TOK_REMAP '(' expr ',' expr ',' '(' arglist ')' ',' '(' arglist ')' ')'  */
#line 1501 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                                  { TRACK_BOUNDS ( yyval, yyvsp[-13], yyvsp[0] ); }
#line 5513 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 464: /* function: TOK_RAND '(' ')'  */
#line 1502 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5519 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 465: /* function: TOK_RAND '(' arglist ')'  */
#line 1503 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); }
#line 5525 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 466: /* function: TOK_DATE_ADD '(' expr ',' TOK_INTERVAL expr time_unit ')'  */
#line 1504 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                    { TRACK_BOUNDS ( yyval, yyvsp[-7], yyvsp[0] ); }
#line 5531 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 467: /* function: TOK_DATE_SUB '(' expr ',' TOK_INTERVAL expr time_unit ')'  */
#line 1505 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                    { TRACK_BOUNDS ( yyval, yyvsp[-7], yyvsp[0] ); }
#line 5537 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 468: /* function: accepted_funcs '(' arglist ')'  */
#line 1506 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                         { TRACK_BOUNDS ( yyval, yyvsp[-3], yyvsp[0] ); }
#line 5543 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 477: /* consthash: hash_key '=' hash_val  */
#line 1527 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 5549 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 478: /* consthash: consthash ',' hash_key '=' hash_val  */
#line 1528 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-4], yyvsp[0] ); }
#line 5555 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 487: /* like_filter: TOK_LIKE "string"  */
#line 1551 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { pParser->m_pStmt->m_sStringParam = pParser->ToStringUnescape (yyvsp[0] ); }
#line 5561 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 488: /* show_what: TOK_WARNINGS  */
#line 1555 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; }
#line 5567 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 489: /* show_what: TOK_STATUS like_filter  */
#line 1556 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; }
#line 5573 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 490: /* show_what: TOK_META like_filter  */
#line 1557 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; }
#line 5579 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 491: /* show_what: TOK_AGENT TOK_STATUS like_filter  */
#line 1558 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS; }
#line 5585 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 492: /* show_what: TOK_PROFILE  */
#line 1559 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { pParser->m_pStmt->m_eStmt = STMT_SHOW_PROFILE; }
#line 5591 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 493: /* show_what: TOK_PLAN  */
#line 1560 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { pParser->m_pStmt->m_eStmt = STMT_SHOW_PLAN; }
#line 5597 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 494: /* show_what: TOK_PLUGINS  */
#line 1561 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { pParser->m_pStmt->m_eStmt = STMT_SHOW_PLUGINS; }
#line 5603 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 495: /* show_what: TOK_THREADS  */
#line 1562 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { pParser->m_pStmt->m_eStmt = STMT_SHOW_THREADS; }
#line 5609 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 496: /* show_what: TOK_SCROLL  */
#line 1563 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { pParser->m_pStmt->m_eStmt = STMT_SHOW_SCROLL; }
#line 5615 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 497: /* show_what: TOK_CREATE TOK_TABLE single_manticore_tablename  */
#line 1565 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_CREATE_TABLE;
			pParser->SetIndex (yyvsp[0]);
		}
#line 5624 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 498: /* show_what: TOK_AGENT "string" TOK_STATUS like_filter  */
#line 1570 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->SetIndex(pParser->ToStringUnescape ( yyvsp[-2] ));
		}
#line 5633 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 499: /* show_what: TOK_AGENT tablename_with_maybecluster TOK_STATUS like_filter  */
#line 1575 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_AGENT_STATUS;
			pParser->SetIndex( yyvsp[-2] );
		}
#line 5642 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 500: /* show_what: index_or_table one_index_opt_chunk TOK_STATUS like_filter  */
#line 1580 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_STATUS;
			pParser->SetIndex( yyvsp[-2] );
		}
#line 5651 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 501: /* show_what: index_or_table one_index_opt_chunk TOK_SETTINGS  */
#line 1585 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_INDEX_SETTINGS;
			pParser->SetIndex( yyvsp[-1] );
		}
#line 5660 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 502: /* show_what: index_or_table one_index_opt_chunk TOK_INDEXES like_filter  */
#line 1590 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLE_INDEXES;
			pParser->SetIndex( yyvsp[-2] );
		}
#line 5669 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 503: /* show_what: TOK_TABLE TOK_STATUS like_filter  */
#line 1595 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_FEDERATED_INDEX_STATUS;
		}
#line 5677 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 504: /* show_what: TOK_COLLATION  */
#line 1599 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
       		pParser->m_pStmt->m_eStmt = STMT_SHOW_COLLATION;
		}
#line 5685 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 505: /* show_what: TOK_CHARACTER TOK_SET  */
#line 1603 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_CHARACTER_SET;
		}
#line 5693 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 506: /* show_what: TOK_TABLES like_filter  */
#line 1607 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES;
		}
#line 5701 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 507: /* show_what: TOK_TABLES TOK_FROM "system" like_filter  */
#line 1611 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_iIntParam = 1;
			pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES;
		}
#line 5710 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 508: /* show_what: TOK_DATABASES like_filter  */
#line 1616 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_DATABASES;
		}
#line 5718 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 509: /* show_what: global_or_session TOK_VARIABLES like_filter  */
#line 1620 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
      		pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
		}
#line 5726 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 510: /* show_what: TOK_SETTINGS  */
#line 1624 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_SETTINGS;
		}
#line 5734 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 511: /* show_what: TOK_LOCKS  */
#line 1628 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_LOCKS;
		}
#line 5742 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 514: /* set_stmt: TOK_SET ident_for_set_stmt '=' bool_or_integer_value  */
#line 1642 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->SetLocalStatement ( yyvsp[-2] );
			pParser->m_pStmt->m_iSetValue = yyvsp[0].GetValueInt();
		}
#line 5751 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 515: /* set_stmt: TOK_SET ident_for_set_stmt '=' set_string_value  */
#line 1647 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->SetLocalStatement ( yyvsp[-2] );
			pParser->ToString ( pParser->m_pStmt->m_sSetValue, yyvsp[0] );
		}
#line 5760 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 516: /* set_stmt: TOK_SET ident_for_set_stmt '=' "null"  */
#line 1652 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->SetLocalStatement ( yyvsp[-2] );
		}
#line 5768 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 517: /* set_stmt: TOK_SET TOK_NAMES ident_or_string_or_num_or_nulls opt_collate  */
#line 1655 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                        { pParser->m_pStmt->m_eStmt = STMT_DUMMY; }
#line 5774 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 518: /* set_stmt: TOK_SET sysvar '=' ident_or_string_or_num_or_nulls  */
#line 1656 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                { pParser->m_pStmt->m_eStmt = STMT_DUMMY; }
#line 5780 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 519: /* set_stmt: TOK_SET TOK_CHARACTER TOK_SET ident_or_string_or_num_or_nulls  */
#line 1657 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                        { pParser->m_pStmt->m_eStmt = STMT_DUMMY; }
#line 5786 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 524: /* bool_or_integer_value: TOK_TRUE  */
#line 1671 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { yyval.SetValueInt(1); }
#line 5792 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 525: /* bool_or_integer_value: TOK_FALSE  */
#line 1672 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { yyval.SetValueInt(0); }
#line 5798 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 526: /* bool_or_integer_value: const_int  */
#line 1673 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { yyval = yyvsp[0]; }
#line 5804 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 534: /* transact_op: TOK_COMMIT  */
#line 1693 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { pParser->m_pStmt->m_eStmt = STMT_COMMIT; }
#line 5810 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 535: /* transact_op: TOK_ROLLBACK  */
#line 1694 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; }
#line 5816 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 536: /* transact_op: start_transaction  */
#line 1695 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { pParser->m_pStmt->m_eStmt = STMT_BEGIN; }
#line 5822 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 540: /* insert_or_replace: TOK_INSERT  */
#line 1710 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                { pParser->m_pStmt->m_eStmt = STMT_INSERT; }
#line 5828 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 541: /* insert_or_replace: TOK_REPLACE  */
#line 1711 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                        { pParser->m_pStmt->m_eStmt = STMT_REPLACE; }
#line 5834 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 545: /* column_list: column_ident  */
#line 1724 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                        { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } }
#line 5840 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 546: /* column_list: column_list ',' column_ident  */
#line 1725 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } }
#line 5846 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 549: /* insert_row: '(' insert_vals_list ')'  */
#line 1734 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } }
#line 5852 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 550: /* insert_vals_list: insert_val  */
#line 1738 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { pParser->AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); }
#line 5858 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 551: /* insert_vals_list: insert_vals_list ',' insert_val  */
#line 1739 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { pParser->AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); }
#line 5864 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 552: /* insert_val: const_int  */
#line 1743 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { yyval.m_iType = TOK_CONST_INT; yyval.CopyValueInt ( yyvsp[0] ); }
#line 5870 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 553: /* insert_val: const_float  */
#line 1744 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { yyval.m_iType = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; }
#line 5876 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 554: /* insert_val: "string"  */
#line 1745 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { yyval.m_iType = TOK_QUOTED_STRING; yyval.m_iStart = yyvsp[0].m_iStart; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 5882 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 555: /* insert_val: '(' const_list ')'  */
#line 1746 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                { yyval.m_iType = TOK_CONST_MVA; yyval.m_iValues = yyvsp[-1].m_iValues; }
#line 5888 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 556: /* insert_val: '(' ')'  */
#line 1747 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { yyval.m_iType = TOK_CONST_MVA; }
#line 5894 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 557: /* $@2: %empty  */
#line 1753 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                   { pParser->m_pStmt->m_eStmt = STMT_DELETE; }
#line 5900 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 558: /* delete_from: TOK_DELETE $@2 TOK_FROM target_in_delete_from where_clause opt_option_clause  */
#line 1755 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                        {
				pParser->GenericStatement ( &yyvsp[-2] );
			}
#line 5908 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 559: /* call_proc: TOK_CALL ident '(' call_args_list opt_call_opts_list ')'  */
#line 1764 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->ToString ( pParser->m_pStmt->m_sCallProc, yyvsp[-4] );
		}
#line 5917 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 560: /* call_args_list: call_arg  */
#line 1772 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		}
#line 5925 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 561: /* call_args_list: call_args_list ',' call_arg  */
#line 1776 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		}
#line 5933 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 563: /* call_arg: '(' const_string_list ')'  */
#line 1784 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			yyval.m_iType = TOK_CONST_STRINGS;
		}
#line 5941 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 564: /* const_string_list: "string"  */
#line 1791 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			// FIXME? for now, one such array per CALL statement, tops
			if ( pParser->m_pStmt->m_dCallStrings.GetLength() )
			{
				yyerror ( pParser, "unexpected constant string list" );
				YYERROR;
			}
			pParser->m_pStmt->m_dCallStrings.Add() = pParser->ToStringUnescape ( yyvsp[0] );
		}
#line 5955 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 565: /* const_string_list: const_string_list ',' "string"  */
#line 1801 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_dCallStrings.Add() = pParser->ToStringUnescape ( yyvsp[0] );
		}
#line 5963 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 568: /* call_opts_list: call_opt  */
#line 1813 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		}
#line 5972 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 570: /* call_opt: insert_val opt_as call_opt_name  */
#line 1822 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->ToString ( pParser->m_pStmt->m_dCallOptNames.Add(), yyvsp[0] );
			pParser->AddInsval ( pParser->m_pStmt->m_dCallOptValues, yyvsp[-2] );
		}
#line 5981 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 575: /* $@3: %empty  */
#line 1841 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                     { pParser->m_pStmt->m_eStmt = STMT_DESCRIBE; }
#line 5987 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 578: /* describe_opt: TOK_TABLE  */
#line 1847 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_iIntParam = TOK_TABLE; // just a flag that 'TOK_TABLE' is in use
		}
#line 5995 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 581: /* $@4: %empty  */
#line 1861 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                   { pParser->m_pStmt->m_eStmt = STMT_UPDATE; }
#line 6001 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 582: /* update: TOK_UPDATE $@4 target_in_update TOK_SET update_items_list where_clause opt_option_clause opt_hint_clause  */
#line 1863 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                        {
				pParser->GenericStatement ( &yyvsp[-5] );
			}
#line 6009 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 585: /* update_item: identcol '=' const_int  */
#line 1875 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->AttrUpdate().m_dPool.Add ( (DWORD)yyvsp[0].GetValueInt() );
			DWORD uHi = (DWORD)( yyvsp[0].GetValueInt()>>32 );
			if ( uHi )
			{
				pParser->m_pStmt->AttrUpdate().m_dPool.Add ( uHi );
				pParser->AddUpdatedAttr ( yyvsp[-2], SPH_ATTR_BIGINT );
			} else
			{
				pParser->AddUpdatedAttr ( yyvsp[-2], SPH_ATTR_INTEGER );
			}
		}
#line 6027 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 586: /* update_item: identcol '=' const_float  */
#line 1889 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->AttrUpdate().m_dPool.Add ( sphF2DW ( yyvsp[0].m_fValue ) );
			pParser->AddUpdatedAttr ( yyvsp[-2], SPH_ATTR_FLOAT );
		}
#line 6037 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 587: /* update_item: identcol '=' '(' const_list ')'  */
#line 1895 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->UpdateMVAAttr ( yyvsp[-4], yyvsp[-1] );
		}
#line 6045 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 588: /* update_item: identcol '=' '(' ')'  */
#line 1899 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			SqlNode_t tNoValues;
			pParser->UpdateMVAAttr ( yyvsp[-3], tNoValues );
		}
#line 6054 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 589: /* update_item: json_expr '=' const_int  */
#line 1904 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->AttrUpdate().m_dPool.Add ( (DWORD)yyvsp[0].GetValueInt() );
			DWORD uHi = (DWORD)( yyvsp[0].GetValueInt()>>32 );
			if ( uHi )
			{
				pParser->m_pStmt->AttrUpdate().m_dPool.Add ( uHi );
				pParser->AddUpdatedAttr ( yyvsp[-2], SPH_ATTR_BIGINT );
			} else
			{
				pParser->AddUpdatedAttr ( yyvsp[-2], SPH_ATTR_INTEGER );
			}
		}
#line 6072 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 590: /* update_item: json_expr '=' const_float  */
#line 1918 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			// it is performance-critical to forcibly inline this
			pParser->m_pStmt->AttrUpdate().m_dPool.Add ( sphF2DW ( yyvsp[0].m_fValue ) );
			pParser->AddUpdatedAttr ( yyvsp[-2], SPH_ATTR_FLOAT );
		}
#line 6082 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 591: /* update_item: identcol '=' "string"  */
#line 1924 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->UpdateStringAttr ( yyvsp[-2], yyvsp[0] );
		}
#line 6090 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 593: /* global_or_session: TOK_GLOBAL  */
#line 1934 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pStmt->m_iIntParam = 0;
		}
#line 6098 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 594: /* global_or_session: TOK_SESSION  */
#line 1938 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
    		pParser->m_pStmt->m_iIntParam = 1;
    	}
#line 6106 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 595: /* $@5: %empty  */
#line 1946 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                      { pParser->m_pStmt->m_eStmt = STMT_OPTIMIZE_INDEX; }
#line 6112 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 596: /* optimize_index: TOK_OPTIMIZE $@5 index_or_table single_manticore_tablename opt_option_clause  */
#line 1948 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                        {
				pParser->SetIndex( yyvsp[-1] );
			}
#line 6120 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 599: /* json_expr: ident subscript  */
#line 1963 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 6126 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 601: /* subscript: subscript subkey  */
#line 1967 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 6132 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 605: /* subkey: '[' expr ']'  */
#line 1974 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 6138 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 606: /* subkey: '[' "string" ']'  */
#line 1975 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 6144 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 607: /* streq: expr '=' strval  */
#line 1979 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 6150 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 608: /* streq: strval '=' expr  */
#line 1980 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 6156 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 609: /* streq: expr "!=" strval  */
#line 1981 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 6162 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 610: /* streq: strval "!=" expr  */
#line 1982 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 6168 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 611: /* streq: expr '<' strval  */
#line 1983 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 6174 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 612: /* streq: strval '<' expr  */
#line 1984 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 6180 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 613: /* streq: expr '>' strval  */
#line 1985 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 6186 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 614: /* streq: strval '>' expr  */
#line 1986 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 6192 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 615: /* streq: expr "<=" strval  */
#line 1987 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 6198 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 616: /* streq: strval "<=" expr  */
#line 1988 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 6204 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 617: /* streq: expr ">=" strval  */
#line 1989 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 6210 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 618: /* streq: strval ">=" expr  */
#line 1990 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                        { TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] ); }
#line 6216 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 621: /* opt_distinct_item: TOK_DISTINCT  */
#line 2001 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                        { pParser->AddDistinct ( nullptr ); }
#line 6222 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 622: /* opt_distinct_item: TOK_DISTINCT identcol  */
#line 2002 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                                                                { pParser->AddDistinct ( &yyvsp[0] ); }
#line 6228 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 625: /* facet_by: TOK_BY  */
#line 2012 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->m_pQuery->m_sFacetBy = pParser->m_pQuery->m_sGroupBy;
			pParser->m_pQuery->m_sGroupBy = "";
			pParser->AddCount ();
		}
#line 6238 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 627: /* facet_expr: expr  */
#line 2025 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			pParser->AddItem ( &yyvsp[0] );
			pParser->AddGroupBy ( yyvsp[0] );
		}
#line 6247 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 630: /* facet_stmt: TOK_FACET facet_items_list opt_facet_by_items_list opt_distinct_item opt_order_clause opt_limit_clause  */
#line 2038 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			if ( !pParser->SetupFacetStmt() )
				YYERROR;
		}
#line 6256 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 631: /* sysfilters: TOK_SYSFILTERS filter_expr  */
#line 2046 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_SYSFILTERS;
		}
#line 6265 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 632: /* $@6: %empty  */
#line 2055 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                      { pParser->m_pStmt->m_eStmt = STMT_EXPLAIN; }
#line 6271 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;

  case 633: /* explain_query: TOK_EXPLAIN $@6 ident ident "string" opt_option_clause  */
#line 2057 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"
                        {
				SqlStmt_t & tStmt = *pParser->m_pStmt;
				pParser->ToString ( tStmt.m_sCallProc, yyvsp[-3] );
				pParser->SetIndex( yyvsp[-2] );
				pParser->m_pQuery->m_sQuery = pParser->ToStringUnescape ( yyvsp[-1] );
			}
#line 6282 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"
    break;


#line 6286 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (pParser, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= END)
        {
          /* Return failure if at end of input.  */
          if (yychar == END)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, pParser);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, pParser);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (pParser, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, pParser);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, pParser);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 2065 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql.y"


#if _WIN32
#pragma warning(pop)
#endif
