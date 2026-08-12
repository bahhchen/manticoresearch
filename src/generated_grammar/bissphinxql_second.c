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
#line 1 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"

#if _WIN32
#pragma warning(push,1)
#pragma warning(disable:4702) // unreachable code
#endif

#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wfree-nonheap-object"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#line 76 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"


#define TRACK_BOUNDS(_res,_left,_right) \
	_res = _left; \
	if ( _res.m_iStart>0 && pParser->m_pBuf[_res.m_iStart-1]=='`' ) \
		_res.m_iStart--; \
	_res.m_iEnd = _right.m_iEnd; \
	_res.m_iType = 0;


#line 93 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"

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

#include "bissphinxql_second.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "$end"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_CONST_FLOAT = 3,            /* TOK_CONST_FLOAT  */
  YYSYMBOL_TOK_CONST_INT = 4,              /* TOK_CONST_INT  */
  YYSYMBOL_TOK_IDENT = 5,                  /* "identifier"  */
  YYSYMBOL_TOK_OFF = 6,                    /* TOK_OFF  */
  YYSYMBOL_TOK_ON = 7,                     /* TOK_ON  */
  YYSYMBOL_TOK_QUOTED_STRING = 8,          /* "string"  */
  YYSYMBOL_TOK_DOT_NUMBER = 9,             /* ".number"  */
  YYSYMBOL_TOK_ATTACH = 10,                /* TOK_ATTACH  */
  YYSYMBOL_TOK_ATTRIBUTES = 11,            /* TOK_ATTRIBUTES  */
  YYSYMBOL_TOK_BACKTICKED_SUBKEY = 12,     /* TOK_BACKTICKED_SUBKEY  */
  YYSYMBOL_TOK_BAD_NUMERIC = 13,           /* TOK_BAD_NUMERIC  */
  YYSYMBOL_TOK_CACHE = 14,                 /* TOK_CACHE  */
  YYSYMBOL_TOK_CLUSTER = 15,               /* TOK_CLUSTER  */
  YYSYMBOL_TOK_COMMITTED = 16,             /* TOK_COMMITTED  */
  YYSYMBOL_TOK_COMPRESS = 17,              /* TOK_COMPRESS  */
  YYSYMBOL_TOK_DELETE = 18,                /* TOK_DELETE  */
  YYSYMBOL_TOK_DROP = 19,                  /* TOK_DROP  */
  YYSYMBOL_TOK_FLUSH = 20,                 /* TOK_FLUSH  */
  YYSYMBOL_TOK_FREEZE = 21,                /* TOK_FREEZE  */
  YYSYMBOL_TOK_GLOBAL = 22,                /* TOK_GLOBAL  */
  YYSYMBOL_TOK_HOSTNAMES = 23,             /* TOK_HOSTNAMES  */
  YYSYMBOL_TOK_INDEX = 24,                 /* "index"  */
  YYSYMBOL_TOK_INDEXES = 25,               /* "indexes"  */
  YYSYMBOL_TOK_ISOLATION = 26,             /* TOK_ISOLATION  */
  YYSYMBOL_TOK_KILL = 27,                  /* TOK_KILL  */
  YYSYMBOL_TOK_LEVEL = 28,                 /* TOK_LEVEL  */
  YYSYMBOL_TOK_LIKE = 29,                  /* TOK_LIKE  */
  YYSYMBOL_TOK_LOGS = 30,                  /* TOK_LOGS  */
  YYSYMBOL_TOK_OPTION = 31,                /* TOK_OPTION  */
  YYSYMBOL_TOK_QUERY = 32,                 /* TOK_QUERY  */
  YYSYMBOL_TOK_RAMCHUNK = 33,              /* TOK_RAMCHUNK  */
  YYSYMBOL_TOK_READ = 34,                  /* TOK_READ  */
  YYSYMBOL_TOK_RECONFIGURE = 35,           /* TOK_RECONFIGURE  */
  YYSYMBOL_TOK_REPEATABLE = 36,            /* TOK_REPEATABLE  */
  YYSYMBOL_TOK_RTINDEX = 37,               /* "rtindex"  */
  YYSYMBOL_TOK_SERIALIZABLE = 38,          /* TOK_SERIALIZABLE  */
  YYSYMBOL_TOK_SESSION = 39,               /* TOK_SESSION  */
  YYSYMBOL_TOK_SET = 40,                   /* TOK_SET  */
  YYSYMBOL_TOK_SYSVAR = 41,                /* "@@sysvar"  */
  YYSYMBOL_TOK_TABLE = 42,                 /* "table"  */
  YYSYMBOL_TOK_TABLES = 43,                /* "tables"  */
  YYSYMBOL_TOK_TO = 44,                    /* TOK_TO  */
  YYSYMBOL_TOK_TRANSACTION = 45,           /* TOK_TRANSACTION  */
  YYSYMBOL_TOK_UNCOMMITTED = 46,           /* TOK_UNCOMMITTED  */
  YYSYMBOL_TOK_UNFREEZE = 47,              /* TOK_UNFREEZE  */
  YYSYMBOL_TOK_USERVAR = 48,               /* "@uservar"  */
  YYSYMBOL_TOK_WAIT = 49,                  /* TOK_WAIT  */
  YYSYMBOL_TOK_WITH = 50,                  /* TOK_WITH  */
  YYSYMBOL_TOK_FROM = 51,                  /* TOK_FROM  */
  YYSYMBOL_TOK_PLUGINS = 52,               /* TOK_PLUGINS  */
  YYSYMBOL_TOK_RELOAD = 53,                /* TOK_RELOAD  */
  YYSYMBOL_TOK_SONAME = 54,                /* TOK_SONAME  */
  YYSYMBOL_TOK_TRUNCATE = 55,              /* TOK_TRUNCATE  */
  YYSYMBOL_TOK_SYSTEM_DOT = 56,            /* "system."  */
  YYSYMBOL_57_ = 57,                       /* ':'  */
  YYSYMBOL_58_ = 58,                       /* ','  */
  YYSYMBOL_59_ = 59,                       /* '='  */
  YYSYMBOL_60_ = 60,                       /* '('  */
  YYSYMBOL_61_ = 61,                       /* ')'  */
  YYSYMBOL_62_ = 62,                       /* '-'  */
  YYSYMBOL_YYACCEPT = 63,                  /* $accept  */
  YYSYMBOL_statement = 64,                 /* statement  */
  YYSYMBOL_ident_no_option = 65,           /* ident_no_option  */
  YYSYMBOL_ident = 66,                     /* ident  */
  YYSYMBOL_ident_all = 67,                 /* ident_all  */
  YYSYMBOL_identcol = 68,                  /* identcol  */
  YYSYMBOL_like_filter = 69,               /* like_filter  */
  YYSYMBOL_set_string_value = 70,          /* set_string_value  */
  YYSYMBOL_index_or_table = 71,            /* index_or_table  */
  YYSYMBOL_indexes_or_tables = 72,         /* indexes_or_tables  */
  YYSYMBOL_index_id = 73,                  /* index_id  */
  YYSYMBOL_one_index = 74,                 /* one_index  */
  YYSYMBOL_only_one_index = 75,            /* only_one_index  */
  YYSYMBOL_list_of_indexes = 76,           /* list_of_indexes  */
  YYSYMBOL_one_or_more_indexes = 77,       /* one_or_more_indexes  */
  YYSYMBOL_set_global_stmt = 78,           /* set_global_stmt  */
  YYSYMBOL_const_list_entry = 79,          /* const_list_entry  */
  YYSYMBOL_const_list = 80,                /* const_list  */
  YYSYMBOL_const_int = 81,                 /* const_int  */
  YYSYMBOL_const_float = 82,               /* const_float  */
  YYSYMBOL_const_float_unsigned = 83,      /* const_float_unsigned  */
  YYSYMBOL_global_or_session = 84,         /* global_or_session  */
  YYSYMBOL_set_transaction = 85,           /* set_transaction  */
  YYSYMBOL_isolation_level = 86,           /* isolation_level  */
  YYSYMBOL_truncate = 87,                  /* truncate  */
  YYSYMBOL_rtindex = 88,                   /* rtindex  */
  YYSYMBOL_opt_with_reconfigure = 89,      /* opt_with_reconfigure  */
  YYSYMBOL_attach_index = 90,              /* attach_index  */
  YYSYMBOL_opt_with_truncate = 91,         /* opt_with_truncate  */
  YYSYMBOL_flush_rtindex = 92,             /* flush_rtindex  */
  YYSYMBOL_flush_ramchunk = 93,            /* flush_ramchunk  */
  YYSYMBOL_flush_index = 94,               /* flush_index  */
  YYSYMBOL_flush_hostnames = 95,           /* flush_hostnames  */
  YYSYMBOL_flush_logs = 96,                /* flush_logs  */
  YYSYMBOL_drop_cache = 97,                /* drop_cache  */
  YYSYMBOL_reload_plugins = 98,            /* reload_plugins  */
  YYSYMBOL_opt_reload_index_from = 99,     /* opt_reload_index_from  */
  YYSYMBOL_reload_index = 100,             /* reload_index  */
  YYSYMBOL_101_1 = 101,                    /* $@1  */
  YYSYMBOL_reload_indexes = 102,           /* reload_indexes  */
  YYSYMBOL_delete_cluster = 103,           /* delete_cluster  */
  YYSYMBOL_freeze_indexes = 104,           /* freeze_indexes  */
  YYSYMBOL_unfreeze_indexes = 105,         /* unfreeze_indexes  */
  YYSYMBOL_opt_word_query = 106,           /* opt_word_query  */
  YYSYMBOL_kill_connid = 107,              /* kill_connid  */
  YYSYMBOL_opt_option_clause = 108,        /* opt_option_clause  */
  YYSYMBOL_option_list = 109,              /* option_list  */
  YYSYMBOL_option_item = 110               /* option_item  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  106
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   531

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  201

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      60,    61,     2,     2,    58,    62,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    57,     2,
       2,    59,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    91,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   115,   115,
     115,   115,   115,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   117,   118,   118,
     122,   123,   127,   128,   133,   134,   138,   140,   144,   145,
     149,   150,   154,   155,   159,   160,   167,   168,   177,   184,
     188,   195,   199,   209,   213,   218,   223,   228,   235,   245,
     246,   250,   257,   265,   270,   278,   279,   286,   287,   290,
     292,   296,   303,   310,   311,   312,   313,   319,   327,   328,
     331,   333,   342,   351,   353,   361,   370,   379,   387,   395,
     403,   413,   423,   425,   433,   432,   440,   448,   457,   464,
     470,   472,   476,   486,   488,   492,   493,   497,   502,   507
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
  "\"$end\"", "error", "\"invalid token\"", "TOK_CONST_FLOAT",
  "TOK_CONST_INT", "\"identifier\"", "TOK_OFF", "TOK_ON", "\"string\"",
  "\".number\"", "TOK_ATTACH", "TOK_ATTRIBUTES", "TOK_BACKTICKED_SUBKEY",
  "TOK_BAD_NUMERIC", "TOK_CACHE", "TOK_CLUSTER", "TOK_COMMITTED",
  "TOK_COMPRESS", "TOK_DELETE", "TOK_DROP", "TOK_FLUSH", "TOK_FREEZE",
  "TOK_GLOBAL", "TOK_HOSTNAMES", "\"index\"", "\"indexes\"",
  "TOK_ISOLATION", "TOK_KILL", "TOK_LEVEL", "TOK_LIKE", "TOK_LOGS",
  "TOK_OPTION", "TOK_QUERY", "TOK_RAMCHUNK", "TOK_READ", "TOK_RECONFIGURE",
  "TOK_REPEATABLE", "\"rtindex\"", "TOK_SERIALIZABLE", "TOK_SESSION",
  "TOK_SET", "\"@@sysvar\"", "\"table\"", "\"tables\"", "TOK_TO",
  "TOK_TRANSACTION", "TOK_UNCOMMITTED", "TOK_UNFREEZE", "\"@uservar\"",
  "TOK_WAIT", "TOK_WITH", "TOK_FROM", "TOK_PLUGINS", "TOK_RELOAD",
  "TOK_SONAME", "TOK_TRUNCATE", "\"system.\"", "':'", "','", "'='", "'('",
  "')'", "'-'", "$accept", "statement", "ident_no_option", "ident",
  "ident_all", "identcol", "like_filter", "set_string_value",
  "index_or_table", "indexes_or_tables", "index_id", "one_index",
  "only_one_index", "list_of_indexes", "one_or_more_indexes",
  "set_global_stmt", "const_list_entry", "const_list", "const_int",
  "const_float", "const_float_unsigned", "global_or_session",
  "set_transaction", "isolation_level", "truncate", "rtindex",
  "opt_with_reconfigure", "attach_index", "opt_with_truncate",
  "flush_rtindex", "flush_ramchunk", "flush_index", "flush_hostnames",
  "flush_logs", "drop_cache", "reload_plugins", "opt_reload_index_from",
  "reload_index", "$@1", "reload_indexes", "delete_cluster",
  "freeze_indexes", "unfreeze_indexes", "opt_word_query", "kill_connid",
  "opt_option_clause", "option_list", "option_item", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-169)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,    -1,    36,    12,    -3,   270,    37,    16,   270,    -6,
      23,    68,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,   374,   425,  -169,  -169,  -169,  -169,   270,  -169,  -169,
     270,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,   374,  -169,  -169,    14,  -169,    17,
      18,    43,  -169,    70,   374,   425,  -169,   270,    32,  -169,
    -169,  -169,    27,   374,  -169,   270,  -169,    35,  -169,  -169,
    -169,  -169,  -169,   270,   270,   270,    72,  -169,  -169,    59,
      25,    63,    60,    33,  -169,  -169,    38,    23,  -169,  -169,
    -169,  -169,    81,   158,   425,    62,    83,    41,    58,  -169,
     270,    39,  -169,  -169,     8,    90,  -169,  -169,  -169,    40,
      11,  -169,    87,    65,  -169,    47,   217,  -169,  -169,    53,
    -169,   -33,  -169,  -169,  -169,  -169,    44,   -13,    66,  -169,
    -169,  -169,   476,  -169,    46,  -169,  -169,  -169,  -169,     8,
    -169,     8,  -169,  -169,  -169,    48,    50,  -169,  -169,  -169,
     -29,   323,   476,  -169,  -169,  -169,  -169,    49,  -169,   425,
    -169
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,   130,    99,     0,     0,
       0,     0,     2,     3,     5,     4,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    70,
      71,     0,     0,   120,   117,   118,   119,     0,   108,   109,
       0,    59,    35,    36,    19,    20,    21,    22,    23,    42,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    61,    37,    38,    39,    40,    41,    43,    44,    45,
      46,    47,    48,    49,    63,    50,    51,    52,    53,    54,
      55,    56,    57,    58,     0,    60,    62,    74,    76,    81,
      82,    66,   131,     0,     0,   100,   101,     0,     0,   129,
      72,    73,     0,     0,   126,     0,     1,     0,   127,    74,
     116,   115,    75,     0,     0,     0,     0,   128,   132,     0,
       0,     0,     0,     0,   124,    78,   110,     0,    77,    79,
      80,    67,     0,     0,     0,     0,     0,   122,     0,   107,
       0,     0,    93,    69,     0,     0,    68,    84,    85,     0,
       0,   121,     0,   133,   111,   113,     0,    97,    98,     0,
      91,     0,    89,    90,    95,    94,     0,     0,     0,   106,
     102,   123,     0,   125,     0,   112,    87,    88,    96,     0,
      83,     0,   104,   103,   105,     0,   134,   135,   114,    92,
       0,     0,     0,    86,   138,   139,    64,   137,   136,     0,
      65
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -169,  -169,  -168,   -32,   -30,  -169,  -169,   -51,    52,  -169,
     -31,   -62,  -169,  -169,   103,  -169,   -67,   -68,  -112,  -169,
     -45,  -169,  -169,  -169,  -169,    -8,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,  -169,
    -169,  -169,  -169,  -169,  -169,  -169,  -169,   -77
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    11,    85,    86,    87,   197,   117,   147,    31,   104,
      88,    89,   126,    90,    91,    12,   160,   161,   162,   163,
     164,    98,    13,   170,    14,    40,   139,    15,   175,    16,
      17,    18,    19,    20,    21,    22,   153,    23,   137,    24,
      25,    26,    27,    93,    28,   173,   186,   187
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     108,   107,   105,   182,   185,     1,   110,   109,    34,   111,
     109,   157,   142,     2,     3,     4,     5,   158,    29,   100,
      35,   148,     6,    29,   185,   179,    33,    36,   180,   179,
      37,    94,   193,   183,    38,     7,    30,   101,    95,    39,
      29,    30,     8,   125,   177,   167,   102,   168,     9,   169,
      10,    32,   129,   130,   112,    96,   157,   165,    30,    97,
      38,   103,   158,   120,   119,    39,   121,   109,   106,    92,
     159,   113,   116,   124,   118,   114,   115,   122,   123,   127,
     131,   132,   128,   109,   133,   134,   135,   136,   138,   141,
     150,   151,   152,   154,   165,   171,   172,   174,   156,   166,
     184,   188,   149,   146,   181,   176,   199,   191,   192,   155,
     109,    99,   189,   190,   178,   198,     0,     0,     0,   140,
       0,     0,     0,     0,     0,     0,   146,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   196,
       0,     0,   142,    41,    42,    43,   143,   200,    44,    45,
       0,     0,     0,    46,    47,    48,    49,     0,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     0,
      71,    72,    73,    74,    75,    76,     0,    77,    78,    79,
      80,    81,    82,    83,     0,     0,     0,     0,   144,     0,
     145,   142,    41,    42,    43,   143,     0,    44,    45,     0,
       0,     0,    46,    47,    48,    49,     0,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,    71,
      72,    73,    74,    75,    76,     0,    77,    78,    79,    80,
      81,    82,    83,     0,     0,    41,    42,    43,     0,   145,
      44,    45,     0,     0,     0,    46,    47,    48,    49,     0,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,    71,    72,    73,    74,    75,    76,     0,    77,
      78,    79,    80,    81,    82,    83,    84,   194,    41,    42,
      43,   195,     0,    44,    45,     0,     0,     0,    46,    47,
      48,    49,     0,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     0,    71,    72,    73,     0,    75,
      76,     0,    77,    78,    79,    80,    81,    82,    83,    41,
      42,    43,     0,     0,    44,    45,     0,     0,     0,    46,
      47,    48,    49,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     0,    71,    72,    73,    74,
      75,    76,     0,    77,    78,    79,    80,    81,    82,    83,
      41,    42,    43,     0,     0,    44,    45,     0,     0,     0,
      46,    47,    48,    49,     0,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,     0,    71,    72,    73,
       0,    75,    76,     0,    77,    78,    79,    80,    81,    82,
      83,    41,    42,    43,     0,     0,    44,    45,     0,     0,
       0,    46,    47,    48,    49,     0,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,     0,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     0,    71,    72,
      73,     0,    75,    76,     0,    77,    78,    79,    80,    81,
      82,    83
};

static const yytype_int16 yycheck[] =
{
      32,    31,    10,    16,   172,    10,    37,    37,    11,    40,
      40,     3,     4,    18,    19,    20,    21,     9,    24,    25,
      23,   133,    27,    24,   192,    58,    14,    30,    61,    58,
      33,    15,    61,    46,    37,    40,    42,    43,    22,    42,
      24,    42,    47,   105,   156,    34,    52,    36,    53,    38,
      55,    15,   114,   115,    84,    39,     3,     4,    42,     7,
      37,     9,     9,    95,    94,    42,    97,    97,     0,    32,
      62,    57,    29,   103,     4,    58,    58,    45,    51,    44,
       8,    22,   113,   113,    59,    22,    26,    54,    50,     8,
      28,     8,    51,    35,     4,     8,    31,    50,    59,    59,
      34,    55,   134,   133,    60,   156,    57,    59,    58,   140,
     140,     8,   179,   181,   159,   192,    -1,    -1,    -1,   127,
      -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,
      -1,    -1,     4,     5,     6,     7,     8,   199,    10,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    60,    -1,
      62,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    15,    16,    17,    18,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,     5,     6,     7,    -1,    62,
      10,    11,    -1,    -1,    -1,    15,    16,    17,    18,    -1,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    -1,    46,
      47,    -1,    49,    50,    51,    52,    53,    54,    55,     5,
       6,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    18,    -1,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
       5,     6,     7,    -1,    -1,    10,    11,    -1,    -1,    -1,
      15,    16,    17,    18,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      -1,    46,    47,    -1,    49,    50,    51,    52,    53,    54,
      55,     5,     6,     7,    -1,    -1,    10,    11,    -1,    -1,
      -1,    15,    16,    17,    18,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    -1,    46,    47,    -1,    49,    50,    51,    52,    53,
      54,    55
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    18,    19,    20,    21,    27,    40,    47,    53,
      55,    64,    78,    85,    87,    90,    92,    93,    94,    95,
      96,    97,    98,   100,   102,   103,   104,   105,   107,    24,
      42,    71,    15,    14,    11,    23,    30,    33,    37,    42,
      88,     5,     6,     7,    10,    11,    15,    16,    17,    18,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    42,    43,    44,    45,    46,    47,    49,    50,    51,
      52,    53,    54,    55,    56,    65,    66,    67,    73,    74,
      76,    77,    32,   106,    15,    22,    39,    71,    84,    77,
      25,    43,    52,    71,    72,    88,     0,    67,    66,    67,
      73,    73,    67,    57,    58,    58,    29,    69,     4,    67,
      66,    73,    45,    51,    67,    74,    75,    44,    73,    74,
      74,     8,    22,    59,    22,    26,    54,   101,    50,    89,
      88,     8,     4,     8,    60,    62,    67,    70,    81,    66,
      28,     8,    51,    99,    35,    73,    59,     3,     9,    62,
      79,    80,    81,    82,    83,     4,    59,    34,    36,    38,
      86,     8,    31,   108,    50,    91,    70,    81,    83,    58,
      61,    60,    16,    46,    34,    65,   109,   110,    55,    79,
      80,    59,    58,    61,     4,     8,    66,    68,   110,    57,
      66
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      66,    66,    67,    67,    68,    68,    69,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    75,    76,
      76,    77,    77,    78,    78,    78,    78,    78,    78,    79,
      79,    80,    80,    81,    81,    82,    82,    83,    83,    84,
      84,    84,    85,    86,    86,    86,    86,    87,    88,    88,
      89,    89,    90,    91,    91,    92,    93,    94,    95,    96,
      97,    98,    99,    99,   101,   100,   102,   103,   104,   105,
     106,   106,   107,   108,   108,   109,   109,   110,   110,   110
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     1,     3,
       3,     1,     1,     7,     5,     5,     9,     7,     7,     1,
       1,     1,     3,     1,     2,     1,     2,     1,     1,     0,
       1,     1,     6,     2,     2,     2,     1,     4,     1,     1,
       0,     2,     7,     0,     2,     3,     3,     2,     2,     2,
       2,     5,     0,     2,     0,     6,     2,     3,     3,     2,
       0,     1,     3,     0,     2,     1,     3,     3,     3,     3
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
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, class SqlSecondParser_c * pParser)
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, class SqlSecondParser_c * pParser)
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
                 int yyrule, class SqlSecondParser_c * pParser)
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, class SqlSecondParser_c * pParser)
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
yyparse (class SqlSecondParser_c * pParser)
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
  case 65: /* identcol: identcol ':' ident  */
#line 134 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                             {TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] );}
#line 1697 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 67: /* like_filter: TOK_LIKE "string"  */
#line 140 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                                                { pParser->m_pStmt->m_sStringParam = pParser->ToStringUnescape (yyvsp[0] ); }
#line 1703 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 75: /* index_id: "system." ident_all  */
#line 161 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			TRACK_BOUNDS ( yyval, yyvsp[-1], yyvsp[0] );
		}
#line 1711 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 77: /* one_index: ident_all ':' index_id  */
#line 169 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->ToString (pParser->m_pStmt->m_sCluster, yyvsp[-2]);
			yyval = yyvsp[0];
		}
#line 1720 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 78: /* only_one_index: one_index  */
#line 178 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->SetIndex (yyvsp[0]);
		}
#line 1728 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 79: /* list_of_indexes: one_index ',' one_index  */
#line 185 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
    		TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] );
    	}
#line 1736 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 80: /* list_of_indexes: list_of_indexes ',' one_index  */
#line 189 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			TRACK_BOUNDS ( yyval, yyvsp[-2], yyvsp[0] );
		}
#line 1744 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 81: /* one_or_more_indexes: one_index  */
#line 196 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->ToString (pParser->m_pStmt->m_sIndex, yyvsp[0]);
		}
#line 1752 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 82: /* one_or_more_indexes: list_of_indexes  */
#line 200 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->ToString (pParser->m_pStmt->m_sIndex, yyvsp[0]);
        }
#line 1760 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 83: /* set_global_stmt: TOK_SET TOK_GLOBAL ident '=' '(' const_list ')'  */
#line 210 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->SetStatement ( yyvsp[-4], SET_GLOBAL_UVAR, yyvsp[-1].m_iValues );
		}
#line 1768 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 84: /* set_global_stmt: TOK_SET TOK_GLOBAL ident '=' set_string_value  */
#line 214 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->SetStatement ( yyvsp[-2], SET_GLOBAL_SVAR );
			pParser->ToString ( pParser->m_pStmt->m_sSetValue, yyvsp[0] ).Unquote();
		}
#line 1777 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 85: /* set_global_stmt: TOK_SET TOK_GLOBAL ident '=' const_int  */
#line 219 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->SetStatement ( yyvsp[-2], SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_iSetValue = yyvsp[0].GetValueInt();
		}
#line 1786 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 86: /* set_global_stmt: TOK_SET index_or_table index_id TOK_GLOBAL ident '=' '(' const_list ')'  */
#line 224 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->SetStatement ( yyvsp[-4], SET_INDEX_UVAR, yyvsp[-1].m_iValues );
			pParser->ToString ( pParser->m_pStmt->m_sIndex, yyvsp[-6] );
		}
#line 1795 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 87: /* set_global_stmt: TOK_SET TOK_CLUSTER ident_all TOK_GLOBAL "string" '=' set_string_value  */
#line 229 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->SetStatement ( yyvsp[-2], SET_CLUSTER_UVAR );
			pParser->ToString ( pParser->m_pStmt->m_sIndex, yyvsp[-4] );
			pParser->ToString ( pParser->m_pStmt->m_sSetName, yyvsp[-2] ).Unquote();
			pParser->ToString ( pParser->m_pStmt->m_sSetValue, yyvsp[0] ).Unquote();
		}
#line 1806 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 88: /* set_global_stmt: TOK_SET TOK_CLUSTER ident_all TOK_GLOBAL "string" '=' const_int  */
#line 236 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->SetStatement ( yyvsp[-2], SET_CLUSTER_UVAR );
			pParser->ToString ( pParser->m_pStmt->m_sIndex, yyvsp[-4] );
			pParser->ToString ( pParser->m_pStmt->m_sSetName, yyvsp[-2] ).Unquote();
			pParser->m_pStmt->m_sSetValue.SetSprintf ( INT64_FMT, yyvsp[0].GetValueInt() );
		}
#line 1817 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 91: /* const_list: const_list_entry  */
#line 251 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			assert ( yyval.m_iValues<0 );
			yyval.m_iValues = pParser->AddMvaVec ();
			auto& dVec = pParser->GetMvaVec ( yyval.m_iValues );
			dVec.Add ( { yyvsp[0].GetValueInt(), yyvsp[0].GetValueFloat() } );
		}
#line 1828 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 92: /* const_list: const_list ',' const_list_entry  */
#line 258 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			auto& dVec = pParser->GetMvaVec ( yyval.m_iValues );
			dVec.Add ( { yyvsp[0].GetValueInt(), yyvsp[0].GetValueFloat() } );
		}
#line 1837 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 93: /* const_int: TOK_CONST_INT  */
#line 266 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			yyval.m_iType = TOK_CONST_INT;
			yyval.SetValueInt ( yyvsp[0].GetValueUint(), false );
		}
#line 1846 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 94: /* const_int: '-' TOK_CONST_INT  */
#line 271 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			yyval.m_iType = TOK_CONST_INT;
			yyval.SetValueInt ( yyvsp[0].GetValueUint(), true );
		}
#line 1855 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 95: /* const_float: const_float_unsigned  */
#line 278 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                                        { yyval.m_iType = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; }
#line 1861 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 96: /* const_float: '-' const_float_unsigned  */
#line 279 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                                        { yyval.m_iType = TOK_CONST_FLOAT; yyval.m_fValue = -yyvsp[0].m_fValue; }
#line 1867 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 97: /* const_float_unsigned: TOK_CONST_FLOAT  */
#line 286 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                                        { yyval.m_fValue = yyvsp[0].m_fValue; }
#line 1873 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 98: /* const_float_unsigned: ".number"  */
#line 287 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                                        { yyval.m_fValue = pParser->ToFloat (yyvsp[0]); }
#line 1879 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 100: /* global_or_session: TOK_GLOBAL  */
#line 293 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->m_pStmt->m_iIntParam = 0;
		}
#line 1887 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 101: /* global_or_session: TOK_SESSION  */
#line 297 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
    		pParser->m_pStmt->m_iIntParam = 1;
    	}
#line 1895 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 102: /* set_transaction: TOK_SET global_or_session TOK_TRANSACTION TOK_ISOLATION TOK_LEVEL isolation_level  */
#line 304 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		}
#line 1903 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 107: /* truncate: TOK_TRUNCATE rtindex only_one_index opt_with_reconfigure  */
#line 320 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_TRUNCATE_RTINDEX;
		}
#line 1912 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 111: /* opt_with_reconfigure: TOK_WITH TOK_RECONFIGURE  */
#line 334 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->m_pStmt->m_iIntParam = 1;
		}
#line 1920 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 112: /* attach_index: TOK_ATTACH index_or_table ident_all TOK_TO rtindex index_id opt_with_truncate  */
#line 343 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ATTACH_INDEX;
			pParser->ToString ( tStmt.m_sIndex, yyvsp[-4] );
			pParser->ToString ( tStmt.m_sStringParam, yyvsp[-1] );
		}
#line 1931 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 114: /* opt_with_truncate: TOK_WITH TOK_TRUNCATE  */
#line 354 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->m_pStmt->m_iIntParam = 1;
		}
#line 1939 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 115: /* flush_rtindex: TOK_FLUSH rtindex index_id  */
#line 362 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RTINDEX;
			pParser->ToString ( tStmt.m_sIndex, yyvsp[0] );
		}
#line 1949 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 116: /* flush_ramchunk: TOK_FLUSH TOK_RAMCHUNK index_id  */
#line 371 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RAMCHUNK;
			pParser->ToString ( tStmt.m_sIndex, yyvsp[0] );
		}
#line 1959 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 117: /* flush_index: TOK_FLUSH TOK_ATTRIBUTES  */
#line 380 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_INDEX;
		}
#line 1968 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 118: /* flush_hostnames: TOK_FLUSH TOK_HOSTNAMES  */
#line 388 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_HOSTNAMES;
		}
#line 1977 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 119: /* flush_logs: TOK_FLUSH TOK_LOGS  */
#line 396 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_LOGS;
		}
#line 1986 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 120: /* drop_cache: TOK_DROP TOK_CACHE  */
#line 404 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_CACHE;
		}
#line 1995 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 121: /* reload_plugins: TOK_RELOAD TOK_PLUGINS TOK_FROM TOK_SONAME "string"  */
#line 414 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			SqlStmt_t & s = *pParser->m_pStmt;
			s.m_eStmt = STMT_RELOAD_PLUGINS;
			s.m_sUdfLib = pParser->ToStringUnescape ( yyvsp[0] );
		}
#line 2005 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 123: /* opt_reload_index_from: TOK_FROM "string"  */
#line 426 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->m_pStmt->m_sStringParam = pParser->ToStringUnescape ( yyvsp[0] );
		}
#line 2013 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 124: /* $@1: %empty  */
#line 433 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_RELOAD_INDEX;
			pParser->ToString ( pParser->m_pStmt->m_sIndex, yyvsp[0]);
		}
#line 2022 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 126: /* reload_indexes: TOK_RELOAD indexes_or_tables  */
#line 441 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_RELOAD_INDEXES;
		}
#line 2031 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 127: /* delete_cluster: TOK_DELETE TOK_CLUSTER ident  */
#line 449 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CLUSTER_DELETE;
			pParser->ToString ( tStmt.m_sIndex, yyvsp[0] );
		}
#line 2041 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 128: /* freeze_indexes: TOK_FREEZE one_or_more_indexes like_filter  */
#line 458 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_FREEZE;
		}
#line 2049 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 129: /* unfreeze_indexes: TOK_UNFREEZE one_or_more_indexes  */
#line 465 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_UNFREEZE;
		}
#line 2057 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 132: /* kill_connid: TOK_KILL opt_word_query TOK_CONST_INT  */
#line 477 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			pParser->m_pStmt->m_eStmt = STMT_KILL;
			pParser->m_pStmt->m_iIntParam = yyvsp[0].GetValueInt();
		}
#line 2066 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 137: /* option_item: ident_no_option '=' identcol  */
#line 498 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		}
#line 2075 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 138: /* option_item: ident_no_option '=' TOK_CONST_INT  */
#line 503 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		}
#line 2084 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;

  case 139: /* option_item: ident_no_option '=' "string"  */
#line 508 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"
                {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		}
#line 2093 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"
    break;


#line 2097 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_second.c"

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

#line 515 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_second.y"


#if _WIN32
#pragma warning(pop)
#endif
