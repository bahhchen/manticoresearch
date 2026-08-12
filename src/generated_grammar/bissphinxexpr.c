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
#line 1 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"

#if _WIN32
#pragma warning(push,1)
#endif

#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wfree-nonheap-object"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif

#line 82 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"

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

#include "bissphinxexpr.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "$end"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOK_CONST_INT = 3,              /* TOK_CONST_INT  */
  YYSYMBOL_TOK_CONST_FLOAT = 4,            /* TOK_CONST_FLOAT  */
  YYSYMBOL_TOK_CONST_STRING = 5,           /* TOK_CONST_STRING  */
  YYSYMBOL_TOK_SUBKEY = 6,                 /* TOK_SUBKEY  */
  YYSYMBOL_TOK_DOT_NUMBER = 7,             /* TOK_DOT_NUMBER  */
  YYSYMBOL_TOK_ATTR_INT = 8,               /* TOK_ATTR_INT  */
  YYSYMBOL_TOK_ATTR_BITS = 9,              /* TOK_ATTR_BITS  */
  YYSYMBOL_TOK_ATTR_FLOAT = 10,            /* TOK_ATTR_FLOAT  */
  YYSYMBOL_TOK_ATTR_MVA32 = 11,            /* TOK_ATTR_MVA32  */
  YYSYMBOL_TOK_ATTR_MVA64 = 12,            /* TOK_ATTR_MVA64  */
  YYSYMBOL_TOK_ATTR_STRING = 13,           /* TOK_ATTR_STRING  */
  YYSYMBOL_TOK_ATTR_FACTORS = 14,          /* TOK_ATTR_FACTORS  */
  YYSYMBOL_TOK_IF = 15,                    /* TOK_IF  */
  YYSYMBOL_TOK_FUNC = 16,                  /* TOK_FUNC  */
  YYSYMBOL_TOK_FUNC_IN = 17,               /* TOK_FUNC_IN  */
  YYSYMBOL_TOK_FUNC_INTERVAL = 18,         /* TOK_FUNC_INTERVAL  */
  YYSYMBOL_TOK_FUNC_RAND = 19,             /* TOK_FUNC_RAND  */
  YYSYMBOL_TOK_FUNC_REMAP = 20,            /* TOK_FUNC_REMAP  */
  YYSYMBOL_TOK_FUNC_PF = 21,               /* TOK_FUNC_PF  */
  YYSYMBOL_TOK_FUNC_JA = 22,               /* TOK_FUNC_JA  */
  YYSYMBOL_TOK_FUNC_DATE = 23,             /* TOK_FUNC_DATE  */
  YYSYMBOL_TOK_FUNC_SECOND = 24,           /* TOK_FUNC_SECOND  */
  YYSYMBOL_TOK_FUNC_MINUTE = 25,           /* TOK_FUNC_MINUTE  */
  YYSYMBOL_TOK_FUNC_HOUR = 26,             /* TOK_FUNC_HOUR  */
  YYSYMBOL_TOK_FUNC_DAY = 27,              /* TOK_FUNC_DAY  */
  YYSYMBOL_TOK_FUNC_WEEK = 28,             /* TOK_FUNC_WEEK  */
  YYSYMBOL_TOK_FUNC_MONTH = 29,            /* TOK_FUNC_MONTH  */
  YYSYMBOL_TOK_FUNC_QUARTER = 30,          /* TOK_FUNC_QUARTER  */
  YYSYMBOL_TOK_FUNC_YEAR = 31,             /* TOK_FUNC_YEAR  */
  YYSYMBOL_TOK_USERVAR = 32,               /* TOK_USERVAR  */
  YYSYMBOL_TOK_UDF = 33,                   /* TOK_UDF  */
  YYSYMBOL_TOK_HOOK_IDENT = 34,            /* TOK_HOOK_IDENT  */
  YYSYMBOL_TOK_HOOK_FUNC = 35,             /* TOK_HOOK_FUNC  */
  YYSYMBOL_TOK_IDENT = 36,                 /* TOK_IDENT  */
  YYSYMBOL_TOK_TABLE_NAME = 37,            /* TOK_TABLE_NAME  */
  YYSYMBOL_TOK_ATTR_JSON = 38,             /* TOK_ATTR_JSON  */
  YYSYMBOL_TOK_FIELD = 39,                 /* TOK_FIELD  */
  YYSYMBOL_TOK_COLUMNAR_INT = 40,          /* TOK_COLUMNAR_INT  */
  YYSYMBOL_TOK_COLUMNAR_TIMESTAMP = 41,    /* TOK_COLUMNAR_TIMESTAMP  */
  YYSYMBOL_TOK_COLUMNAR_BIGINT = 42,       /* TOK_COLUMNAR_BIGINT  */
  YYSYMBOL_TOK_COLUMNAR_BOOL = 43,         /* TOK_COLUMNAR_BOOL  */
  YYSYMBOL_TOK_COLUMNAR_FLOAT = 44,        /* TOK_COLUMNAR_FLOAT  */
  YYSYMBOL_TOK_COLUMNAR_STRING = 45,       /* TOK_COLUMNAR_STRING  */
  YYSYMBOL_TOK_COLUMNAR_UINT32SET = 46,    /* TOK_COLUMNAR_UINT32SET  */
  YYSYMBOL_TOK_COLUMNAR_INT64SET = 47,     /* TOK_COLUMNAR_INT64SET  */
  YYSYMBOL_TOK_COLUMNAR_FLOATVEC = 48,     /* TOK_COLUMNAR_FLOATVEC  */
  YYSYMBOL_TOK_ATWEIGHT = 49,              /* TOK_ATWEIGHT  */
  YYSYMBOL_TOK_GROUPBY = 50,               /* TOK_GROUPBY  */
  YYSYMBOL_TOK_WEIGHT = 51,                /* TOK_WEIGHT  */
  YYSYMBOL_TOK_COUNT = 52,                 /* TOK_COUNT  */
  YYSYMBOL_TOK_DISTINCT = 53,              /* TOK_DISTINCT  */
  YYSYMBOL_TOK_CONST_LIST = 54,            /* TOK_CONST_LIST  */
  YYSYMBOL_TOK_ATTR_SINT = 55,             /* TOK_ATTR_SINT  */
  YYSYMBOL_TOK_MAP_ARG = 56,               /* TOK_MAP_ARG  */
  YYSYMBOL_TOK_FOR = 57,                   /* TOK_FOR  */
  YYSYMBOL_TOK_ITERATOR = 58,              /* TOK_ITERATOR  */
  YYSYMBOL_TOK_IS = 59,                    /* TOK_IS  */
  YYSYMBOL_TOK_NULL = 60,                  /* TOK_NULL  */
  YYSYMBOL_TOK_IS_NULL = 61,               /* TOK_IS_NULL  */
  YYSYMBOL_TOK_IS_NOT_NULL = 62,           /* TOK_IS_NOT_NULL  */
  YYSYMBOL_TOK_OR = 63,                    /* TOK_OR  */
  YYSYMBOL_TOK_AND = 64,                   /* TOK_AND  */
  YYSYMBOL_65_ = 65,                       /* '|'  */
  YYSYMBOL_66_ = 66,                       /* '&'  */
  YYSYMBOL_TOK_EQ = 67,                    /* TOK_EQ  */
  YYSYMBOL_TOK_NE = 68,                    /* TOK_NE  */
  YYSYMBOL_69_ = 69,                       /* '<'  */
  YYSYMBOL_70_ = 70,                       /* '>'  */
  YYSYMBOL_TOK_LTE = 71,                   /* TOK_LTE  */
  YYSYMBOL_TOK_GTE = 72,                   /* TOK_GTE  */
  YYSYMBOL_73_ = 73,                       /* '+'  */
  YYSYMBOL_74_ = 74,                       /* '-'  */
  YYSYMBOL_75_ = 75,                       /* '*'  */
  YYSYMBOL_76_ = 76,                       /* '/'  */
  YYSYMBOL_77_ = 77,                       /* '%'  */
  YYSYMBOL_TOK_DIV = 78,                   /* TOK_DIV  */
  YYSYMBOL_TOK_MOD = 79,                   /* TOK_MOD  */
  YYSYMBOL_TOK_NOT = 80,                   /* TOK_NOT  */
  YYSYMBOL_TOK_NEG = 81,                   /* TOK_NEG  */
  YYSYMBOL_82_ = 82,                       /* '`'  */
  YYSYMBOL_83_ = 83,                       /* '('  */
  YYSYMBOL_84_ = 84,                       /* ')'  */
  YYSYMBOL_85_ = 85,                       /* ','  */
  YYSYMBOL_86_ = 86,                       /* '{'  */
  YYSYMBOL_87_ = 87,                       /* '}'  */
  YYSYMBOL_88_ = 88,                       /* '['  */
  YYSYMBOL_89_ = 89,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 90,                  /* $accept  */
  YYSYMBOL_exprline = 91,                  /* exprline  */
  YYSYMBOL_attr = 92,                      /* attr  */
  YYSYMBOL_expr = 93,                      /* expr  */
  YYSYMBOL_maparg = 94,                    /* maparg  */
  YYSYMBOL_map_key = 95,                   /* map_key  */
  YYSYMBOL_arg = 96,                       /* arg  */
  YYSYMBOL_arglist = 97,                   /* arglist  */
  YYSYMBOL_constlist = 98,                 /* constlist  */
  YYSYMBOL_stringlist = 99,                /* stringlist  */
  YYSYMBOL_constlist_or_uservar = 100,     /* constlist_or_uservar  */
  YYSYMBOL_ident = 101,                    /* ident  */
  YYSYMBOL_accepted_funcs = 102,           /* accepted_funcs  */
  YYSYMBOL_function = 103,                 /* function  */
  YYSYMBOL_json_field = 104,               /* json_field  */
  YYSYMBOL_json_attr_name = 105,           /* json_attr_name  */
  YYSYMBOL_json_expr = 106,                /* json_expr  */
  YYSYMBOL_subscript = 107,                /* subscript  */
  YYSYMBOL_subkey = 108,                   /* subkey  */
  YYSYMBOL_for_loop = 109,                 /* for_loop  */
  YYSYMBOL_time_unit = 110,                /* time_unit  */
  YYSYMBOL_iterator = 111,                 /* iterator  */
  YYSYMBOL_streq = 112,                    /* streq  */
  YYSYMBOL_strval = 113                    /* strval  */
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
#define YYFINAL  84
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   940

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  156
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  267

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   327


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
       2,     2,     2,     2,     2,     2,     2,    77,    66,     2,
      83,    84,    75,    73,    85,    74,     2,    76,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      69,     2,    70,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    88,     2,    89,     2,     2,    82,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,    65,    87,     2,     2,     2,     2,
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
      67,    68,    71,    72,    78,    79,    80,    81
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   131,   131,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   206,   207,   208,   209,   210,
     214,   215,   216,   217,   221,   222,   226,   227,   228,   229,
     230,   231,   232,   233,   237,   238,   242,   243,   244,   248,
     249,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   285,   286,   290,
     291,   295,   299,   300,   304,   305,   306,   307,   311,   315,
     316,   317,   318,   319,   320,   321,   322,   326,   327,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   351
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
  "\"$end\"", "error", "\"invalid token\"", "TOK_CONST_INT",
  "TOK_CONST_FLOAT", "TOK_CONST_STRING", "TOK_SUBKEY", "TOK_DOT_NUMBER",
  "TOK_ATTR_INT", "TOK_ATTR_BITS", "TOK_ATTR_FLOAT", "TOK_ATTR_MVA32",
  "TOK_ATTR_MVA64", "TOK_ATTR_STRING", "TOK_ATTR_FACTORS", "TOK_IF",
  "TOK_FUNC", "TOK_FUNC_IN", "TOK_FUNC_INTERVAL", "TOK_FUNC_RAND",
  "TOK_FUNC_REMAP", "TOK_FUNC_PF", "TOK_FUNC_JA", "TOK_FUNC_DATE",
  "TOK_FUNC_SECOND", "TOK_FUNC_MINUTE", "TOK_FUNC_HOUR", "TOK_FUNC_DAY",
  "TOK_FUNC_WEEK", "TOK_FUNC_MONTH", "TOK_FUNC_QUARTER", "TOK_FUNC_YEAR",
  "TOK_USERVAR", "TOK_UDF", "TOK_HOOK_IDENT", "TOK_HOOK_FUNC", "TOK_IDENT",
  "TOK_TABLE_NAME", "TOK_ATTR_JSON", "TOK_FIELD", "TOK_COLUMNAR_INT",
  "TOK_COLUMNAR_TIMESTAMP", "TOK_COLUMNAR_BIGINT", "TOK_COLUMNAR_BOOL",
  "TOK_COLUMNAR_FLOAT", "TOK_COLUMNAR_STRING", "TOK_COLUMNAR_UINT32SET",
  "TOK_COLUMNAR_INT64SET", "TOK_COLUMNAR_FLOATVEC", "TOK_ATWEIGHT",
  "TOK_GROUPBY", "TOK_WEIGHT", "TOK_COUNT", "TOK_DISTINCT",
  "TOK_CONST_LIST", "TOK_ATTR_SINT", "TOK_MAP_ARG", "TOK_FOR",
  "TOK_ITERATOR", "TOK_IS", "TOK_NULL", "TOK_IS_NULL", "TOK_IS_NOT_NULL",
  "TOK_OR", "TOK_AND", "'|'", "'&'", "TOK_EQ", "TOK_NE", "'<'", "'>'",
  "TOK_LTE", "TOK_GTE", "'+'", "'-'", "'*'", "'/'", "'%'", "TOK_DIV",
  "TOK_MOD", "TOK_NOT", "TOK_NEG", "'`'", "'('", "')'", "','", "'{'",
  "'}'", "'['", "']'", "$accept", "exprline", "attr", "expr", "maparg",
  "map_key", "arg", "arglist", "constlist", "stringlist",
  "constlist_or_uservar", "ident", "accepted_funcs", "function",
  "json_field", "json_attr_name", "json_expr", "subscript", "subkey",
  "for_loop", "time_unit", "iterator", "streq", "strval", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-225)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-121)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     634,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,
    -225,   -79,   -68,   -65,  -225,   -43,   -35,   -25,   -23,   -17,
    -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,    -7,  -225,
      -5,    14,    97,    16,  -225,  -225,  -225,  -225,  -225,  -225,
    -225,  -225,  -225,  -225,  -225,    22,   634,   634,   762,   634,
     113,   -14,   816,    33,  -225,    -4,    14,    -3,  -225,  -225,
      51,   550,   121,   550,   214,   634,   298,   634,   634,   382,
     466,  -225,  -225,   715,    14,  -225,    29,    69,  -225,  -225,
     165,  -225,   103,   623,  -225,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   550,   110,   -26,    14,   634,   634,   634,   634,
     634,   634,   -15,  -225,    25,   816,  -225,   -13,  -225,   -10,
     115,  -225,    -1,   288,  -225,   118,   375,   456,  -225,    30,
    -225,    89,   117,   203,  -225,   162,  -225,   181,  -225,  -225,
     832,   847,   861,   764,   776,   -19,   776,   -19,   135,  -225,
     135,  -225,   135,  -225,   135,  -225,   112,   112,  -225,  -225,
    -225,  -225,  -225,    91,     5,  -225,   225,   776,   -19,   776,
     135,  -225,   135,  -225,   135,  -225,   135,  -225,  -225,  -225,
    -225,  -225,  -225,  -225,   -44,   219,  -225,  -225,   550,  -225,
       5,  -225,   634,  -225,   251,   205,   272,  -225,  -225,  -225,
    -225,  -225,  -225,  -225,  -225,  -225,  -225,    77,   206,   208,
     211,  -225,    25,  -225,    23,  -225,   215,   540,   287,  -225,
     634,  -225,  -225,     3,   325,  -225,   281,  -225,  -225,  -225,
    -225,  -225,   267,   774,   799,  -225,  -225,   180,  -225,    26,
       8,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,  -225,
    -225,  -225,   284,  -225,  -225,  -225,  -225,  -225,  -225,   131,
    -225,   285,   286,     8,   199,   290,  -225
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    25,    26,   156,    27,     3,     4,     5,     7,     8,
       9,     0,     0,     0,    91,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,    97,    98,    99,     0,    30,
       0,   137,     0,     6,    19,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    28,     0,     0,     0,     0,     0,
       0,    23,     2,     0,    24,     0,     0,    51,    52,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,   126,     0,   138,   122,    21,     0,    31,    32,
       0,     6,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     0,   156,    72,    56,    70,    74,     0,   100,     0,
       0,   115,     0,     0,   113,     0,     0,     0,   105,     0,
     109,     0,   156,     0,   123,     0,    29,    21,    20,    50,
      49,    48,    40,    39,    46,   139,    47,   142,    37,   144,
      38,   147,    44,   150,    45,   153,    33,    34,    35,    36,
      41,    42,    43,     0,     0,    54,     0,   140,   141,   143,
     145,   146,   148,   149,   151,   152,   154,   155,    89,    66,
      68,    69,    90,    67,     0,     0,    65,   103,     0,   101,
       0,   116,     0,   114,     0,     0,     0,   104,   108,   127,
     124,    22,   102,    76,    78,    84,    88,     0,    86,    87,
       0,    55,     0,    71,     0,    75,     0,     0,     0,   110,
       0,    77,    79,     0,     0,   107,     0,    57,    58,    60,
      59,   106,     0,     0,     0,    80,    82,     0,    85,     0,
       0,   118,   128,   117,   129,   130,   131,   132,   133,   134,
     135,   136,     0,    81,    83,    61,    62,    64,    63,     0,
     111,     0,     0,     0,     0,     0,   112
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -225,  -225,   -47,     0,  -225,   159,   -61,   -45,  -224,  -225,
     185,  -225,  -225,  -225,   143,  -225,   144,   323,   -42,  -225,
    -225,  -225,  -225,    88
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    50,    51,   115,   184,   185,   116,   117,   208,   209,
     210,   186,    53,    54,    55,    56,    57,    74,    75,   195,
     252,    58,    59,    60
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    82,   120,  -118,    61,   125,   235,   236,   203,   204,
     205,   203,   204,   103,  -117,    62,   259,   119,    63,   122,
      71,    72,  -120,  -120,   129,   131,   227,   228,   229,   255,
     256,   257,   134,   178,   165,  -119,  -119,   206,   179,   264,
      64,   212,   180,   213,   181,  -118,    78,    79,    65,    83,
     108,   109,   110,   111,   166,   104,  -117,   163,    66,   230,
      67,   182,   258,   134,   183,   123,    68,   126,   127,   -73,
     -73,   187,   188,   133,   189,   188,    69,   237,    70,   207,
     221,   222,   207,   191,   188,   140,   141,   142,   143,   144,
     146,   148,   150,   152,   154,   156,   157,   158,   159,   160,
     161,   162,    73,    76,  -120,    77,   167,   169,   170,   172,
     174,   176,   135,    84,   197,   188,   102,  -119,   106,   107,
     108,   109,   110,   111,     1,     2,   112,   215,     4,     5,
       6,     7,     8,     9,    10,   113,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   136,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,   137,    45,   198,   188,   202,   188,   145,   147,   149,
     151,   153,   155,   253,   254,   138,   241,    97,    98,    99,
     100,   101,   217,   164,   168,    46,   171,   173,   175,   177,
     190,    47,   193,    48,    49,   118,   199,   114,    95,    96,
      97,    98,    99,   100,   101,   261,   223,     1,     2,   112,
     234,     4,     5,     6,     7,     8,     9,    10,   113,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   201,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,   135,    45,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   265,   223,   211,   214,   218,    46,   219,
     220,   223,   200,   224,    47,   225,    48,    49,   121,   231,
     114,     1,     2,   112,   233,     4,     5,     6,     7,     8,
       9,    10,   113,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     238,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,   239,    45,
     240,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   260,   263,
     262,   226,    46,   192,   266,   216,   242,   243,    47,   105,
      48,    49,   124,     0,   114,     1,     2,   112,     0,     4,
       5,     6,     7,     8,     9,    10,   113,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     0,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,   194,    45,     0,     0,     0,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,     0,    46,     0,     0,     0,
       0,     0,    47,     0,    48,    49,   128,     0,   114,     1,
       2,   112,     0,     4,     5,     6,     7,     8,     9,    10,
     113,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     0,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,     0,    45,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,     0,     0,     0,     0,
      46,   196,     0,     0,     0,     0,    47,     0,    48,    49,
     130,     0,   114,     1,     2,   112,     0,     4,     5,     6,
       7,     8,     9,    10,   113,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
       0,    45,     0,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
       0,     0,     0,     0,    46,   232,     0,     0,     0,     0,
      47,     0,    48,    49,     0,     0,   114,     1,     2,     3,
       0,     4,     5,     6,     7,     8,     9,    10,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     0,    45,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,     0,     0,     0,     0,   139,    46,     0,
       0,     0,     0,     0,    47,     0,    48,    49,     1,     2,
     132,     0,     4,     5,     6,     7,     8,     9,    10,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,     0,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     0,    45,     0,     0,     0,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     8,     9,    10,     0,    46,
       0,     0,     0,     0,     0,    47,     0,    48,    49,    80,
      81,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,   244,   245,   246,   247,   248,   249,   250,
     251,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    48,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    48,     0,     0,     0,
       0,     0,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101
};

static const yytype_int16 yycheck[] =
{
       0,    48,    63,    17,    83,    66,     3,     4,     3,     4,
       5,     3,     4,    17,    17,    83,   240,    62,    83,    64,
       6,     7,     6,     7,    69,    70,     3,     4,     5,     3,
       4,     5,    74,     8,    60,     6,     7,    32,    13,   263,
      83,    85,    17,    87,    19,    59,    46,    47,    83,    49,
      69,    70,    71,    72,    80,    59,    59,   102,    83,    36,
      83,    36,    36,   105,    39,    65,    83,    67,    68,    84,
      85,    84,    85,    73,    84,    85,    83,    74,    83,    74,
       3,     4,    74,    84,    85,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    88,     6,    88,    83,   106,   107,   108,   109,
     110,   111,    83,     0,    84,    85,    83,    88,    67,    68,
      69,    70,    71,    72,     3,     4,     5,   188,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    84,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,     6,    51,    84,    85,    84,    85,    89,    90,    91,
      92,    93,    94,     3,     4,    82,   233,    75,    76,    77,
      78,    79,   192,    83,   106,    74,   108,   109,   110,   111,
      85,    80,    84,    82,    83,    84,    89,    86,    73,    74,
      75,    76,    77,    78,    79,    84,    85,     3,     4,     5,
     220,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    84,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    83,    51,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    84,    85,    60,    67,    36,    74,    84,
      18,    85,    89,    85,    80,    84,    82,    83,    84,    84,
      86,     3,     4,     5,    17,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
       5,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    67,    51,
      83,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    84,    83,
      85,   212,    74,    85,    84,   190,   233,   233,    80,    56,
      82,    83,    84,    -1,    86,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    57,    51,    -1,    -1,    -1,    -1,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    82,    83,    84,    -1,    86,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    -1,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      74,    85,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,
      84,    -1,    86,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    74,    85,    -1,    -1,    -1,    -1,
      80,    -1,    82,    83,    -1,    -1,    86,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    -1,    -1,    -1,    -1,    84,    74,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    82,    83,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    -1,    -1,    -1,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,     8,     9,    10,    11,    12,    13,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    24,    25,    26,    27,    28,    29,    30,
      31,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    82,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    82,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    10,    11,    12,
      13,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    51,    74,    80,    82,    83,
      91,    92,    93,   102,   103,   104,   105,   106,   111,   112,
     113,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,     6,     7,    88,   107,   108,     6,    83,    93,    93,
      37,    38,    92,    93,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    83,    17,    59,   107,    67,    68,    69,    70,
      71,    72,     5,    14,    86,    93,    96,    97,    84,    97,
      96,    84,    97,    93,    84,    96,    93,    93,    84,    97,
      84,    97,     5,    93,   108,    83,    84,     6,    82,    84,
      93,    93,    93,    93,    93,   113,    93,   113,    93,   113,
      93,   113,    93,   113,    93,   113,    93,    93,    93,    93,
      93,    93,    93,    97,    83,    60,    80,    93,   113,    93,
      93,   113,    93,   113,    93,   113,    93,   113,     8,    13,
      17,    19,    36,    39,    94,    95,   101,    84,    85,    84,
      85,    84,    85,    84,    57,   109,    85,    84,    84,    89,
      89,    84,    84,     3,     4,     5,    32,    74,    98,    99,
     100,    60,    85,    87,    67,    96,   100,    93,    36,    84,
      18,     3,     4,    85,    85,    84,    95,     3,     4,     5,
      36,    84,    85,    17,    93,     3,     4,    74,     5,    67,
      83,    92,   104,   106,    24,    25,    26,    27,    28,    29,
      30,    31,   110,     3,     4,     3,     4,     5,    36,    98,
      84,    84,    85,    83,    98,    84,    84
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    90,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    95,    95,    95,    95,
      96,    96,    96,    96,    97,    97,    98,    98,    98,    98,
      98,    98,    98,    98,    99,    99,   100,   100,   100,   101,
     101,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   104,   104,   105,
     105,   106,   107,   107,   108,   108,   108,   108,   109,   110,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   113
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     4,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     3,     4,     0,     3,     3,     3,
       3,     5,     5,     5,     5,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     2,     1,     2,
       3,     4,     3,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     4,     4,     4,     3,     6,     5,     4,     3,
       5,     8,    14,     3,     4,     3,     4,     1,     1,     2,
       1,     2,     1,     2,     3,     1,     1,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1
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
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, ExprParser_t * pParser)
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, ExprParser_t * pParser)
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
                 int yyrule, ExprParser_t * pParser)
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, ExprParser_t * pParser)
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
yyparse (ExprParser_t * pParser)
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
  case 2: /* exprline: expr  */
#line 131 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                { pParser->m_iParsed = (yyvsp[0].iNode); }
#line 1790 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 3: /* attr: TOK_ATTR_INT  */
#line 135 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeAttr ( TOK_ATTR_INT, (yyvsp[0].iAttrLocator) ); }
#line 1796 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 4: /* attr: TOK_ATTR_BITS  */
#line 136 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeAttr ( TOK_ATTR_BITS, (yyvsp[0].iAttrLocator) ); }
#line 1802 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 5: /* attr: TOK_ATTR_FLOAT  */
#line 137 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeAttr ( TOK_ATTR_FLOAT, (yyvsp[0].iAttrLocator) ); }
#line 1808 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 6: /* attr: TOK_ATTR_JSON  */
#line 138 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeAttr ( TOK_ATTR_JSON, (yyvsp[0].iAttrLocator) ); }
#line 1814 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 7: /* attr: TOK_ATTR_MVA32  */
#line 139 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeAttr ( TOK_ATTR_MVA32, (yyvsp[0].iAttrLocator) ); }
#line 1820 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 8: /* attr: TOK_ATTR_MVA64  */
#line 140 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeAttr ( TOK_ATTR_MVA64, (yyvsp[0].iAttrLocator) ); }
#line 1826 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 9: /* attr: TOK_ATTR_STRING  */
#line 141 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeAttr ( TOK_ATTR_STRING, (yyvsp[0].iAttrLocator) ); }
#line 1832 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 10: /* attr: TOK_COLUMNAR_INT  */
#line 142 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeColumnar ( TOK_COLUMNAR_INT, (yyvsp[0].iAttrLocator) ); }
#line 1838 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 11: /* attr: TOK_COLUMNAR_TIMESTAMP  */
#line 143 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeColumnar ( TOK_COLUMNAR_TIMESTAMP, (yyvsp[0].iAttrLocator) ); }
#line 1844 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 12: /* attr: TOK_COLUMNAR_BIGINT  */
#line 144 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeColumnar ( TOK_COLUMNAR_BIGINT, (yyvsp[0].iAttrLocator) ); }
#line 1850 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 13: /* attr: TOK_COLUMNAR_BOOL  */
#line 145 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeColumnar ( TOK_COLUMNAR_BOOL, (yyvsp[0].iAttrLocator) ); }
#line 1856 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 14: /* attr: TOK_COLUMNAR_FLOAT  */
#line 146 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeColumnar ( TOK_COLUMNAR_FLOAT, (yyvsp[0].iAttrLocator) ); }
#line 1862 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 15: /* attr: TOK_COLUMNAR_STRING  */
#line 147 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeColumnar ( TOK_COLUMNAR_STRING, (yyvsp[0].iAttrLocator) ); }
#line 1868 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 16: /* attr: TOK_COLUMNAR_UINT32SET  */
#line 148 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeColumnar ( TOK_COLUMNAR_UINT32SET, (yyvsp[0].iAttrLocator) ); }
#line 1874 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 17: /* attr: TOK_COLUMNAR_INT64SET  */
#line 149 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeColumnar ( TOK_COLUMNAR_INT64SET, (yyvsp[0].iAttrLocator) ); }
#line 1880 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 18: /* attr: TOK_COLUMNAR_FLOATVEC  */
#line 150 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeColumnar ( TOK_COLUMNAR_FLOATVEC, (yyvsp[0].iAttrLocator) ); }
#line 1886 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 19: /* attr: TOK_FIELD  */
#line 151 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                { (yyval.iNode) = pParser->AddNodeField ( TOK_FIELD, (yyvsp[0].iAttrLocator) ); }
#line 1892 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 20: /* attr: '`' attr '`'  */
#line 152 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = (yyvsp[-1].iNode); }
#line 1898 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 21: /* attr: TOK_TABLE_NAME TOK_SUBKEY  */
#line 153 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeWithTable ( (yyvsp[-1].sIdent), (yyvsp[0].iConst) ); }
#line 1904 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 22: /* attr: TOK_TABLE_NAME TOK_SUBKEY '(' ')'  */
#line 154 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddWeightWithTable ( (yyvsp[-3].sIdent), (yyvsp[-2].iConst) ); }
#line 1910 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 25: /* expr: TOK_CONST_INT  */
#line 160 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeInt ( (yyvsp[0].iConst) ); }
#line 1916 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 26: /* expr: TOK_CONST_FLOAT  */
#line 161 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeFloat ( (yyvsp[0].fConst) ); }
#line 1922 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 27: /* expr: TOK_DOT_NUMBER  */
#line 162 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeDotNumber ( (yyvsp[0].iConst) ); }
#line 1928 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 28: /* expr: TOK_ATWEIGHT  */
#line 163 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeWeight(); }
#line 1934 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 29: /* expr: TOK_WEIGHT '(' ')'  */
#line 164 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeWeight(); }
#line 1940 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 30: /* expr: TOK_HOOK_IDENT  */
#line 165 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeHookIdent ( (yyvsp[0].iNode) ); }
#line 1946 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 31: /* expr: '-' expr  */
#line 166 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeOp ( TOK_NEG, (yyvsp[0].iNode), -1 ); }
#line 1952 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 32: /* expr: TOK_NOT expr  */
#line 167 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( TOK_NOT, (yyvsp[0].iNode), -1 ); if ( (yyval.iNode)<0 ) YYERROR; }
#line 1958 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 33: /* expr: expr '+' expr  */
#line 168 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( '+', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 1964 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 34: /* expr: expr '-' expr  */
#line 169 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( '-', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 1970 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 35: /* expr: expr '*' expr  */
#line 170 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( '*', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 1976 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 36: /* expr: expr '/' expr  */
#line 171 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( '/', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 1982 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 37: /* expr: expr '<' expr  */
#line 172 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( '<', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 1988 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 38: /* expr: expr '>' expr  */
#line 173 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( '>', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 1994 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 39: /* expr: expr '&' expr  */
#line 174 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( '&', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2000 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 40: /* expr: expr '|' expr  */
#line 175 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( '|', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2006 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 41: /* expr: expr '%' expr  */
#line 176 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( '%', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2012 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 42: /* expr: expr TOK_DIV expr  */
#line 177 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeFunc ( FUNC_IDIV, pParser->AddNodeOp ( ',', (yyvsp[-2].iNode), (yyvsp[0].iNode) ) ); }
#line 2018 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 43: /* expr: expr TOK_MOD expr  */
#line 178 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( '%', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2024 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 44: /* expr: expr TOK_LTE expr  */
#line 179 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( TOK_LTE, (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2030 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 45: /* expr: expr TOK_GTE expr  */
#line 180 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( TOK_GTE, (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2036 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 46: /* expr: expr TOK_EQ expr  */
#line 181 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( TOK_EQ, (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2042 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 47: /* expr: expr TOK_NE expr  */
#line 182 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( TOK_NE, (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2048 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 48: /* expr: expr TOK_AND expr  */
#line 183 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( TOK_AND, (yyvsp[-2].iNode), (yyvsp[0].iNode) ); if ( (yyval.iNode)<0 ) YYERROR; }
#line 2054 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 49: /* expr: expr TOK_OR expr  */
#line 184 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( TOK_OR, (yyvsp[-2].iNode), (yyvsp[0].iNode) ); if ( (yyval.iNode)<0 ) YYERROR; }
#line 2060 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 50: /* expr: '(' expr ')'  */
#line 185 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = (yyvsp[-1].iNode); }
#line 2066 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 54: /* expr: json_field TOK_IS TOK_NULL  */
#line 189 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( TOK_IS_NULL, (yyvsp[-2].iNode), -1); }
#line 2072 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 55: /* expr: json_field TOK_IS TOK_NOT TOK_NULL  */
#line 190 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeOp ( TOK_IS_NOT_NULL, (yyvsp[-3].iNode), -1); }
#line 2078 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 56: /* maparg: %empty  */
#line 194 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                                                        { (yyval.iNode) = pParser->AddNodeMapArg ( NULL, NULL, 0,  0.0f, VariantType_e::EMPTY ); }
#line 2084 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 57: /* maparg: map_key TOK_EQ TOK_CONST_INT  */
#line 195 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                        { (yyval.iNode) = pParser->AddNodeMapArg ( (yyvsp[-2].sIdent), NULL,   (yyvsp[0].iConst), 0.0f, VariantType_e::BIGINT ); }
#line 2090 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 58: /* maparg: map_key TOK_EQ TOK_CONST_FLOAT  */
#line 196 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                        { (yyval.iNode) = pParser->AddNodeMapArg ( (yyvsp[-2].sIdent), NULL,   0,  (yyvsp[0].fConst),   VariantType_e::FLOAT ); }
#line 2096 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 59: /* maparg: map_key TOK_EQ TOK_IDENT  */
#line 197 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                                { (yyval.iNode) = pParser->AddNodeMapArg ( (yyvsp[-2].sIdent), (yyvsp[0].sIdent),     0,  0.0f, VariantType_e::IDENT ); }
#line 2102 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 60: /* maparg: map_key TOK_EQ TOK_CONST_STRING  */
#line 198 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                        { (yyval.iNode) = pParser->AddNodeMapArg ( (yyvsp[-2].sIdent), NULL,   (yyvsp[0].iConst), 0.0f, VariantType_e::STRING ); }
#line 2108 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 61: /* maparg: maparg ',' map_key TOK_EQ TOK_CONST_INT  */
#line 199 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                { pParser->AppendToMapArg ( (yyval.iNode), (yyvsp[-2].sIdent), NULL,   (yyvsp[0].iConst), 0.0f, VariantType_e::BIGINT ); }
#line 2114 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 62: /* maparg: maparg ',' map_key TOK_EQ TOK_CONST_FLOAT  */
#line 200 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                { pParser->AppendToMapArg ( (yyval.iNode), (yyvsp[-2].sIdent), NULL,   0,  (yyvsp[0].fConst),   VariantType_e::FLOAT ); }
#line 2120 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 63: /* maparg: maparg ',' map_key TOK_EQ TOK_IDENT  */
#line 201 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                { pParser->AppendToMapArg ( (yyval.iNode), (yyvsp[-2].sIdent), (yyvsp[0].sIdent),     0,  0.0f, VariantType_e::IDENT ); }
#line 2126 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 64: /* maparg: maparg ',' map_key TOK_EQ TOK_CONST_STRING  */
#line 202 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                { pParser->AppendToMapArg ( (yyval.iNode), (yyvsp[-2].sIdent), NULL,   (yyvsp[0].iConst), 0.0f, VariantType_e::STRING ); }
#line 2132 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 65: /* map_key: ident  */
#line 206 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                { (yyval.sIdent) = (yyvsp[0].sIdent); }
#line 2138 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 66: /* map_key: TOK_ATTR_STRING  */
#line 207 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.sIdent) = pParser->Attr2Ident((yyvsp[0].iAttrLocator)); }
#line 2144 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 67: /* map_key: TOK_FIELD  */
#line 208 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                { (yyval.sIdent) = pParser->Field2Ident((yyvsp[0].iAttrLocator)); }
#line 2150 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 68: /* map_key: TOK_FUNC_IN  */
#line 209 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.sIdent) = "in"; }
#line 2156 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 69: /* map_key: TOK_FUNC_RAND  */
#line 210 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.sIdent) = "rand"; }
#line 2162 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 71: /* arg: '{' maparg '}'  */
#line 215 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = (yyvsp[-1].iNode); }
#line 2168 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 72: /* arg: TOK_ATTR_FACTORS  */
#line 216 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeAttr ( TOK_ATTR_FACTORS, (yyvsp[0].iAttrLocator) ); }
#line 2174 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 73: /* arg: TOK_CONST_STRING  */
#line 217 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeString ( (yyvsp[0].iConst) ); }
#line 2180 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 74: /* arglist: arg  */
#line 221 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                        { (yyval.iNode) = (yyvsp[0].iNode); }
#line 2186 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 75: /* arglist: arglist ',' arg  */
#line 222 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( ',', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2192 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 76: /* constlist: TOK_CONST_INT  */
#line 226 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                { (yyval.iNode) = pParser->AddNodeConstlist ( (yyvsp[0].iConst), false ); }
#line 2198 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 77: /* constlist: '-' TOK_CONST_INT  */
#line 227 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                { (yyval.iNode) = pParser->AddNodeConstlist ( -(yyvsp[0].iConst), false );}
#line 2204 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 78: /* constlist: TOK_CONST_FLOAT  */
#line 228 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                { (yyval.iNode) = pParser->AddNodeConstlist ( (yyvsp[0].fConst) ); }
#line 2210 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 79: /* constlist: '-' TOK_CONST_FLOAT  */
#line 229 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeConstlist ( -(yyvsp[0].fConst) );}
#line 2216 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 80: /* constlist: constlist ',' TOK_CONST_INT  */
#line 230 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { pParser->AppendToConstlist ( (yyval.iNode), (yyvsp[0].iConst) ); }
#line 2222 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 81: /* constlist: constlist ',' '-' TOK_CONST_INT  */
#line 231 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { pParser->AppendToConstlist ( (yyval.iNode), -(yyvsp[0].iConst) );}
#line 2228 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 82: /* constlist: constlist ',' TOK_CONST_FLOAT  */
#line 232 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { pParser->AppendToConstlist ( (yyval.iNode), (yyvsp[0].fConst) ); }
#line 2234 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 83: /* constlist: constlist ',' '-' TOK_CONST_FLOAT  */
#line 233 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { pParser->AppendToConstlist ( (yyval.iNode), -(yyvsp[0].fConst) );}
#line 2240 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 84: /* stringlist: TOK_CONST_STRING  */
#line 237 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                { (yyval.iNode) = pParser->AddNodeConstlist ( (yyvsp[0].iConst), true ); }
#line 2246 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 85: /* stringlist: stringlist ',' TOK_CONST_STRING  */
#line 238 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { pParser->AppendToConstlist ( (yyval.iNode), (yyvsp[0].iConst) ); }
#line 2252 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 88: /* constlist_or_uservar: TOK_USERVAR  */
#line 244 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeUservar ( (yyvsp[0].iNode) ); }
#line 2258 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 89: /* ident: TOK_ATTR_INT  */
#line 248 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.sIdent) = pParser->Attr2Ident ( (yyvsp[0].iAttrLocator) ); }
#line 2264 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 100: /* function: TOK_FUNC '(' ')'  */
#line 265 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeFunc0 ( (yyvsp[-2].iFunc) ); if ( (yyval.iNode)<0 ) YYERROR; }
#line 2270 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 101: /* function: TOK_FUNC '(' arglist ')'  */
#line 266 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeFunc ( (yyvsp[-3].iFunc), (yyvsp[-1].iNode) ); if ( (yyval.iNode)<0 ) YYERROR; }
#line 2276 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 102: /* function: accepted_funcs '(' arglist ')'  */
#line 267 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeFunc ( (yyvsp[-3].iFunc), (yyvsp[-1].iNode) ); if ( (yyval.iNode)<0 ) YYERROR; }
#line 2282 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 103: /* function: TOK_IF '(' arglist ')'  */
#line 268 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeFunc ( (yyvsp[-3].iFunc), (yyvsp[-1].iNode) ); if ( (yyval.iNode)<0 ) YYERROR; }
#line 2288 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 104: /* function: TOK_UDF '(' arglist ')'  */
#line 269 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeUdf ( (yyvsp[-3].iNode), (yyvsp[-1].iNode) ); if ( (yyval.iNode)<0 ) YYERROR; }
#line 2294 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 105: /* function: TOK_UDF '(' ')'  */
#line 270 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeUdf ( (yyvsp[-2].iNode), -1 ); if ( (yyval.iNode)<0 ) YYERROR; }
#line 2300 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 106: /* function: TOK_FUNC_IN '(' arg ',' constlist_or_uservar ')'  */
#line 271 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                          { (yyval.iNode) = pParser->AddNodeIn ( (yyvsp[-3].iNode), (yyvsp[-1].iNode) ); }
#line 2306 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 107: /* function: json_field TOK_FUNC_IN '(' constlist_or_uservar ')'  */
#line 272 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                             { (yyval.iNode) = pParser->AddNodeIn ( (yyvsp[-4].iNode), (yyvsp[-1].iNode) ); }
#line 2312 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 108: /* function: TOK_HOOK_FUNC '(' arglist ')'  */
#line 273 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                        { (yyval.iNode) = pParser->AddNodeHookFunc ( (yyvsp[-3].iNode), (yyvsp[-1].iNode) ); if ( (yyval.iNode)<0 ) YYERROR; }
#line 2318 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 109: /* function: TOK_HOOK_FUNC '(' ')'  */
#line 274 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeHookFunc ( (yyvsp[-2].iNode) ); if ( (yyval.iNode)<0 ) YYERROR; }
#line 2324 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 110: /* function: TOK_FUNC_JA '(' expr for_loop ')'  */
#line 275 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                            { (yyval.iNode) = pParser->AddNodeFor ( (yyvsp[-4].iNode), (yyvsp[-2].iNode), (yyvsp[-1].iNode) ); }
#line 2330 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 111: /* function: TOK_FUNC_DATE '(' expr ',' TOK_FUNC_INTERVAL expr time_unit ')'  */
#line 276 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                          { (yyval.iNode) = pParser->AddNodeDate ( (yyvsp[-7].iFunc), (yyvsp[-5].iNode), (yyvsp[-2].iNode), (yyvsp[-1].iConst) ); }
#line 2336 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 112: /* function: TOK_FUNC_REMAP '(' expr ',' expr ',' '(' constlist ')' ',' '(' constlist ')' ')'  */
#line 277 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                                           { (yyval.iNode) = pParser->AddNodeRemap ( (yyvsp[-11].iNode), (yyvsp[-9].iNode), (yyvsp[-6].iNode), (yyvsp[-2].iNode) ); }
#line 2342 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 113: /* function: TOK_FUNC_PF '(' ')'  */
#line 278 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodePF ( (yyvsp[-2].iNode), -1 ); }
#line 2348 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 114: /* function: TOK_FUNC_PF '(' arg ')'  */
#line 279 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodePF ( (yyvsp[-3].iNode), (yyvsp[-1].iNode) ); }
#line 2354 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 115: /* function: TOK_FUNC_RAND '(' ')'  */
#line 280 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeRand ( -1 ); }
#line 2360 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 116: /* function: TOK_FUNC_RAND '(' arglist ')'  */
#line 281 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                        { (yyval.iNode) = pParser->AddNodeRand ( (yyvsp[-1].iNode) ); }
#line 2366 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 119: /* json_attr_name: TOK_TABLE_NAME TOK_SUBKEY  */
#line 290 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                        {  (yyval.iAttrLocator) = pParser->ParseAttrWithTable ( (yyvsp[-1].sIdent), (yyvsp[0].iConst) ); }
#line 2372 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 121: /* json_expr: json_attr_name subscript  */
#line 295 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeJsonField ( (yyvsp[-1].iAttrLocator), (yyvsp[0].iNode) ); }
#line 2378 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 123: /* subscript: subscript subkey  */
#line 300 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( ',', (yyvsp[-1].iNode), (yyvsp[0].iNode) ); }
#line 2384 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 124: /* subkey: '[' expr ']'  */
#line 304 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = (yyvsp[-1].iNode); }
#line 2390 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 125: /* subkey: TOK_SUBKEY  */
#line 305 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeJsonSubkey ( (yyvsp[0].iConst) ); }
#line 2396 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 126: /* subkey: TOK_DOT_NUMBER  */
#line 306 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeJsonSubkey ( (yyvsp[0].iConst) ); }
#line 2402 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 127: /* subkey: '[' TOK_CONST_STRING ']'  */
#line 307 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeString ( (yyvsp[-1].iConst) ); }
#line 2408 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 128: /* for_loop: TOK_FOR TOK_IDENT TOK_FUNC_IN json_field  */
#line 311 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                 { (yyval.iNode) = pParser->AddNodeIdent ( (yyvsp[-2].sIdent), (yyvsp[0].iNode) ); }
#line 2414 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 129: /* time_unit: TOK_FUNC_SECOND  */
#line 315 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iConst) = pParser->AddNodeInt ( (int)TimeUnit_e::SECOND ); }
#line 2420 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 130: /* time_unit: TOK_FUNC_MINUTE  */
#line 316 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iConst) = pParser->AddNodeInt ( (int)TimeUnit_e::MINUTE ); }
#line 2426 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 131: /* time_unit: TOK_FUNC_HOUR  */
#line 317 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iConst) = pParser->AddNodeInt ( (int)TimeUnit_e::HOUR ); }
#line 2432 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 132: /* time_unit: TOK_FUNC_DAY  */
#line 318 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iConst) = pParser->AddNodeInt ( (int)TimeUnit_e::DAY ); }
#line 2438 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 133: /* time_unit: TOK_FUNC_WEEK  */
#line 319 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iConst) = pParser->AddNodeInt ( (int)TimeUnit_e::WEEK ); }
#line 2444 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 134: /* time_unit: TOK_FUNC_MONTH  */
#line 320 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iConst) = pParser->AddNodeInt ( (int)TimeUnit_e::MONTH ); }
#line 2450 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 135: /* time_unit: TOK_FUNC_QUARTER  */
#line 321 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iConst) = pParser->AddNodeInt ( (int)TimeUnit_e::QUARTER ); }
#line 2456 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 136: /* time_unit: TOK_FUNC_YEAR  */
#line 322 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iConst) = pParser->AddNodeInt ( (int)TimeUnit_e::YEAR ); }
#line 2462 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 137: /* iterator: TOK_IDENT  */
#line 326 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                                { (yyval.iNode) = pParser->AddNodeIdent ( (yyvsp[0].sIdent), -1 ); }
#line 2468 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 138: /* iterator: TOK_IDENT subscript  */
#line 327 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeIdent ( (yyvsp[-1].sIdent), (yyvsp[0].iNode) ); }
#line 2474 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 139: /* streq: expr TOK_EQ strval  */
#line 331 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( TOK_EQ, (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2480 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 140: /* streq: strval TOK_EQ expr  */
#line 332 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeOp ( TOK_EQ, (yyvsp[0].iNode), (yyvsp[-2].iNode) ); }
#line 2486 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 141: /* streq: strval TOK_EQ strval  */
#line 333 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeOp ( TOK_EQ, (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2492 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 142: /* streq: expr TOK_NE strval  */
#line 334 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeOp ( TOK_NE, (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2498 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 143: /* streq: strval TOK_NE expr  */
#line 335 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeOp ( TOK_NE, (yyvsp[0].iNode), (yyvsp[-2].iNode) ); }
#line 2504 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 144: /* streq: expr '<' strval  */
#line 336 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( '<', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2510 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 145: /* streq: strval '<' expr  */
#line 337 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( '<', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2516 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 146: /* streq: strval '<' strval  */
#line 338 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( '<', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2522 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 147: /* streq: expr '>' strval  */
#line 339 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( '>', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2528 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 148: /* streq: strval '>' expr  */
#line 340 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( '>', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2534 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 149: /* streq: strval '>' strval  */
#line 341 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeOp ( '>', (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2540 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 150: /* streq: expr TOK_LTE strval  */
#line 342 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeOp ( TOK_LTE, (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2546 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 151: /* streq: strval TOK_LTE expr  */
#line 343 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeOp ( TOK_LTE, (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2552 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 152: /* streq: strval TOK_LTE strval  */
#line 344 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeOp ( TOK_LTE, (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2558 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 153: /* streq: expr TOK_GTE strval  */
#line 345 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeOp ( TOK_GTE, (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2564 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 154: /* streq: strval TOK_GTE expr  */
#line 346 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeOp ( TOK_GTE, (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2570 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 155: /* streq: strval TOK_GTE strval  */
#line 347 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                { (yyval.iNode) = pParser->AddNodeOp ( TOK_GTE, (yyvsp[-2].iNode), (yyvsp[0].iNode) ); }
#line 2576 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;

  case 156: /* strval: TOK_CONST_STRING  */
#line 351 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"
                                                        { (yyval.iNode) = pParser->AddNodeString ( (yyvsp[0].iConst) ); }
#line 2582 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"
    break;


#line 2586 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.c"

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

#line 355 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"

#if _WIN32
#pragma warning(pop)
#endif
