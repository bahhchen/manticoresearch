/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISSPHINXQL_H_INCLUDED
# define YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISSPHINXQL_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    END = 0,                       /* "$end"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 474,                 /* "invalid token"  */
    TOK_IDENT = 475,               /* "identifier"  */
    TOK_BACKIDENT = 476,           /* "`identifier`"  */
    TOK_ATIDENT = 477,             /* TOK_ATIDENT  */
    TOK_CONST_INT = 260,           /* "integer"  */
    TOK_CONST_FLOAT = 261,         /* "float"  */
    TOK_CONST_MVA = 262,           /* TOK_CONST_MVA  */
    TOK_QUOTED_STRING = 263,       /* "string"  */
    TOK_NULL = 473,                /* "null"  */
    TOK_USERVAR = 478,             /* "@uservar"  */
    TOK_SYSVAR = 479,              /* "@@sysvar"  */
    TOK_CONST_STRINGS = 269,       /* TOK_CONST_STRINGS  */
    TOK_BAD_NUMERIC = 480,         /* TOK_BAD_NUMERIC  */
    TOK_SUBKEY = 481,              /* TOK_SUBKEY  */
    TOK_BACKTICKED_SUBKEY = 482,   /* TOK_BACKTICKED_SUBKEY  */
    TOK_DOT_NUMBER = 483,          /* ".number"  */
    TOK_MANTICORE_DOT = 484,       /* "Manticore."  */
    TOK_SYSTEM = 485,              /* "system"  */
    TOK_AGENT = 486,               /* TOK_AGENT  */
    TOK_ALL = 487,                 /* TOK_ALL  */
    TOK_ANY = 488,                 /* TOK_ANY  */
    TOK_AS = 489,                  /* TOK_AS  */
    TOK_ASC = 490,                 /* TOK_ASC  */
    TOK_AVG = 491,                 /* TOK_AVG  */
    TOK_BEGIN = 492,               /* TOK_BEGIN  */
    TOK_BETWEEN = 493,             /* TOK_BETWEEN  */
    TOK_BIGINT = 494,              /* TOK_BIGINT  */
    TOK_BY = 495,                  /* TOK_BY  */
    TOK_CALL = 496,                /* TOK_CALL  */
    TOK_CHARACTER = 497,           /* TOK_CHARACTER  */
    TOK_CHUNK = 498,               /* TOK_CHUNK  */
    TOK_CLUSTER = 499,             /* TOK_CLUSTER  */
    TOK_COLLATE = 500,             /* TOK_COLLATE  */
    TOK_COLLATION = 501,           /* TOK_COLLATION  */
    TOK_COLUMN = 502,              /* TOK_COLUMN  */
    TOK_COMMIT = 503,              /* TOK_COMMIT  */
    TOK_COUNT = 504,               /* TOK_COUNT  */
    TOK_CREATE = 505,              /* TOK_CREATE  */
    TOK_DATABASES = 506,           /* TOK_DATABASES  */
    TOK_DAY = 507,                 /* TOK_DAY  */
    TOK_DATE_ADD = 508,            /* TOK_DATE_ADD  */
    TOK_DATE_SUB = 509,            /* TOK_DATE_SUB  */
    TOK_DELETE = 510,              /* TOK_DELETE  */
    TOK_DESC = 511,                /* TOK_DESC  */
    TOK_DESCRIBE = 512,            /* TOK_DESCRIBE  */
    TOK_DISTINCT = 513,            /* TOK_DISTINCT  */
    TOK_DIV = 514,                 /* TOK_DIV  */
    TOK_DOUBLE = 515,              /* TOK_DOUBLE  */
    TOK_EXPLAIN = 516,             /* TOK_EXPLAIN  */
    TOK_FACET = 517,               /* TOK_FACET  */
    TOK_FALSE = 518,               /* TOK_FALSE  */
    TOK_FLOAT = 519,               /* TOK_FLOAT  */
    TOK_FOR = 520,                 /* TOK_FOR  */
    TOK_FORCE = 521,               /* TOK_FORCE  */
    TOK_FROM = 522,                /* TOK_FROM  */
    TOK_FREEZE = 523,              /* TOK_FREEZE  */
    TOK_GLOBAL = 524,              /* TOK_GLOBAL  */
    TOK_GROUP = 525,               /* TOK_GROUP  */
    TOK_GROUPBY = 526,             /* TOK_GROUPBY  */
    TOK_GROUP_CONCAT = 527,        /* TOK_GROUP_CONCAT  */
    TOK_HAVING = 528,              /* TOK_HAVING  */
    TOK_HINT_SECONDARY = 529,      /* TOK_HINT_SECONDARY  */
    TOK_HINT_NO_SECONDARY = 530,   /* TOK_HINT_NO_SECONDARY  */
    TOK_HINT_DOCID = 531,          /* TOK_HINT_DOCID  */
    TOK_HINT_NO_DOCID = 532,       /* TOK_HINT_NO_DOCID  */
    TOK_HINT_CLOSE = 533,          /* TOK_HINT_CLOSE  */
    TOK_HINT_COLUMNAR = 534,       /* TOK_HINT_COLUMNAR  */
    TOK_HINT_NO_COLUMNAR = 535,    /* TOK_HINT_NO_COLUMNAR  */
    TOK_HINT_OPEN = 536,           /* TOK_HINT_OPEN  */
    TOK_HOSTNAMES = 537,           /* TOK_HOSTNAMES  */
    TOK_HOUR = 538,                /* TOK_HOUR  */
    TOK_IGNORE = 539,              /* TOK_IGNORE  */
    TOK_IN = 540,                  /* TOK_IN  */
    TOK_INDEX = 541,               /* TOK_INDEX  */
    TOK_INDEXES = 542,             /* TOK_INDEXES  */
    TOK_INDEXOF = 543,             /* TOK_INDEXOF  */
    TOK_INNER = 544,               /* TOK_INNER  */
    TOK_INSERT = 545,              /* TOK_INSERT  */
    TOK_INT = 546,                 /* TOK_INT  */
    TOK_INTERVAL = 547,            /* TOK_INTERVAL  */
    TOK_INTEGER = 548,             /* TOK_INTEGER  */
    TOK_INTO = 549,                /* TOK_INTO  */
    TOK_IS = 550,                  /* TOK_IS  */
    TOK_JOIN = 551,                /* TOK_JOIN  */
    TOK_KILL = 552,                /* TOK_KILL  */
    TOK_KNN = 553,                 /* TOK_KNN  */
    TOK_LEFT = 554,                /* TOK_LEFT  */
    TOK_LIKE = 555,                /* TOK_LIKE  */
    TOK_LIMIT = 556,               /* TOK_LIMIT  */
    TOK_LOGS = 557,                /* TOK_LOGS  */
    TOK_LOCKS = 558,               /* TOK_LOCKS  */
    TOK_MATCH = 559,               /* TOK_MATCH  */
    TOK_MAX = 560,                 /* TOK_MAX  */
    TOK_META = 561,                /* TOK_META  */
    TOK_MIN = 562,                 /* TOK_MIN  */
    TOK_MINUTE = 563,              /* TOK_MINUTE  */
    TOK_MOD = 564,                 /* TOK_MOD  */
    TOK_MONTH = 565,               /* TOK_MONTH  */
    TOK_MULTI = 566,               /* TOK_MULTI  */
    TOK_MULTI64 = 567,             /* TOK_MULTI64  */
    TOK_NAMES = 568,               /* TOK_NAMES  */
    TOK_NOT = 569,                 /* TOK_NOT  */
    TOK_OFFSET = 570,              /* TOK_OFFSET  */
    TOK_ON = 571,                  /* TOK_ON  */
    TOK_OPTION = 572,              /* TOK_OPTION  */
    TOK_ORDER = 573,               /* TOK_ORDER  */
    TOK_OPTIMIZE = 574,            /* TOK_OPTIMIZE  */
    TOK_PLAN = 575,                /* TOK_PLAN  */
    TOK_PLUGINS = 576,             /* TOK_PLUGINS  */
    TOK_PROFILE = 577,             /* TOK_PROFILE  */
    TOK_QUARTER = 578,             /* TOK_QUARTER  */
    TOK_QUERY = 579,               /* TOK_QUERY  */
    TOK_RAND = 580,                /* TOK_RAND  */
    TOK_REBUILD = 581,             /* TOK_REBUILD  */
    TOK_REGEX = 582,               /* TOK_REGEX  */
    TOK_RELOAD = 583,              /* TOK_RELOAD  */
    TOK_REPLACE = 584,             /* TOK_REPLACE  */
    TOK_REMAP = 585,               /* TOK_REMAP  */
    TOK_ROLLBACK = 586,            /* TOK_ROLLBACK  */
    TOK_SCROLL = 587,              /* TOK_SCROLL  */
    TOK_SECOND = 588,              /* TOK_SECOND  */
    TOK_SECONDARY = 589,           /* TOK_SECONDARY  */
    TOK_SELECT = 590,              /* TOK_SELECT  */
    TOK_SET = 591,                 /* TOK_SET  */
    TOK_SETTINGS = 592,            /* TOK_SETTINGS  */
    TOK_SESSION = 593,             /* TOK_SESSION  */
    TOK_SHOW = 594,                /* TOK_SHOW  */
    TOK_SONAME = 595,              /* TOK_SONAME  */
    TOK_START = 596,               /* TOK_START  */
    TOK_STATUS = 597,              /* TOK_STATUS  */
    TOK_STRING = 598,              /* TOK_STRING  */
    TOK_SYSFILTERS = 599,          /* TOK_SYSFILTERS  */
    TOK_SUM = 600,                 /* TOK_SUM  */
    TOK_TABLE = 378,               /* TOK_TABLE  */
    TOK_TABLES = 601,              /* TOK_TABLES  */
    TOK_THREADS = 602,             /* TOK_THREADS  */
    TOK_TO = 603,                  /* TOK_TO  */
    TOK_TRANSACTION = 604,         /* TOK_TRANSACTION  */
    TOK_TRUE = 605,                /* TOK_TRUE  */
    TOK_UNFREEZE = 606,            /* TOK_UNFREEZE  */
    TOK_UPDATE = 607,              /* TOK_UPDATE  */
    TOK_VALUES = 608,              /* TOK_VALUES  */
    TOK_VARIABLES = 609,           /* TOK_VARIABLES  */
    TOK_WARNINGS = 610,            /* TOK_WARNINGS  */
    TOK_WEEK = 611,                /* TOK_WEEK  */
    TOK_WEIGHT = 612,              /* TOK_WEIGHT  */
    TOK_WHERE = 613,               /* TOK_WHERE  */
    TOK_WITHIN = 614,              /* TOK_WITHIN  */
    TOK_YEAR = 615,                /* TOK_YEAR  */
    TOK_LTE = 616,                 /* "<="  */
    TOK_GTE = 617,                 /* ">="  */
    TOK_NE = 618,                  /* "!="  */
    TOK_OR = 619,                  /* TOK_OR  */
    TOK_AND = 620,                 /* TOK_AND  */
    TOK_NEG = 621                  /* TOK_NEG  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (SqlParser_c * pParser);


#endif /* !YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISSPHINXQL_H_INCLUDED  */
