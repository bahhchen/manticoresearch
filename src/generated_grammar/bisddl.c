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
#line 1 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"

#if _WIN32
#pragma warning(push,1)
#pragma warning(disable:4702) // unreachable code
#endif

#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wfree-nonheap-object"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif

#line 83 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"

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

#include "bisddl.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "$end"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_IDENT = 3,                  /* "identifier"  */
  YYSYMBOL_TOK_TABLEIDENT = 4,             /* "tablename"  */
  YYSYMBOL_TOK_CONST_FLOAT = 5,            /* "float"  */
  YYSYMBOL_TOK_CONST_INT = 6,              /* "integer"  */
  YYSYMBOL_TOK_QUOTED_STRING = 7,          /* "string"  */
  YYSYMBOL_TOK_ADD = 8,                    /* TOK_ADD  */
  YYSYMBOL_TOK_ALTER = 9,                  /* TOK_ALTER  */
  YYSYMBOL_TOK_API_KEY = 10,               /* TOK_API_KEY  */
  YYSYMBOL_TOK_AS = 11,                    /* TOK_AS  */
  YYSYMBOL_TOK_AT = 12,                    /* TOK_AT  */
  YYSYMBOL_TOK_ATTRIBUTE = 13,             /* TOK_ATTRIBUTE  */
  YYSYMBOL_TOK_BIGINT = 14,                /* TOK_BIGINT  */
  YYSYMBOL_TOK_BIT = 15,                   /* TOK_BIT  */
  YYSYMBOL_TOK_BOOL = 16,                  /* TOK_BOOL  */
  YYSYMBOL_TOK_CACHE_PATH = 17,            /* TOK_CACHE_PATH  */
  YYSYMBOL_TOK_CLUSTER = 18,               /* TOK_CLUSTER  */
  YYSYMBOL_TOK_COLUMN = 19,                /* TOK_COLUMN  */
  YYSYMBOL_TOK_COLUMNAR = 20,              /* TOK_COLUMNAR  */
  YYSYMBOL_TOK_CREATE = 21,                /* TOK_CREATE  */
  YYSYMBOL_TOK_DOUBLE = 22,                /* TOK_DOUBLE  */
  YYSYMBOL_TOK_DROP = 23,                  /* TOK_DROP  */
  YYSYMBOL_TOK_ENGINE = 24,                /* TOK_ENGINE  */
  YYSYMBOL_TOK_EXISTS = 25,                /* TOK_EXISTS  */
  YYSYMBOL_TOK_FAST_FETCH = 26,            /* TOK_FAST_FETCH  */
  YYSYMBOL_TOK_FLOAT = 27,                 /* TOK_FLOAT  */
  YYSYMBOL_TOK_FLOAT_VECTOR = 28,          /* TOK_FLOAT_VECTOR  */
  YYSYMBOL_TOK_FROM = 29,                  /* TOK_FROM  */
  YYSYMBOL_TOK_FUNCTION = 30,              /* TOK_FUNCTION  */
  YYSYMBOL_TOK_HASH = 31,                  /* TOK_HASH  */
  YYSYMBOL_TOK_HNSW_EF_CONSTRUCTION = 32,  /* TOK_HNSW_EF_CONSTRUCTION  */
  YYSYMBOL_TOK_HNSW_M = 33,                /* TOK_HNSW_M  */
  YYSYMBOL_TOK_HNSW_SIMILARITY = 34,       /* TOK_HNSW_SIMILARITY  */
  YYSYMBOL_TOK_IF = 35,                    /* TOK_IF  */
  YYSYMBOL_TOK_IMPORT = 36,                /* TOK_IMPORT  */
  YYSYMBOL_TOK_INDEXED = 37,               /* TOK_INDEXED  */
  YYSYMBOL_TOK_INT = 38,                   /* TOK_INT  */
  YYSYMBOL_TOK_INTEGER = 39,               /* TOK_INTEGER  */
  YYSYMBOL_TOK_JOIN = 40,                  /* TOK_JOIN  */
  YYSYMBOL_TOK_JSON = 41,                  /* TOK_JSON  */
  YYSYMBOL_TOK_KILLLIST_TARGET = 42,       /* TOK_KILLLIST_TARGET  */
  YYSYMBOL_TOK_KNN = 43,                   /* TOK_KNN  */
  YYSYMBOL_TOK_KNN_DIMS = 44,              /* TOK_KNN_DIMS  */
  YYSYMBOL_TOK_KNN_TYPE = 45,              /* TOK_KNN_TYPE  */
  YYSYMBOL_TOK_LIKE = 46,                  /* TOK_LIKE  */
  YYSYMBOL_TOK_MODEL_NAME = 47,            /* TOK_MODEL_NAME  */
  YYSYMBOL_TOK_MODIFY = 48,                /* TOK_MODIFY  */
  YYSYMBOL_TOK_MODIFY_COLUMN = 49,         /* TOK_MODIFY_COLUMN  */
  YYSYMBOL_TOK_MULTI = 50,                 /* TOK_MULTI  */
  YYSYMBOL_TOK_MULTI64 = 51,               /* TOK_MULTI64  */
  YYSYMBOL_TOK_MVA = 52,                   /* "mva"  */
  YYSYMBOL_TOK_MVA64 = 53,                 /* "mva64"  */
  YYSYMBOL_TOK_NOT = 54,                   /* TOK_NOT  */
  YYSYMBOL_TOK_OPTION = 55,                /* TOK_OPTION  */
  YYSYMBOL_TOK_PLUGIN = 56,                /* TOK_PLUGIN  */
  YYSYMBOL_TOK_QUANTIZATION = 57,          /* TOK_QUANTIZATION  */
  YYSYMBOL_TOK_REBUILD = 58,               /* TOK_REBUILD  */
  YYSYMBOL_TOK_RECONFIGURE = 59,           /* TOK_RECONFIGURE  */
  YYSYMBOL_TOK_RETURNS = 60,               /* TOK_RETURNS  */
  YYSYMBOL_TOK_RTINDEX = 61,               /* TOK_RTINDEX  */
  YYSYMBOL_TOK_SECONDARY = 62,             /* TOK_SECONDARY  */
  YYSYMBOL_TOK_SECONDARY_INDEX = 63,       /* TOK_SECONDARY_INDEX  */
  YYSYMBOL_TOK_SONAME = 64,                /* TOK_SONAME  */
  YYSYMBOL_TOK_STORED = 65,                /* TOK_STORED  */
  YYSYMBOL_TOK_STRING = 66,                /* TOK_STRING  */
  YYSYMBOL_TOK_TABLE = 67,                 /* TOK_TABLE  */
  YYSYMBOL_TOK_TEXT = 68,                  /* TOK_TEXT  */
  YYSYMBOL_TOK_TIMESTAMP = 69,             /* TOK_TIMESTAMP  */
  YYSYMBOL_TOK_TYPE = 70,                  /* TOK_TYPE  */
  YYSYMBOL_TOK_UINT = 71,                  /* TOK_UINT  */
  YYSYMBOL_TOK_UPDATE = 72,                /* TOK_UPDATE  */
  YYSYMBOL_TOK_USE_GPU = 73,               /* TOK_USE_GPU  */
  YYSYMBOL_74_ = 74,                       /* '.'  */
  YYSYMBOL_75_ = 75,                       /* ','  */
  YYSYMBOL_76_ = 76,                       /* '='  */
  YYSYMBOL_77_ = 77,                       /* '('  */
  YYSYMBOL_78_ = 78,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 79,                  /* $accept  */
  YYSYMBOL_request = 80,                   /* request  */
  YYSYMBOL_statement = 81,                 /* statement  */
  YYSYMBOL_tableident = 82,                /* tableident  */
  YYSYMBOL_ident = 83,                     /* ident  */
  YYSYMBOL_text_or_string = 84,            /* text_or_string  */
  YYSYMBOL_attribute_type = 85,            /* attribute_type  */
  YYSYMBOL_tablename = 86,                 /* tablename  */
  YYSYMBOL_table_or_tables = 87,           /* table_or_tables  */
  YYSYMBOL_alter_col_type = 88,            /* alter_col_type  */
  YYSYMBOL_alter_table_name = 89,          /* alter_table_name  */
  YYSYMBOL_alter_cluster_ident = 90,       /* alter_cluster_ident  */
  YYSYMBOL_alter = 91,                     /* alter  */
  YYSYMBOL_field_flag = 92,                /* field_flag  */
  YYSYMBOL_field_flag_list = 93,           /* field_flag_list  */
  YYSYMBOL_item_option = 94,               /* item_option  */
  YYSYMBOL_item_option_list = 95,          /* item_option_list  */
  YYSYMBOL_create_table_item = 96,         /* create_table_item  */
  YYSYMBOL_create_table_item_list = 97,    /* create_table_item_list  */
  YYSYMBOL_create_table_items = 98,        /* create_table_items  */
  YYSYMBOL_create_table_option = 99,       /* create_table_option  */
  YYSYMBOL_create_table_option_list = 100, /* create_table_option_list  */
  YYSYMBOL__if_not_exists = 101,           /* _if_not_exists  */
  YYSYMBOL__if_exists = 102,               /* _if_exists  */
  YYSYMBOL_create_table = 103,             /* create_table  */
  YYSYMBOL_create_table_like = 104,        /* create_table_like  */
  YYSYMBOL_drop_table = 105,               /* drop_table  */
  YYSYMBOL_drop_table_with_opt = 106,      /* drop_table_with_opt  */
  YYSYMBOL_create_function = 107,          /* create_function  */
  YYSYMBOL_udf_type = 108,                 /* udf_type  */
  YYSYMBOL_drop_function = 109,            /* drop_function  */
  YYSYMBOL_create_plugin = 110,            /* create_plugin  */
  YYSYMBOL_drop_plugin = 111,              /* drop_plugin  */
  YYSYMBOL_call_opts_list = 112,           /* call_opts_list  */
  YYSYMBOL_cluster_opts_list = 113,        /* cluster_opts_list  */
  YYSYMBOL_call_opt = 114,                 /* call_opt  */
  YYSYMBOL_opt_as = 115,                   /* opt_as  */
  YYSYMBOL_insert_val = 116,               /* insert_val  */
  YYSYMBOL_create_cluster = 117,           /* create_cluster  */
  YYSYMBOL_join_cluster = 118,             /* join_cluster  */
  YYSYMBOL_import_table = 119,             /* import_table  */
  YYSYMBOL_opt_option_clause = 120,        /* opt_option_clause  */
  YYSYMBOL_option_list = 121,              /* option_list  */
  YYSYMBOL_option_item = 122               /* option_item  */
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
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   255

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  238

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   328


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
      77,    78,     2,     2,    75,     2,    74,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    95,    95,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   113,   114,   115,   116,   117,   118,
     122,   123,   127,   128,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   149,   153,   166,
     167,   173,   174,   175,   179,   183,   187,   195,   203,   210,
     218,   224,   230,   235,   241,   246,   251,   256,   261,   267,
     277,   278,   279,   283,   284,   288,   296,   304,   312,   320,
     328,   336,   344,   352,   360,   368,   376,   384,   392,   400,
     410,   412,   416,   424,   432,   436,   437,   440,   442,   446,
     449,   451,   454,   456,   459,   461,   465,   474,   484,   493,
     499,   510,   511,   512,   513,   514,   518,   529,   540,   552,
     557,   560,   562,   566,   573,   575,   579,   580,   581,   585,
     594,   600,   610,   622,   624,   628,   629,   633,   638
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
  "\"tablename\"", "\"float\"", "\"integer\"", "\"string\"", "TOK_ADD",
  "TOK_ALTER", "TOK_API_KEY", "TOK_AS", "TOK_AT", "TOK_ATTRIBUTE",
  "TOK_BIGINT", "TOK_BIT", "TOK_BOOL", "TOK_CACHE_PATH", "TOK_CLUSTER",
  "TOK_COLUMN", "TOK_COLUMNAR", "TOK_CREATE", "TOK_DOUBLE", "TOK_DROP",
  "TOK_ENGINE", "TOK_EXISTS", "TOK_FAST_FETCH", "TOK_FLOAT",
  "TOK_FLOAT_VECTOR", "TOK_FROM", "TOK_FUNCTION", "TOK_HASH",
  "TOK_HNSW_EF_CONSTRUCTION", "TOK_HNSW_M", "TOK_HNSW_SIMILARITY",
  "TOK_IF", "TOK_IMPORT", "TOK_INDEXED", "TOK_INT", "TOK_INTEGER",
  "TOK_JOIN", "TOK_JSON", "TOK_KILLLIST_TARGET", "TOK_KNN", "TOK_KNN_DIMS",
  "TOK_KNN_TYPE", "TOK_LIKE", "TOK_MODEL_NAME", "TOK_MODIFY",
  "TOK_MODIFY_COLUMN", "TOK_MULTI", "TOK_MULTI64", "\"mva\"", "\"mva64\"",
  "TOK_NOT", "TOK_OPTION", "TOK_PLUGIN", "TOK_QUANTIZATION", "TOK_REBUILD",
  "TOK_RECONFIGURE", "TOK_RETURNS", "TOK_RTINDEX", "TOK_SECONDARY",
  "TOK_SECONDARY_INDEX", "TOK_SONAME", "TOK_STORED", "TOK_STRING",
  "TOK_TABLE", "TOK_TEXT", "TOK_TIMESTAMP", "TOK_TYPE", "TOK_UINT",
  "TOK_UPDATE", "TOK_USE_GPU", "'.'", "','", "'='", "'('", "')'",
  "$accept", "request", "statement", "tableident", "ident",
  "text_or_string", "attribute_type", "tablename", "table_or_tables",
  "alter_col_type", "alter_table_name", "alter_cluster_ident", "alter",
  "field_flag", "field_flag_list", "item_option", "item_option_list",
  "create_table_item", "create_table_item_list", "create_table_items",
  "create_table_option", "create_table_option_list", "_if_not_exists",
  "_if_exists", "create_table", "create_table_like", "drop_table",
  "drop_table_with_opt", "create_function", "udf_type", "drop_function",
  "create_plugin", "drop_plugin", "call_opts_list", "cluster_opts_list",
  "call_opt", "opt_as", "insert_val", "create_cluster", "join_cluster",
  "import_table", "opt_option_clause", "option_list", "option_item", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-133)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      61,    10,    27,   -20,   -47,    12,    26,  -133,    17,     1,
    -133,  -133,  -133,     0,  -133,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,    40,    -2,    -2,    40,    40,    40,    25,    40,
      40,    32,    -2,    40,  -133,    59,    66,     4,    40,    29,
    -133,    40,    -2,    -2,    -2,    40,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,  -133,  -133,    13,    31,  -133,   107,
      35,    33,    42,    -2,  -133,    36,    77,    -2,    79,    93,
      40,    40,   102,   135,  -133,  -133,    39,  -133,  -133,    43,
      43,  -133,    41,    45,  -133,    -2,  -133,  -133,  -133,  -133,
      48,  -133,  -133,   113,    15,   118,   103,   -12,   120,  -133,
    -133,   122,   123,  -133,   180,  -133,  -133,    56,  -133,  -133,
    -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,    24,  -133,  -133,   127,    -2,     8,    40,
    -133,   107,  -133,    40,  -133,  -133,  -133,  -133,  -133,    72,
      75,  -133,    -2,    40,  -133,  -133,  -133,   107,    67,  -133,
     139,  -133,  -133,  -133,  -133,    24,   109,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,   140,   141,  -133,   184,  -133,   -37,
      40,  -133,   144,   109,  -133,  -133,    76,    81,    82,    83,
      84,    85,    88,    89,    91,    92,    94,    95,   101,   104,
     105,  -133,  -133,  -133,    78,  -133,   109,    40,  -133,   100,
     162,   172,   176,   177,   182,   183,   185,   186,   190,   195,
     198,   202,   203,   206,   207,   209,   109,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,   138,   109,  -133,   109
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     2,    90,     0,
       3,     4,     5,   123,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,     0,     0,    92,     0,
       0,    94,     0,     0,     1,     0,     0,     0,     0,     0,
      52,    54,     0,     0,     0,     0,    99,    21,    14,    17,
      15,    18,    19,    16,    20,    45,    37,     0,    44,   111,
       0,     0,     0,     0,   106,     0,     0,     0,     0,   111,
       0,     0,     0,     0,    59,    55,     0,    91,    39,    56,
      57,    58,     0,   124,   125,     0,    51,   117,   116,   118,
     112,   119,   109,   114,     0,     0,     0,    87,     0,    95,
      98,     0,     0,   120,     0,    50,    53,     0,    25,    27,
      26,    36,    33,    24,    32,    28,    29,    30,    31,    23,
      22,    35,    34,    42,    41,    80,     0,     0,     0,     0,
      38,     0,   115,     0,   102,   103,   101,   105,   104,     0,
       0,    93,     0,     0,    90,   108,   122,   111,     0,    80,
       0,    62,    60,    61,    63,    43,    47,    89,    40,   127,
     128,   126,   110,   113,     0,     0,    97,    80,    85,     0,
      96,   121,     0,    46,    48,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,   100,   107,     0,    80,    83,     0,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,    86,    80,    75,
      76,    65,    67,    74,    66,    72,    71,    70,    69,    68,
      73,    78,    79,    77,     0,    49,    80,    84
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,  -133,   -11,   -22,  -133,  -133,    -5,   148,   -98,
    -133,  -133,  -133,    62,  -133,  -133,  -132,    23,  -133,  -133,
    -133,    80,  -133,  -133,  -133,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,   -68,    96,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,    97
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,    54,    76,   123,   124,    78,    79,   125,
       8,     9,    10,   154,   155,   191,   156,   168,   169,   144,
      77,    41,    63,    67,    11,    12,    13,    14,    15,   139,
      16,    17,    18,    90,    91,    92,   133,    93,    19,    20,
      21,    46,    83,    84
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      55,   103,    48,    59,    60,    61,   149,    64,    65,    42,
      29,    69,    56,    56,   159,   160,    73,   173,    57,    58,
      32,    56,    49,    82,    43,    35,    34,    68,    22,   134,
      33,    56,    56,    56,   142,   196,    30,   151,   197,    81,
      36,   198,   135,    47,    48,    25,    50,    31,   104,   105,
      51,    52,    56,   136,   137,    45,    56,    26,    97,    37,
      62,   152,   100,   216,    49,   143,    38,    66,    53,   195,
       1,    23,    74,    44,   130,    39,    40,    24,    70,   171,
      72,   138,     2,    27,     3,    71,   235,    85,    50,   153,
      86,    75,    51,    52,    28,    94,    96,     4,    87,    88,
      89,     5,    99,    95,   237,   102,    98,    82,   101,   106,
      53,   163,    87,    88,    89,   126,    56,   128,   127,   176,
     129,   167,   158,   131,   132,   140,   177,   145,   141,   146,
     147,    56,   150,   178,   157,   179,   164,   166,   180,   165,
     181,   182,   183,   184,   172,   107,   174,   192,   193,   108,
     199,   109,   200,   185,   186,   215,   187,   201,   202,   203,
     204,   205,   110,   111,   206,   207,   188,   208,   209,   219,
     210,   211,   189,   112,   113,   167,   114,   212,   218,   220,
     213,   214,   190,   221,   222,   115,   116,   117,   118,   223,
     224,    80,   225,   226,   108,   148,   109,   227,   108,   194,
     109,   119,   228,   120,   121,   229,   122,   110,   111,   230,
     231,   110,   111,   232,   233,   234,   236,   175,   112,   113,
     217,   114,   112,   113,   170,   114,   161,   162,     0,     0,
     115,   116,   117,   118,   115,   116,   117,   118,     0,     0,
       0,     0,     0,     0,     0,     0,   119,     0,   120,   121,
     119,   122,   120,   121,     0,   122
};

static const yytype_int16 yycheck[] =
{
      22,    69,     4,    25,    26,    27,   104,    29,    30,     8,
      30,    33,    23,    24,     6,     7,    38,   149,    23,    24,
      67,    32,    24,    45,    23,     8,     0,    32,    18,    14,
      18,    42,    43,    44,    46,   167,    56,    13,    75,    44,
      23,    78,    27,     3,     4,    18,    48,    67,    70,    71,
      52,    53,    63,    38,    39,    55,    67,    30,    63,    42,
      35,    37,    67,   195,    24,    77,    49,    35,    70,   167,
       9,    61,    43,    72,    85,    58,    59,    67,    19,   147,
      76,    66,    21,    56,    23,    19,   218,    74,    48,    65,
      59,    62,    52,    53,    67,    60,    54,    36,     5,     6,
       7,    40,    25,    70,   236,    12,    70,   129,    29,     7,
      70,   133,     5,     6,     7,    76,   127,    76,    75,    10,
      75,   143,   127,    75,    11,     7,    17,     7,    25,     7,
       7,   142,    76,    24,     7,    26,    64,   142,    29,    64,
      31,    32,    33,    34,    77,    10,     7,     7,     7,    14,
       6,    16,    76,    44,    45,    77,    47,    76,    76,    76,
      76,    76,    27,    28,    76,    76,    57,    76,    76,     7,
      76,    76,    63,    38,    39,   197,    41,    76,    78,     7,
      76,    76,    73,     7,     7,    50,    51,    52,    53,     7,
       7,    43,     7,     7,    14,    15,    16,     7,    14,    15,
      16,    66,     7,    68,    69,     7,    71,    27,    28,     7,
       7,    27,    28,     7,     7,     6,    78,   155,    38,    39,
     197,    41,    38,    39,   144,    41,   129,   131,    -1,    -1,
      50,    51,    52,    53,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      66,    71,    68,    69,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    21,    23,    36,    40,    80,    81,    89,    90,
      91,   103,   104,   105,   106,   107,   109,   110,   111,   117,
     118,   119,    18,    61,    67,    18,    30,    56,    67,    30,
      56,    67,    67,    18,     0,     8,    23,    42,    49,    58,
      59,   100,     8,    23,    72,    55,   120,     3,     4,    24,
      48,    52,    53,    70,    82,    83,    82,    86,    86,    83,
      83,    83,    35,   101,    83,    83,    35,   102,    86,    83,
      19,    19,    76,    83,    43,    62,    83,    99,    86,    87,
      87,    86,    83,   121,   122,    74,    59,     5,     6,     7,
     112,   113,   114,   116,    60,    70,    54,    86,    70,    25,
      86,    29,    12,   113,    83,    83,     7,    10,    14,    16,
      27,    28,    38,    39,    41,    50,    51,    52,    53,    66,
      68,    69,    71,    84,    85,    88,    76,    75,    76,    75,
      82,    75,    11,   115,    14,    27,    38,    39,    66,   108,
       7,    25,    46,    77,    98,     7,     7,     7,    15,    88,
      76,    13,    37,    65,    92,    93,    95,     7,    86,     6,
       7,   122,   114,    83,    64,    64,    86,    83,    96,    97,
     100,   113,    77,    95,     7,    92,    10,    17,    24,    26,
      29,    31,    32,    33,    34,    44,    45,    47,    57,    63,
      73,    94,     7,     7,    15,    88,    95,    75,    78,     6,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    77,    95,    96,    78,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     6,    95,    78,    95
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    79,    80,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    82,    82,    82,    82,    82,
      83,    83,    84,    84,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    86,    86,    87,
      87,    88,    88,    88,    89,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      92,    92,    92,    93,    93,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      95,    95,    96,    96,    96,    97,    97,    98,    98,    99,
     100,   100,   101,   101,   102,   102,   103,   104,   105,   106,
     107,   108,   108,   108,   108,   108,   109,   110,   111,   112,
     112,   113,   113,   114,   115,   115,   116,   116,   116,   117,
     118,   118,   119,   120,   120,   121,   121,   122,   122
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     1,     2,     3,     3,     6,     5,     6,     9,
       4,     4,     2,     4,     2,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       0,     2,     3,     2,     6,     1,     3,     0,     3,     3,
       0,     2,     0,     3,     0,     2,     6,     6,     4,     2,
       7,     1,     1,     1,     1,     1,     3,     7,     5,     1,
       3,     0,     1,     3,     0,     1,     1,     1,     1,     4,
       4,     6,     5,     0,     2,     1,     3,     3,     3
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
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, DdlParser_c * pParser)
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, DdlParser_c * pParser)
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
                 int yyrule, DdlParser_c * pParser)
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, DdlParser_c * pParser)
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
yyparse (DdlParser_c * pParser)
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
#line 95 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                                                        { pParser->PushQuery(); }
#line 1652 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 22: /* text_or_string: TOK_TEXT  */
#line 127 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                { yyval.m_iType = ( DdlParser_c::FLAG_INDEXED | DdlParser_c::FLAG_STORED ); }
#line 1658 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 23: /* text_or_string: TOK_STRING  */
#line 128 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                        { yyval.m_iType = DdlParser_c::FLAG_ATTRIBUTE; }
#line 1664 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 24: /* attribute_type: TOK_INTEGER  */
#line 132 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                        { yyval.SetValueInt ( SPH_ATTR_INTEGER ); }
#line 1670 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 25: /* attribute_type: TOK_BIGINT  */
#line 133 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                        { yyval.SetValueInt ( SPH_ATTR_BIGINT ); }
#line 1676 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 26: /* attribute_type: TOK_FLOAT  */
#line 134 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                { yyval.SetValueInt ( SPH_ATTR_FLOAT ); }
#line 1682 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 27: /* attribute_type: TOK_BOOL  */
#line 135 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                { yyval.SetValueInt ( SPH_ATTR_BOOL ); }
#line 1688 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 28: /* attribute_type: TOK_MULTI  */
#line 136 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                { yyval.SetValueInt ( SPH_ATTR_UINT32SET ); }
#line 1694 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 29: /* attribute_type: TOK_MULTI64  */
#line 137 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                        { yyval.SetValueInt ( SPH_ATTR_INT64SET ); }
#line 1700 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 30: /* attribute_type: "mva"  */
#line 138 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                { yyval.SetValueInt ( SPH_ATTR_UINT32SET ); }
#line 1706 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 31: /* attribute_type: "mva64"  */
#line 139 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                        { yyval.SetValueInt ( SPH_ATTR_INT64SET ); }
#line 1712 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 32: /* attribute_type: TOK_JSON  */
#line 140 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                { yyval.SetValueInt ( SPH_ATTR_JSON ); }
#line 1718 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 33: /* attribute_type: TOK_INT  */
#line 141 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                { yyval.SetValueInt ( SPH_ATTR_INTEGER ); }
#line 1724 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 34: /* attribute_type: TOK_UINT  */
#line 142 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                { yyval.SetValueInt ( SPH_ATTR_INTEGER ); }
#line 1730 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 35: /* attribute_type: TOK_TIMESTAMP  */
#line 143 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                        { yyval.SetValueInt ( SPH_ATTR_TIMESTAMP ); }
#line 1736 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 36: /* attribute_type: TOK_FLOAT_VECTOR  */
#line 144 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                           { yyval.SetValueInt ( SPH_ATTR_FLOAT_VECTOR ); }
#line 1742 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 37: /* tablename: tableident  */
#line 150 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			pParser->m_pStmt->m_dStringSubkeys.Add( pParser->GetTableName ( yyvsp[0] ));
		}
#line 1750 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 38: /* tablename: tableident '.' tableident  */
#line 154 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			auto sDbName = pParser->GetTableName ( yyvsp[-2] );
			if ( sDbName!="system" )
			{
				yyerror ( pParser, SphSprintf ( "unexpected db '%s', only 'system' allowed", sDbName.cstr() ).cstr() );
				YYERROR;
			}
			pParser->m_pStmt->m_dStringSubkeys.Add( pParser->GetTableName ( yyvsp[-2], yyvsp[0] ));
		}
#line 1764 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 42: /* alter_col_type: text_or_string  */
#line 174 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                                                { yyval.SetValueInt ( SPH_ATTR_STRING ); }
#line 1770 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 43: /* alter_col_type: text_or_string field_flag_list  */
#line 175 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                                { yyval.SetValueInt ( SPH_ATTR_STRING ); yyval.m_iType = yyvsp[0].m_iType; }
#line 1776 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 44: /* alter_table_name: TOK_ALTER TOK_TABLE tablename  */
#line 179 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                                { pParser->m_pStmt->m_sIndex = pParser->m_pStmt->m_dStringSubkeys.Last(); }
#line 1782 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 45: /* alter_cluster_ident: TOK_ALTER TOK_CLUSTER ident  */
#line 183 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                                        { pParser->ToString ( pParser->m_pStmt->m_sCluster, yyvsp[0] );	}
#line 1788 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 46: /* alter: alter_table_name TOK_ADD TOK_COLUMN ident alter_col_type item_option_list  */
#line 188 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->SetupAlterTable ( yyvsp[-2], yyvsp[-1] ) )
			{
			 	yyerror ( pParser, pParser->GetLastError() );
	            YYERROR;
			}
		}
#line 1800 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 47: /* alter: alter_table_name TOK_MODIFY_COLUMN ident alter_col_type item_option_list  */
#line 196 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->SetupAlterTable ( yyvsp[-2], yyvsp[-1], true ) )
			{
				yyerror ( pParser, pParser->GetLastError() );
				YYERROR;
			}
		}
#line 1812 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 48: /* alter: alter_table_name TOK_MODIFY_COLUMN ident TOK_API_KEY '=' "string"  */
#line 204 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
   			SqlStmt_t & tStmt = *pParser->m_pStmt;
   			tStmt.m_eStmt = STMT_ALTER_EMBEDDINGS_API_KEY;
			pParser->ToString ( tStmt.m_sAlterAttr, yyvsp[-3] );
			pParser->ToString ( tStmt.m_sAlterOption, yyvsp[0] ).Unquote();
   		}
#line 1823 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 49: /* alter: alter_table_name TOK_ADD TOK_COLUMN ident TOK_BIT '(' "integer" ')' item_option_list  */
#line 211 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->SetupAlterTable ( yyvsp[-5], SPH_ATTR_INTEGER, 0, yyvsp[-2].GetValueInt() ) )
			{
			 	yyerror ( pParser, pParser->GetLastError() );
	            YYERROR;
			}
		}
#line 1835 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 50: /* alter: alter_table_name TOK_DROP TOK_COLUMN ident  */
#line 219 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ALTER_DROP;
			pParser->ToString ( tStmt.m_sAlterAttr, yyvsp[0] );
		}
#line 1845 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 51: /* alter: TOK_ALTER TOK_RTINDEX tablename TOK_RECONFIGURE  */
#line 225 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ALTER_RECONFIGURE;
			pParser->m_pStmt->m_sIndex = pParser->m_pStmt->m_dStringSubkeys.Last();
		}
#line 1855 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 52: /* alter: alter_table_name TOK_RECONFIGURE  */
#line 231 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ALTER_RECONFIGURE;
		}
#line 1864 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 53: /* alter: alter_table_name TOK_KILLLIST_TARGET '=' "string"  */
#line 236 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ALTER_KLIST_TARGET;
			pParser->ToString ( tStmt.m_sAlterOption, yyvsp[0] ).Unquote();
		}
#line 1874 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 54: /* alter: alter_table_name create_table_option_list  */
#line 242 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ALTER_INDEX_SETTINGS;
		}
#line 1883 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 55: /* alter: alter_table_name TOK_REBUILD TOK_SECONDARY  */
#line 247 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
   			SqlStmt_t & tStmt = *pParser->m_pStmt;
   			tStmt.m_eStmt = STMT_ALTER_REBUILD_SI;
   		}
#line 1892 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 56: /* alter: alter_cluster_ident TOK_ADD table_or_tables  */
#line 252 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CLUSTER_ALTER_ADD;
		}
#line 1901 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 57: /* alter: alter_cluster_ident TOK_DROP table_or_tables  */
#line 257 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CLUSTER_ALTER_DROP;
		}
#line 1910 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 58: /* alter: alter_cluster_ident TOK_UPDATE tablename  */
#line 262 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CLUSTER_ALTER_UPDATE;
			pParser->ToString ( tStmt.m_sSetName, yyvsp[0] );
		}
#line 1920 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 59: /* alter: alter_table_name TOK_REBUILD TOK_KNN  */
#line 268 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
   			SqlStmt_t & tStmt = *pParser->m_pStmt;
   			tStmt.m_eStmt = STMT_ALTER_REBUILD_KNN;
   		}
#line 1929 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 60: /* field_flag: TOK_INDEXED  */
#line 277 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                        { yyval.m_iType = DdlParser_c::FLAG_INDEXED; }
#line 1935 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 61: /* field_flag: TOK_STORED  */
#line 278 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                { yyval.m_iType = DdlParser_c::FLAG_STORED; }
#line 1941 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 62: /* field_flag: TOK_ATTRIBUTE  */
#line 279 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                { yyval.m_iType = DdlParser_c::FLAG_ATTRIBUTE; }
#line 1947 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 64: /* field_flag_list: field_flag_list field_flag  */
#line 284 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                     { yyval.m_iType |= yyvsp[0].m_iType; }
#line 1953 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 65: /* item_option: TOK_ENGINE '=' "string"  */
#line 289 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddItemOptionEngine ( yyvsp[0] ) )
			{
				yyerror ( pParser, pParser->GetLastError() );
	        	YYERROR;
			}
		}
#line 1965 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 66: /* item_option: TOK_HASH '=' "string"  */
#line 297 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddItemOptionHash ( yyvsp[0] ) )
			{
				yyerror ( pParser, pParser->GetLastError() );
	        	YYERROR;
			}
		}
#line 1977 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 67: /* item_option: TOK_FAST_FETCH '=' "string"  */
#line 305 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddItemOptionFastFetch ( yyvsp[0] ) )
			{
				yyerror ( pParser, pParser->GetLastError() );
    	    	YYERROR;
			}
		}
#line 1989 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 68: /* item_option: TOK_KNN_TYPE '=' "string"  */
#line 313 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddItemOptionKNNType ( yyvsp[0] ) )
			{
				yyerror ( pParser, pParser->GetLastError() );
    	    	YYERROR;
			}
		}
#line 2001 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 69: /* item_option: TOK_KNN_DIMS '=' "string"  */
#line 321 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddItemOptionKNNDims ( yyvsp[0] ) )
			{
				yyerror ( pParser, pParser->GetLastError() );
    	    	YYERROR;
			}
		}
#line 2013 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 70: /* item_option: TOK_HNSW_SIMILARITY '=' "string"  */
#line 329 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddItemOptionHNSWSimilarity ( yyvsp[0] ) )
			{
				yyerror ( pParser, pParser->GetLastError() );
    	    	YYERROR;
			}
		}
#line 2025 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 71: /* item_option: TOK_HNSW_M '=' "string"  */
#line 337 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddItemOptionHNSWM ( yyvsp[0] ) )
			{
				yyerror ( pParser, pParser->GetLastError() );
    	    	YYERROR;
			}
		}
#line 2037 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 72: /* item_option: TOK_HNSW_EF_CONSTRUCTION '=' "string"  */
#line 345 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddItemOptionHNSWEfConstruction ( yyvsp[0] ) )
			{
				yyerror ( pParser, pParser->GetLastError() );
    	    	YYERROR;
			}
		}
#line 2049 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 73: /* item_option: TOK_MODEL_NAME '=' "string"  */
#line 353 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddItemOptionModelName ( yyvsp[0] ) )
			{
				yyerror ( pParser, pParser->GetLastError() );
    	    	YYERROR;
			}
		}
#line 2061 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 74: /* item_option: TOK_FROM '=' "string"  */
#line 361 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddItemOptionFrom ( yyvsp[0] ) )
			{
				yyerror ( pParser, pParser->GetLastError() );
    	    	YYERROR;
			}
		}
#line 2073 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 75: /* item_option: TOK_API_KEY '=' "string"  */
#line 369 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddItemOptionAPIKey ( yyvsp[0] ) )
			{
				yyerror ( pParser, pParser->GetLastError() );
    	    	YYERROR;
			}
		}
#line 2085 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 76: /* item_option: TOK_CACHE_PATH '=' "string"  */
#line 377 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddItemOptionCachePath ( yyvsp[0] ) )
			{
				yyerror ( pParser, pParser->GetLastError() );
    	    	YYERROR;
			}
		}
#line 2097 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 77: /* item_option: TOK_USE_GPU '=' "string"  */
#line 385 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddItemOptionUseGPU ( yyvsp[0] ) )
			{
				yyerror ( pParser, pParser->GetLastError() );
    	    	YYERROR;
			}
		}
#line 2109 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 78: /* item_option: TOK_QUANTIZATION '=' "string"  */
#line 393 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddItemOptionQuantization ( yyvsp[0] ) )
			{
				yyerror ( pParser, pParser->GetLastError() );
    	    	YYERROR;
			}
		}
#line 2121 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 79: /* item_option: TOK_SECONDARY_INDEX '=' "string"  */
#line 401 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddItemOptionIndexed ( yyvsp[0] ) )
			{
				yyerror ( pParser, pParser->GetLastError() );
    	    	YYERROR;
			}
		}
#line 2133 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 82: /* create_table_item: ident alter_col_type item_option_list  */
#line 417 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
        {
		if ( !pParser->AddCreateTableCol ( yyvsp[-2], yyvsp[-1] ) )
		 {
		 	yyerror ( pParser, pParser->GetLastError() );
            YYERROR;
		 }
	}
#line 2145 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 83: /* create_table_item: ident item_option_list  */
#line 425 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
        {
		if ( !pParser->AddCreateTableId ( yyvsp[-1] ) )
		{
			yyerror ( pParser, pParser->GetLastError() );
			YYERROR;
		}
	}
#line 2157 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 84: /* create_table_item: ident TOK_BIT '(' "integer" ')' item_option_list  */
#line 432 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                                                { pParser->AddCreateTableBitCol ( yyvsp[-5], yyvsp[-2].GetValueInt() ); }
#line 2163 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 89: /* create_table_option: ident '=' "string"  */
#line 446 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                        { pParser->AddCreateTableOption ( yyvsp[-2], yyvsp[0] ); }
#line 2169 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 93: /* _if_not_exists: TOK_IF TOK_NOT TOK_EXISTS  */
#line 456 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                                        { pParser->m_pStmt->m_tCreateTable.m_bIfNotExists = true; }
#line 2175 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 95: /* _if_exists: TOK_IF TOK_EXISTS  */
#line 461 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                                { pParser->m_pStmt->m_bIfExists = true; }
#line 2181 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 96: /* create_table: TOK_CREATE TOK_TABLE _if_not_exists tablename create_table_items create_table_option_list  */
#line 466 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_TABLE;
			tStmt.m_sIndex = tStmt.m_dStringSubkeys.Last();
		}
#line 2191 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 97: /* create_table_like: TOK_CREATE TOK_TABLE _if_not_exists tablename TOK_LIKE tablename  */
#line 475 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_TABLE_LIKE;
			tStmt.m_sIndex = tStmt.m_dStringSubkeys.First();
			tStmt.m_tCreateTable.m_sLike = tStmt.m_dStringSubkeys.Last();
		}
#line 2202 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 98: /* drop_table: TOK_DROP TOK_TABLE _if_exists tablename  */
#line 485 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_TABLE;
			tStmt.m_sIndex = tStmt.m_dStringSubkeys.Last();
		}
#line 2212 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 100: /* create_function: TOK_CREATE TOK_FUNCTION ident TOK_RETURNS udf_type TOK_SONAME "string"  */
#line 500 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNCTION;
			pParser->ToString ( tStmt.m_sUdfName, yyvsp[-4] );
			tStmt.m_sUdfLib = pParser->ToStringUnescape ( yyvsp[0] );
			tStmt.m_eUdfType = (ESphAttr) yyvsp[-2].GetValueInt();
		}
#line 2224 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 101: /* udf_type: TOK_INT  */
#line 510 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                { yyval.SetValueInt ( SPH_ATTR_INTEGER ); }
#line 2230 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 102: /* udf_type: TOK_BIGINT  */
#line 511 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                        { yyval.SetValueInt ( SPH_ATTR_BIGINT ); }
#line 2236 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 103: /* udf_type: TOK_FLOAT  */
#line 512 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                { yyval.SetValueInt ( SPH_ATTR_FLOAT ); }
#line 2242 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 104: /* udf_type: TOK_STRING  */
#line 513 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                        { yyval.SetValueInt ( SPH_ATTR_STRINGPTR ); }
#line 2248 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 105: /* udf_type: TOK_INTEGER  */
#line 514 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                        { yyval.SetValueInt ( SPH_ATTR_INTEGER ); }
#line 2254 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 106: /* drop_function: TOK_DROP TOK_FUNCTION ident  */
#line 519 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNCTION;
			pParser->ToString ( tStmt.m_sUdfName, yyvsp[0] );
		}
#line 2264 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 107: /* create_plugin: TOK_CREATE TOK_PLUGIN ident TOK_TYPE "string" TOK_SONAME "string"  */
#line 530 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & s = *pParser->m_pStmt;
			s.m_eStmt = STMT_CREATE_PLUGIN;
			pParser->ToString ( s.m_sUdfName, yyvsp[-4] );
			s.m_sStringParam = pParser->ToStringUnescape ( yyvsp[-2] );
			s.m_sUdfLib = pParser->ToStringUnescape ( yyvsp[0] );
		}
#line 2276 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 108: /* drop_plugin: TOK_DROP TOK_PLUGIN ident TOK_TYPE "string"  */
#line 541 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & s = *pParser->m_pStmt;
			s.m_eStmt = STMT_DROP_PLUGIN;
			pParser->ToString ( s.m_sUdfName, yyvsp[-2] );
			s.m_sStringParam = pParser->ToStringUnescape ( yyvsp[0] );
		}
#line 2287 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 109: /* call_opts_list: call_opt  */
#line 553 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		}
#line 2296 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 113: /* call_opt: insert_val opt_as ident  */
#line 567 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			pParser->ToString ( pParser->m_pStmt->m_dCallOptNames.Add(), yyvsp[0] );
			pParser->AddInsval ( pParser->m_pStmt->m_dCallOptValues, yyvsp[-2] );
		}
#line 2305 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 116: /* insert_val: "integer"  */
#line 579 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                        { yyval=yyvsp[0]; yyval.m_iType = TOK_CONST_INT; }
#line 2311 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 117: /* insert_val: "float"  */
#line 580 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                        { yyval.m_fValue = yyvsp[0].m_fValue; yyval.m_iType = TOK_CONST_FLOAT; }
#line 2317 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 118: /* insert_val: "string"  */
#line 581 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                                        { yyval=yyvsp[0]; yyval.m_iType = TOK_QUOTED_STRING; }
#line 2323 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 119: /* create_cluster: TOK_CREATE TOK_CLUSTER ident cluster_opts_list  */
#line 586 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CLUSTER_CREATE;
			pParser->ToString ( tStmt.m_sCluster, yyvsp[-1] );
		}
#line 2333 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 120: /* join_cluster: TOK_JOIN TOK_CLUSTER ident cluster_opts_list  */
#line 595 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_JOIN_CLUSTER;
			pParser->ToString ( tStmt.m_sCluster, yyvsp[-1] );
		}
#line 2343 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 121: /* join_cluster: TOK_JOIN TOK_CLUSTER ident TOK_AT "string" cluster_opts_list  */
#line 601 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_JOIN_CLUSTER;
			pParser->ToString ( tStmt.m_sCluster, yyvsp[-3] );
			pParser->JoinClusterAt ( yyvsp[-1] );
		}
#line 2354 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 122: /* import_table: TOK_IMPORT TOK_TABLE tablename TOK_FROM "string"  */
#line 611 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_IMPORT_TABLE;
			tStmt.m_sIndex = tStmt.m_dStringSubkeys.Last();
			tStmt.m_sStringParam = pParser->ToStringUnescape ( yyvsp[0] );
		}
#line 2365 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 127: /* option_item: ident '=' "integer"  */
#line 634 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		}
#line 2374 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;

  case 128: /* option_item: ident '=' "string"  */
#line 639 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"
                {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		}
#line 2383 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"
    break;


#line 2387 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bisddl.c"

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

#line 646 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/ddl.y"


#if _WIN32
#pragma warning(pop)
#endif
