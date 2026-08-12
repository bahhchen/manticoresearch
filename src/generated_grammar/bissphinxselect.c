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
#line 1 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"

#if _WIN32
#pragma warning(push,1)
#pragma warning(disable:4702) // unreachable code
#endif

#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wfree-nonheap-object"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif

#line 83 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"

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

#include "bissphinxselect.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "$end"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SEL_TOKEN = 3,                  /* SEL_TOKEN  */
  YYSYMBOL_SEL_ID = 4,                     /* SEL_ID  */
  YYSYMBOL_SEL_AS = 5,                     /* SEL_AS  */
  YYSYMBOL_SEL_AVG = 6,                    /* SEL_AVG  */
  YYSYMBOL_SEL_MAX = 7,                    /* SEL_MAX  */
  YYSYMBOL_SEL_MIN = 8,                    /* SEL_MIN  */
  YYSYMBOL_SEL_SUM = 9,                    /* SEL_SUM  */
  YYSYMBOL_SEL_GROUP_CONCAT = 10,          /* SEL_GROUP_CONCAT  */
  YYSYMBOL_SEL_GROUPBY = 11,               /* SEL_GROUPBY  */
  YYSYMBOL_SEL_COUNT = 12,                 /* SEL_COUNT  */
  YYSYMBOL_SEL_WEIGHT = 13,                /* SEL_WEIGHT  */
  YYSYMBOL_SEL_DISTINCT = 14,              /* SEL_DISTINCT  */
  YYSYMBOL_SEL_OPTION = 15,                /* SEL_OPTION  */
  YYSYMBOL_SEL_COMMENT_OPEN = 16,          /* SEL_COMMENT_OPEN  */
  YYSYMBOL_SEL_COMMENT_CLOSE = 17,         /* SEL_COMMENT_CLOSE  */
  YYSYMBOL_TOK_DIV = 18,                   /* TOK_DIV  */
  YYSYMBOL_TOK_MOD = 19,                   /* TOK_MOD  */
  YYSYMBOL_TOK_NEG = 20,                   /* TOK_NEG  */
  YYSYMBOL_TOK_LTE = 21,                   /* TOK_LTE  */
  YYSYMBOL_TOK_GTE = 22,                   /* TOK_GTE  */
  YYSYMBOL_TOK_EQ = 23,                    /* TOK_EQ  */
  YYSYMBOL_TOK_NE = 24,                    /* TOK_NE  */
  YYSYMBOL_TOK_CONST_STRING = 25,          /* TOK_CONST_STRING  */
  YYSYMBOL_TOK_OR = 26,                    /* TOK_OR  */
  YYSYMBOL_TOK_AND = 27,                   /* TOK_AND  */
  YYSYMBOL_28_ = 28,                       /* '|'  */
  YYSYMBOL_29_ = 29,                       /* '&'  */
  YYSYMBOL_30_ = 30,                       /* '<'  */
  YYSYMBOL_31_ = 31,                       /* '>'  */
  YYSYMBOL_32_ = 32,                       /* '+'  */
  YYSYMBOL_33_ = 33,                       /* '-'  */
  YYSYMBOL_34_ = 34,                       /* '*'  */
  YYSYMBOL_35_ = 35,                       /* '/'  */
  YYSYMBOL_36_ = 36,                       /* '%'  */
  YYSYMBOL_TOK_NOT = 37,                   /* TOK_NOT  */
  YYSYMBOL_TOK_IS = 38,                    /* TOK_IS  */
  YYSYMBOL_TOK_NULL = 39,                  /* TOK_NULL  */
  YYSYMBOL_TOK_FOR = 40,                   /* TOK_FOR  */
  YYSYMBOL_TOK_FUNC_IN = 41,               /* TOK_FUNC_IN  */
  YYSYMBOL_TOK_FUNC_RAND = 42,             /* TOK_FUNC_RAND  */
  YYSYMBOL_43_ = 43,                       /* ','  */
  YYSYMBOL_44_ = 44,                       /* '('  */
  YYSYMBOL_45_ = 45,                       /* ')'  */
  YYSYMBOL_46_ = 46,                       /* '`'  */
  YYSYMBOL_47_ = 47,                       /* '{'  */
  YYSYMBOL_48_ = 48,                       /* '}'  */
  YYSYMBOL_49_ = 49,                       /* '.'  */
  YYSYMBOL_50_ = 50,                       /* '['  */
  YYSYMBOL_51_ = 51,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_select = 53,                    /* select  */
  YYSYMBOL_select_list = 54,               /* select_list  */
  YYSYMBOL_select_item = 55,               /* select_item  */
  YYSYMBOL_opt_alias = 56,                 /* opt_alias  */
  YYSYMBOL_select_expr = 57,               /* select_expr  */
  YYSYMBOL_expr = 58,                      /* expr  */
  YYSYMBOL_select_atom = 59,               /* select_atom  */
  YYSYMBOL_function = 60,                  /* function  */
  YYSYMBOL_arglist = 61,                   /* arglist  */
  YYSYMBOL_consthash = 62,                 /* consthash  */
  YYSYMBOL_hash_key = 63,                  /* hash_key  */
  YYSYMBOL_arg = 64,                       /* arg  */
  YYSYMBOL_comment = 65,                   /* comment  */
  YYSYMBOL_json_field = 66,                /* json_field  */
  YYSYMBOL_json_expr = 67,                 /* json_expr  */
  YYSYMBOL_subscript = 68,                 /* subscript  */
  YYSYMBOL_ident = 69,                     /* ident  */
  YYSYMBOL_subkey = 70,                    /* subkey  */
  YYSYMBOL_for_loop = 71                   /* for_loop  */
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
#define YYFINAL  77
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   867

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  200

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


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
       2,     2,     2,     2,     2,     2,     2,    36,    29,     2,
      44,    45,    34,    32,    43,    33,    49,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      30,     2,    31,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,    46,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,    28,    48,     2,     2,     2,     2,
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
      25,    26,    27,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    64,    64,    65,    66,    70,    71,    75,    76,    78,
      80,    81,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   130,
     131,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     147,   148,   151,   153,   154,   155,   156,   160,   161,   165,
     166,   170,   177,   178,   182,   186,   187,   191,   192,   192,
     192,   192,   192,   192,   192,   193,   193,   193,   193,   193,
     193,   194,   194,   194,   194,   194,   194,   194,   194,   195,
     195,   199,   200,   201,   205
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
  "\"$end\"", "error", "\"invalid token\"", "SEL_TOKEN", "SEL_ID",
  "SEL_AS", "SEL_AVG", "SEL_MAX", "SEL_MIN", "SEL_SUM", "SEL_GROUP_CONCAT",
  "SEL_GROUPBY", "SEL_COUNT", "SEL_WEIGHT", "SEL_DISTINCT", "SEL_OPTION",
  "SEL_COMMENT_OPEN", "SEL_COMMENT_CLOSE", "TOK_DIV", "TOK_MOD", "TOK_NEG",
  "TOK_LTE", "TOK_GTE", "TOK_EQ", "TOK_NE", "TOK_CONST_STRING", "TOK_OR",
  "TOK_AND", "'|'", "'&'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "TOK_NOT", "TOK_IS", "TOK_NULL", "TOK_FOR", "TOK_FUNC_IN",
  "TOK_FUNC_RAND", "','", "'('", "')'", "'`'", "'{'", "'}'", "'.'", "'['",
  "']'", "$accept", "select", "select_list", "select_item", "opt_alias",
  "select_expr", "expr", "select_atom", "function", "arglist", "consthash",
  "hash_key", "arg", "comment", "json_field", "json_expr", "subscript",
  "ident", "subkey", "for_loop", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-45)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-79)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      98,   817,   -28,   -45,    -6,     4,    12,    17,    33,    38,
      56,    86,   -45,   -45,    65,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   436,   -45,   436,   -45,    92,    94,
     436,    24,    -1,    43,   -11,   -45,    28,   128,   -45,   -45,
     -45,    85,   103,   -45,   166,   481,   256,    79,   -45,   436,
     436,   436,   436,   436,   108,     8,   120,   140,   -45,   104,
     123,   -45,   -45,   -45,   -45,   -45,   -45,   301,   211,   568,
     -45,   -45,   136,   -45,   -45,   -14,   160,   -45,   346,   -45,
     -45,   191,   -45,   436,   436,   436,   436,   391,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
      -2,   -45,   -45,   734,    -4,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   144,   -15,   -45,   588,    36,   540,   608,
     628,   -45,   193,   152,   -45,   175,   436,   436,   128,    30,
     -45,    31,   -45,   -45,    -1,   -45,    20,   -45,   -45,   -45,
     -45,   479,   479,   -45,   818,   818,   754,   773,   792,   811,
     479,   479,   516,   516,   -45,   -45,   -45,   161,   -45,   481,
     156,   301,   -45,   -45,   -45,   -45,   436,   -45,   436,   -45,
     -45,   -45,   157,   -45,   201,   688,   711,   -45,   -45,   183,
     -45,   -45,   -45,   168,   -45,   -45,   648,   668,   -45,   210,
      22,   518,   -45,   -45,   -45,   -45,   -45,    79,   -45,   -45
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    50,    49,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,     0,    90,    91,    92,    93,    94,
      95,    96,    97,    98,     0,     7,    99,   100,     0,     0,
       0,     0,    62,     0,     2,     5,     9,    12,    21,    44,
       4,     0,    45,    73,     0,     0,     0,    74,    75,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,    81,
      82,    83,    84,    85,    86,    23,    24,     0,     0,     0,
      50,    49,     0,    67,    68,     0,     0,     1,     0,     3,
      10,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,    52,    69,     0,    60,    77,    78,    81,    82,
      87,    99,   101,     0,     0,    76,     0,     0,     0,     0,
       0,    18,     0,     0,    55,     0,     0,     0,    69,     0,
      58,     0,    42,    22,     0,    43,     0,     6,    11,    34,
      35,    36,    37,    48,    38,    39,    41,    40,    32,    31,
      29,    30,    25,    26,    27,    28,    33,     0,    46,     0,
       0,     0,    51,   103,   102,    13,     0,    14,     0,    15,
      16,    17,     0,    19,     0,     0,     0,    57,    59,     0,
      63,    64,    47,     0,    56,    61,     0,     0,    20,     0,
       0,     0,    54,    53,    71,    65,    66,    77,   104,    72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -45,   -45,   -45,   150,   -45,   -45,     0,   208,   -45,    66,
     -45,   106,    80,   209,    51,    54,   -45,   -44,   199,   -45
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    33,    34,    35,    82,    36,   128,    38,    39,   104,
      75,    76,   105,    40,    41,    42,    47,    43,    48,   160
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,   112,    73,    83,    84,    14,    85,    86,    87,    88,
     -78,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   122,   180,    65,   195,    66,    70,    71,   134,
      69,    80,    78,    81,   135,   157,   164,   158,    49,   161,
      74,   162,   123,    77,   103,   181,   114,   196,    50,   116,
     117,   118,   119,   120,    83,    84,    51,    85,    86,    87,
      88,    52,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   161,   161,   177,   178,    53,    37,   166,
      57,   167,    54,   139,   140,   141,   142,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
      55,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   183,    15,    16,    17,    18,
      19,    20,    21,   100,    22,    23,   175,   176,    45,    46,
      56,    24,    25,   129,   131,    26,    67,    27,    68,    28,
      29,   -72,    30,   125,    31,    32,    83,    84,   126,    85,
      86,    87,    88,   121,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   124,   186,   127,   187,     1,
       2,     3,    58,    59,    60,    61,    62,    63,    64,    11,
      12,    13,   133,   136,    15,    16,    17,    18,    19,    20,
      21,   101,    22,    23,   138,   163,   172,   173,   174,    24,
     182,   184,   188,    26,   189,    27,   190,    28,    29,   191,
      30,   102,    31,    32,     1,     2,     3,    58,    59,    60,
      61,    62,    63,    64,    11,    12,    13,   194,   137,    15,
      16,    17,    18,    19,    20,    21,   101,    22,    23,    72,
     179,   185,   198,    79,    24,   199,   115,     0,    26,     0,
      27,     0,    28,    29,     0,    30,   130,    31,    32,     1,
       2,     3,    58,    59,    60,    61,    62,    63,    64,    11,
      12,    13,     0,     0,    15,    16,    17,    18,    19,    20,
      21,   113,    22,    23,     0,     0,     0,     0,     0,    24,
       0,     0,     0,    26,     0,    27,     0,    28,    29,     0,
      30,     0,    31,    32,     1,     2,     3,    58,    59,    60,
      61,    62,    63,    64,    11,    12,    13,     0,     0,    15,
      16,    17,    18,    19,    20,    21,   101,    22,    23,     0,
       0,     0,     0,     0,    24,     0,     0,     0,    26,     0,
      27,     0,    28,    29,     0,    30,     0,    31,    32,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,     0,     0,    15,    16,    17,    18,    19,    20,
      21,     0,    22,    23,     0,     0,     0,     0,     0,    24,
      25,     0,     0,    26,     0,    27,     0,    28,    29,     0,
      30,     0,    31,    32,     1,     2,     3,    58,    59,    60,
      61,    62,    63,    64,    11,    12,    13,     0,     0,    15,
      16,    17,    18,    19,    20,    21,   143,    22,    23,     0,
       0,     0,     0,     0,    24,     0,     0,     0,    26,     0,
      27,     0,    28,    29,     0,    30,     0,    31,    32,     1,
       2,     3,    58,    59,    60,    61,    62,    63,    64,    11,
      12,    13,     0,     0,    15,    16,    17,    18,    19,    20,
      21,     0,    22,    23,     0,     0,     0,     0,     0,    24,
       0,     0,     0,    26,     0,    27,     0,    28,    29,     0,
      30,     0,    31,    32,   106,   107,     3,    58,   108,   109,
      61,    62,    63,    64,   110,    12,    13,    83,    84,    15,
      16,    17,    18,    19,    20,    21,     0,    22,    23,     0,
       0,    95,    96,    97,    98,    99,     0,     0,   111,     0,
      27,   197,   107,     3,    58,   108,   109,    61,    62,    63,
      64,   110,    12,    13,    83,    84,    15,    16,    17,    18,
      19,    20,    21,     0,    22,    23,     0,     0,     0,     0,
      97,    98,    99,     0,     0,   111,     0,    27,    83,    84,
       0,    85,    86,    87,    88,     0,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     0,     0,     0,
       0,     0,     0,   168,     0,   169,    83,    84,     0,    85,
      86,    87,    88,     0,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,    83,    84,     0,    85,
      86,    87,    88,   132,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,    83,    84,     0,    85,
      86,    87,    88,   165,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,    83,    84,     0,    85,
      86,    87,    88,   170,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,    83,    84,     0,    85,
      86,    87,    88,   171,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,    83,    84,     0,    85,
      86,    87,    88,   192,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,    83,    84,     0,    85,
      86,    87,    88,   193,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,    83,
      84,   166,    85,    86,    87,    88,     0,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     0,     0,
       0,     0,    83,    84,   168,    85,    86,    87,    88,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     0,    83,    84,   159,    85,    86,    87,    88,     0,
       0,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    83,    84,     0,    85,    86,    87,    88,     0,     0,
       0,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      83,    84,     0,    85,    86,    87,    88,     0,     0,     0,
       0,    92,    93,    94,    95,    96,    97,    98,    99,    83,
      84,     0,    85,    86,    87,    88,    83,    84,     0,    85,
      86,    93,    94,    95,    96,    97,    98,    99,    93,    94,
      95,    96,    97,    98,    99,   -77,     0,     0,     0,     0,
       0,    44,     0,     0,     0,     0,    45,    46
};

static const yytype_int16 yycheck[] =
{
       0,    45,     3,    18,    19,    16,    21,    22,    23,    24,
      38,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    14,     3,    24,     3,    26,     3,     4,    43,
      30,     3,    43,     5,    48,    37,    51,    39,    44,    43,
      41,    45,    34,     0,    44,    25,    46,    25,    44,    49,
      50,    51,    52,    53,    18,    19,    44,    21,    22,    23,
      24,    44,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    43,    43,    45,    45,    44,    78,    43,
      15,    45,    44,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      44,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,   159,    18,    19,    20,    21,
      22,    23,    24,    38,    26,    27,   126,   127,    49,    50,
      44,    33,    34,    67,    68,    37,    44,    39,    44,    41,
      42,    38,    44,     3,    46,    47,    18,    19,    44,    21,
      22,    23,    24,    45,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    45,   166,    44,   168,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    46,    23,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     3,    51,     3,    45,    23,    33,
      39,    45,    45,    37,     3,    39,    23,    41,    42,    41,
      44,    45,    46,    47,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    17,    78,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    31,
     134,   161,   191,    34,    33,   191,    47,    -1,    37,    -1,
      39,    -1,    41,    42,    -1,    44,    45,    46,    47,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    37,    -1,    39,    -1,    41,    42,    -1,
      44,    -1,    46,    47,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    37,    -1,
      39,    -1,    41,    42,    -1,    44,    -1,    46,    47,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      34,    -1,    -1,    37,    -1,    39,    -1,    41,    42,    -1,
      44,    -1,    46,    47,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    37,    -1,
      39,    -1,    41,    42,    -1,    44,    -1,    46,    47,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    37,    -1,    39,    -1,    41,    42,    -1,
      44,    -1,    46,    47,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    18,    19,    18,
      19,    20,    21,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    32,    33,    34,    35,    36,    -1,    -1,    37,    -1,
      39,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    18,    19,    18,    19,    20,    21,
      22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,    -1,
      34,    35,    36,    -1,    -1,    37,    -1,    39,    18,    19,
      -1,    21,    22,    23,    24,    -1,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    45,    18,    19,    -1,    21,
      22,    23,    24,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    18,    19,    -1,    21,
      22,    23,    24,    45,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    18,    19,    -1,    21,
      22,    23,    24,    45,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    18,    19,    -1,    21,
      22,    23,    24,    45,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    18,    19,    -1,    21,
      22,    23,    24,    45,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    18,    19,    -1,    21,
      22,    23,    24,    45,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    18,    19,    -1,    21,
      22,    23,    24,    45,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    18,
      19,    43,    21,    22,    23,    24,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    18,    19,    43,    21,    22,    23,    24,    -1,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    18,    19,    40,    21,    22,    23,    24,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    18,    19,    -1,    21,    22,    23,    24,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      18,    19,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    18,
      19,    -1,    21,    22,    23,    24,    18,    19,    -1,    21,
      22,    30,    31,    32,    33,    34,    35,    36,    30,    31,
      32,    33,    34,    35,    36,    38,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    49,    50
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    18,    19,    20,    21,    22,
      23,    24,    26,    27,    33,    34,    37,    39,    41,    42,
      44,    46,    47,    53,    54,    55,    57,    58,    59,    60,
      65,    66,    67,    69,    44,    49,    50,    68,    70,    44,
      44,    44,    44,    44,    44,    44,    44,    15,     6,     7,
       8,     9,    10,    11,    12,    58,    58,    44,    44,    58,
       3,     4,    59,     3,    41,    62,    63,     0,    43,    65,
       3,     5,    56,    18,    19,    21,    22,    23,    24,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      38,    25,    45,    58,    61,    64,     3,     4,     7,     8,
      13,    37,    69,    25,    58,    70,    58,    58,    58,    58,
      58,    45,    14,    34,    45,     3,    44,    44,    58,    61,
      45,    61,    45,    46,    43,    48,    23,    55,     3,    58,
      58,    58,    58,    25,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    37,    39,    40,
      71,    43,    45,    51,    51,    45,    43,    45,    43,    45,
      45,    45,     3,    45,    23,    58,    58,    45,    45,    63,
       3,    25,    39,    69,    45,    64,    58,    58,    45,     3,
      23,    41,    45,    45,    17,     3,    25,     3,    66,    67
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    53,    54,    54,    55,    55,    56,
      56,    56,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      61,    61,    62,    62,    62,    62,    62,    63,    63,    64,
      64,    65,    66,    66,    67,    68,    68,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    70,    70,    70,    71
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     3,     1,     2,     0,
       1,     2,     1,     4,     4,     4,     4,     4,     3,     4,
       5,     1,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     3,     4,     3,     1,
       1,     4,     3,     6,     6,     3,     5,     4,     3,     4,
       1,     3,     0,     3,     3,     5,     5,     1,     1,     1,
       1,     6,     1,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     4
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
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, SelectParser_t * pParser)
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, SelectParser_t * pParser)
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
                 int yyrule, SelectParser_t * pParser)
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, SelectParser_t * pParser)
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
yyparse (SelectParser_t * pParser)
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
  case 7: /* select_item: '*'  */
#line 75 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                        { pParser->AddItem ( &yyvsp[0] ); }
#line 1679 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 10: /* opt_alias: SEL_TOKEN  */
#line 80 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                        { pParser->AliasLastItem ( &yyvsp[0] ); }
#line 1685 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 11: /* opt_alias: SEL_AS SEL_TOKEN  */
#line 81 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                        { pParser->AliasLastItem ( &yyvsp[0] ); }
#line 1691 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 12: /* select_expr: expr  */
#line 85 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                        { pParser->AddItem ( &yyvsp[0] ); }
#line 1697 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 13: /* select_expr: SEL_AVG '(' expr ')'  */
#line 86 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                        { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_AVG, &yyvsp[-3], &yyvsp[0] ); }
#line 1703 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 14: /* select_expr: SEL_MAX '(' expr ')'  */
#line 87 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                        { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MAX, &yyvsp[-3], &yyvsp[0] ); }
#line 1709 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 15: /* select_expr: SEL_MIN '(' expr ')'  */
#line 88 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                        { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MIN, &yyvsp[-3], &yyvsp[0] ); }
#line 1715 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 16: /* select_expr: SEL_SUM '(' expr ')'  */
#line 89 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                        { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_SUM, &yyvsp[-3], &yyvsp[0] ); }
#line 1721 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 17: /* select_expr: SEL_GROUP_CONCAT '(' expr ')'  */
#line 90 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_CAT, &yyvsp[-3], &yyvsp[0] ); }
#line 1727 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 18: /* select_expr: SEL_GROUPBY '(' ')'  */
#line 91 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                        { pParser->AddItem ( "groupby()", &yyvsp[-2], &yyvsp[0] ); }
#line 1733 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 19: /* select_expr: SEL_COUNT '(' '*' ')'  */
#line 92 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                        { pParser->AddItem ( "count(*)", &yyvsp[-3], &yyvsp[0] ); }
#line 1739 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 20: /* select_expr: SEL_COUNT '(' SEL_DISTINCT SEL_TOKEN ')'  */
#line 95 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                        { pParser->AddItem ( "@distinct", &yyvsp[-4], &yyvsp[0] ); }
#line 1745 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 22: /* expr: '`' select_atom '`'  */
#line 100 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                        { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[-1].m_iEnd; }
#line 1751 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 23: /* expr: '-' expr  */
#line 101 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                        { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1757 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 24: /* expr: TOK_NOT expr  */
#line 102 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1763 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 25: /* expr: expr '+' expr  */
#line 103 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1769 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 26: /* expr: expr '-' expr  */
#line 104 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1775 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 27: /* expr: expr '*' expr  */
#line 105 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1781 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 28: /* expr: expr '/' expr  */
#line 106 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1787 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 29: /* expr: expr '<' expr  */
#line 107 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1793 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 30: /* expr: expr '>' expr  */
#line 108 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1799 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 31: /* expr: expr '&' expr  */
#line 109 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1805 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 32: /* expr: expr '|' expr  */
#line 110 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1811 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 33: /* expr: expr '%' expr  */
#line 111 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1817 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 34: /* expr: expr TOK_DIV expr  */
#line 112 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1823 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 35: /* expr: expr TOK_MOD expr  */
#line 113 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1829 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 36: /* expr: expr TOK_LTE expr  */
#line 114 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1835 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 37: /* expr: expr TOK_GTE expr  */
#line 115 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1841 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 38: /* expr: expr TOK_EQ expr  */
#line 116 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1847 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 39: /* expr: expr TOK_NE expr  */
#line 117 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1853 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 40: /* expr: expr TOK_AND expr  */
#line 118 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1859 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 41: /* expr: expr TOK_OR expr  */
#line 119 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1865 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 42: /* expr: '(' expr ')'  */
#line 120 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1871 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 43: /* expr: '{' consthash '}'  */
#line 121 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1877 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 46: /* expr: json_field TOK_IS TOK_NULL  */
#line 124 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                        { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1883 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 47: /* expr: json_field TOK_IS TOK_NOT TOK_NULL  */
#line 125 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1889 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 48: /* expr: expr TOK_EQ TOK_CONST_STRING  */
#line 126 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                        { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1895 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 51: /* function: SEL_TOKEN '(' arglist ')'  */
#line 135 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                        { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1901 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 52: /* function: SEL_TOKEN '(' ')'  */
#line 136 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1907 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 53: /* function: SEL_MIN '(' expr ',' expr ')'  */
#line 137 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1913 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 54: /* function: SEL_MAX '(' expr ',' expr ')'  */
#line 138 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1919 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 55: /* function: SEL_WEIGHT '(' ')'  */
#line 139 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                        { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1925 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 56: /* function: SEL_TOKEN '(' expr for_loop ')'  */
#line 140 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-4]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1931 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 57: /* function: TOK_FUNC_IN '(' arglist ')'  */
#line 141 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1937 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 58: /* function: TOK_FUNC_RAND '(' ')'  */
#line 142 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                        { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1943 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 59: /* function: TOK_FUNC_RAND '(' arglist ')'  */
#line 143 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1949 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 71: /* comment: SEL_COMMENT_OPEN SEL_OPTION SEL_TOKEN TOK_EQ SEL_TOKEN SEL_COMMENT_CLOSE  */
#line 171 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                {
			pParser->AddOption ( &yyvsp[-3], &yyvsp[-1] );
		}
#line 1957 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 74: /* json_expr: SEL_TOKEN subscript  */
#line 182 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1963 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 76: /* subscript: subscript subkey  */
#line 187 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1969 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 101: /* subkey: '.' ident  */
#line 199 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                        { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1975 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 102: /* subkey: '[' expr ']'  */
#line 200 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1981 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 103: /* subkey: '[' TOK_CONST_STRING ']'  */
#line 201 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                        { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1987 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;

  case 104: /* for_loop: TOK_FOR ident TOK_FUNC_IN json_field  */
#line 205 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"
                                                { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; }
#line 1993 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"
    break;


#line 1997 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxselect.c"

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

#line 208 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxselect.y"


#if _WIN32
#pragma warning(pop)
#endif
