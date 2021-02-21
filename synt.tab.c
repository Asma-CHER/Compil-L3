
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "synt.y"

#include "stdio.h"
#include "string.h"
#include "stdlib.h" 

char sauv[20];
char sauv2[20];
char sauv3[20];
char sauvcst[20];
char sauvcst1[20];
char sauv4[20];
char sauv5[20]="";
char sauv6[20];
char sauv7[20]="";
char sauv8[20]="";
int var=0;

char op4[20];

int qc=0;

char tmp [20];
char tmp2 [20];
char op [20];
char op1 [20];
char op2[20];
char op3[20];
char opt[20];

int sauv_deb=0 , sauv_bz=0;
int	ligne = 1;  



/* Line 189 of yacc.c  */
#line 108 "synt.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     dolare = 258,
     mc_include = 259,
     mc_inout = 260,
     mc_arithme = 261,
     red_ouv = 262,
     red_ferm = 263,
     mc_algo = 264,
     mc_deb = 265,
     mc_fin = 266,
     mc_var = 267,
     mc_const = 268,
     mc_Tableau = 269,
     mc_entier = 270,
     mc_reel = 271,
     mc_chaine = 272,
     idf = 273,
     mc_ecrire = 274,
     mc_lire = 275,
     cstReel = 276,
     cstEntierNegatif = 277,
     cstEntierPositif = 278,
     pvg = 279,
     vg = 280,
     aff = 281,
     dp = 282,
     croch_ferm = 283,
     croch_ouv = 284,
     parent_ouv = 285,
     parent_ferm = 286,
     cstChaine = 287,
     mc_fonction = 288,
     mc_return = 289,
     plus = 290,
     mult = 291,
     sust = 292,
     divi = 293,
     egal = 294,
     diff = 295,
     supEgal = 296,
     infEgal = 297,
     mc_faire = 298,
     mc_fait = 299,
     mc_tanque = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 34 "synt.y"

int     entier;
char*   chaine;



/* Line 214 of yacc.c  */
#line 196 "synt.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 208 "synt.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   178

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNRULES -- Number of states.  */
#define YYNSTATES  201

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    11,    14,    16,    17,    23,    25,    27,
      30,    32,    33,    35,    37,    39,    44,    50,    59,    64,
      69,    73,    75,    79,    81,    83,    85,    87,    91,    94,
      96,    97,    99,   101,   103,   105,   107,   109,   114,   119,
     121,   123,   127,   129,   133,   135,   137,   139,   141,   143,
     145,   148,   151,   153,   155,   157,   159,   161,   162,   166,
     171,   175,   177,   179,   181,   183,   185,   187,   189,   192,
     198,   206,   212,   218,   222,   224,   226,   230,   234,   240,
     242,   247,   249,   251,   255,   257,   260,   261,   272,   283,
     294,   296,   298,   302,   303,   307,   309,   311,   313,   316,
     318,   319,   324,   330,   332,   334,   336,   340
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    48,     9,    18,    12,    86,    51,    60,
      -1,    49,    48,    -1,    49,    -1,    -1,     3,     4,     7,
      50,     8,    -1,     5,    -1,     6,    -1,    52,    51,    -1,
      52,    -1,    -1,    53,    -1,    54,    -1,    55,    -1,    57,
      27,    59,    24,    -1,    13,    57,    27,    59,    24,    -1,
      14,    18,    29,    23,    28,    27,    59,    24,    -1,    18,
      29,    23,    28,    -1,    18,    29,    18,    28,    -1,    18,
      25,    57,    -1,    18,    -1,    18,    25,    58,    -1,    18,
      -1,    15,    -1,    16,    -1,    17,    -1,    10,    61,    11,
      -1,    62,    61,    -1,    62,    -1,    -1,    63,    -1,    77,
      -1,    78,    -1,    71,    -1,    80,    -1,    81,    -1,    64,
      26,    65,    24,    -1,    56,    26,    65,    24,    -1,    18,
      -1,    66,    -1,    66,    68,    65,    -1,    69,    -1,    67,
      68,    69,    -1,    69,    -1,    35,    -1,    36,    -1,    37,
      -1,    38,    -1,    18,    -1,    70,    84,    -1,    70,    21,
      -1,    32,    -1,    56,    -1,    83,    -1,    35,    -1,    37,
      -1,    -1,    72,    61,    44,    -1,    76,    73,    31,    43,
      -1,    74,    75,    69,    -1,    69,    -1,    39,    -1,    41,
      -1,    40,    -1,    42,    -1,     8,    -1,     7,    -1,    45,
      30,    -1,    19,    30,    32,    31,    24,    -1,    19,    30,
      32,    25,    58,    31,    24,    -1,    19,    30,    58,    31,
      24,    -1,    20,    30,    79,    31,    24,    -1,    18,    25,
      79,    -1,    18,    -1,    56,    -1,    56,    25,    79,    -1,
      34,    69,    24,    -1,    82,    30,    58,    31,    24,    -1,
      18,    -1,    82,    30,    58,    31,    -1,    22,    -1,    23,
      -1,    10,    61,    11,    -1,    87,    -1,    87,    87,    -1,
      -1,    33,    88,    30,    89,    31,    27,    91,    12,    94,
      85,    -1,    33,    88,    30,    89,    31,    27,    92,    12,
      94,    85,    -1,    33,    88,    30,    89,    31,    27,    93,
      12,    94,    85,    -1,    18,    -1,    90,    -1,    90,    25,
      89,    -1,    -1,    18,    27,    96,    -1,    15,    -1,    16,
      -1,    17,    -1,    95,    94,    -1,    95,    -1,    -1,    97,
      27,    96,    24,    -1,    13,    97,    27,    96,    24,    -1,
      15,    -1,    16,    -1,    17,    -1,    18,    25,    97,    -1,
      18,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    51,    51,    53,    53,    53,    54,    55,    56,    59,
      59,    59,    61,    62,    63,    65,    66,    67,    69,    72,
      79,    80,    83,    85,    90,    91,    92,    96,    97,    97,
      97,    98,    99,   100,   101,   102,   103,   104,   110,   112,
     113,   113,   113,   115,   120,   121,   122,   123,   124,   125,
     127,   128,   129,   130,   131,   132,   132,   132,   134,   140,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   157,
     158,   159,   161,   162,   163,   165,   165,   167,   168,   169,
     171,   175,   176,   179,   182,   182,   182,   183,   184,   185,
     186,   187,   187,   187,   188,   191,   192,   193,   195,   195,
     195,   196,   197,   202,   203,   204,   210,   211
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "dolare", "mc_include", "mc_inout",
  "mc_arithme", "red_ouv", "red_ferm", "mc_algo", "mc_deb", "mc_fin",
  "mc_var", "mc_const", "mc_Tableau", "mc_entier", "mc_reel", "mc_chaine",
  "idf", "mc_ecrire", "mc_lire", "cstReel", "cstEntierNegatif",
  "cstEntierPositif", "pvg", "vg", "aff", "dp", "croch_ferm", "croch_ouv",
  "parent_ouv", "parent_ferm", "cstChaine", "mc_fonction", "mc_return",
  "plus", "mult", "sust", "divi", "egal", "diff", "supEgal", "infEgal",
  "mc_faire", "mc_fait", "mc_tanque", "$accept", "S", "SUIT_BIBL", "BIBL",
  "TYPE_BIBL", "SUIT_DEC", "DEC", "DEC_VAR_SIMPLE", "DEC_CONST",
  "DEC_TABLEAU", "CASE_TABLEAU", "LISTE_IDF", "LISTE_IDF_ECRIRE",
  "TYPE_VAR", "CORPS", "LISTE_INST", "INST", "AFFECTATION", "IDF_AFFEC",
  "SUIT_OPERATION", "OPERATION", "AA", "OPERATEUR", "OPERAND", "P_M",
  "BOUCLE", "A_WHILE", "COND", "A_OPT", "OPERATEUR_LOGIQUE", "A_COND",
  "ECRIRE", "LIRE", "LISTE_LIRE", "RETURN", "APPEL_FONC", "IDF",
  "APPEL_FONC2", "CST_ENTIER", "CORPS_FONC", "LIST_FONC", "FONC",
  "IDF_FONC", "LIST_PARAMETRE", "PARAMETRE", "mc_entier_FONC",
  "mc_reel_FONC", "mc_chaine_FONC", "SUIT_DEC_FONC", "DEC_FONC",
  "TYPE_VAR_FONC", "LISTE_IDF_FONC", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    49,    50,    50,    51,
      51,    51,    52,    52,    52,    53,    54,    55,    56,    56,
      57,    57,    58,    58,    59,    59,    59,    60,    61,    61,
      61,    62,    62,    62,    62,    62,    62,    63,    63,    64,
      65,    65,    65,    66,    67,    68,    68,    68,    68,    69,
      69,    69,    69,    69,    69,    70,    70,    70,    71,    72,
      73,    74,    75,    75,    75,    75,    75,    75,    76,    77,
      77,    77,    78,    79,    79,    79,    79,    80,    81,    82,
      83,    84,    84,    85,    86,    86,    86,    87,    87,    87,
      88,    89,    89,    89,    90,    91,    92,    93,    94,    94,
      94,    95,    95,    96,    96,    96,    97,    97
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     7,     2,     1,     0,     5,     1,     1,     2,
       1,     0,     1,     1,     1,     4,     5,     8,     4,     4,
       3,     1,     3,     1,     1,     1,     1,     3,     2,     1,
       0,     1,     1,     1,     1,     1,     1,     4,     4,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     0,     3,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     5,
       7,     5,     5,     3,     1,     1,     3,     3,     5,     1,
       4,     1,     1,     3,     1,     2,     0,    10,    10,    10,
       1,     1,     3,     0,     3,     1,     1,     1,     2,     1,
       0,     4,     5,     1,     1,     1,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     0,     0,     4,     0,     1,     0,     3,     0,
       0,     7,     8,     0,    86,     6,     0,    11,    84,    90,
       0,     0,     0,    21,     0,    10,    12,    13,    14,     0,
      85,    93,     0,     0,     0,    30,     2,     9,     0,     0,
       0,    91,     0,     0,    20,    39,     0,     0,    57,     0,
       0,     0,    29,    31,     0,    34,    30,    57,    32,    33,
      35,    36,     0,    24,    25,    26,     0,     0,     0,    93,
       0,     0,     0,     0,     0,    49,    52,    55,    56,    53,
       0,     0,     0,    54,    68,    57,    27,    28,    57,     0,
      61,     0,     0,     0,    15,   103,   104,   105,    94,     0,
      92,    16,     0,     0,     0,    23,     0,     0,    74,    75,
       0,    77,    51,    81,    82,    50,     0,     0,    40,     0,
      44,     0,    58,     0,    67,    66,    62,    64,    63,    65,
      57,     0,    95,    96,    97,     0,     0,     0,     0,    19,
      18,     0,     0,     0,     0,     0,     0,     0,     0,    38,
      45,    46,    47,    48,    57,    57,    37,    59,    60,     0,
     100,   100,   100,     0,    22,     0,    69,    71,    73,    76,
      72,    80,    41,    43,    78,     0,   107,     0,    99,     0,
       0,     0,    17,     0,     0,     0,    30,    87,    98,     0,
      88,    89,    70,     0,   106,     0,     0,     0,    83,   101,
     102
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    13,    24,    25,    26,    27,    28,
      79,    29,   107,    66,    36,    51,    52,    53,    54,   117,
     118,   119,   154,   120,    81,    55,    56,    91,    92,   130,
      57,    58,    59,   110,    60,    61,    82,    83,   115,   187,
      17,    18,    20,    40,    41,   135,   136,   137,   177,   178,
      98,   179
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -159
static const yytype_int16 yypact[] =
{
      13,    41,    82,    43,    13,    76,  -159,    66,  -159,    69,
      73,  -159,  -159,    78,    55,  -159,    71,    33,    55,  -159,
      60,    74,    75,    70,    81,    33,  -159,  -159,  -159,    67,
    -159,    79,    77,    72,    74,    -8,  -159,  -159,    46,    80,
      65,    83,    46,    86,  -159,    47,    68,    84,    -3,    85,
      87,    89,    -8,  -159,    90,  -159,    -8,    -3,  -159,  -159,
    -159,  -159,    88,  -159,  -159,  -159,    93,    49,    92,    79,
      96,    94,    30,    -5,   103,    47,  -159,  -159,  -159,  -159,
      99,    50,    95,  -159,  -159,    -3,  -159,  -159,    -3,    58,
    -159,    97,     1,   106,  -159,  -159,  -159,  -159,  -159,    52,
    -159,  -159,   100,    98,   101,   105,    19,   102,    -1,   107,
     104,  -159,  -159,  -159,  -159,  -159,   106,   110,    22,    22,
     113,   114,  -159,    62,  -159,  -159,  -159,  -159,  -159,  -159,
      -3,   108,  -159,  -159,  -159,    91,   119,   128,    46,  -159,
    -159,   106,   106,   117,   118,   103,   103,   120,   112,  -159,
    -159,  -159,  -159,  -159,    -3,    -3,  -159,  -159,  -159,   121,
      36,    36,    36,   122,  -159,   116,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,  -159,  -159,   130,   124,   140,    36,   126,
     140,   140,  -159,   131,   127,   130,    -8,  -159,  -159,    49,
    -159,  -159,  -159,    49,  -159,   145,   133,   134,  -159,  -159,
    -159
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -159,  -159,   155,  -159,  -159,   135,  -159,  -159,  -159,  -159,
     -35,     4,   -86,   -39,  -159,   -50,  -159,  -159,  -159,   -84,
    -159,  -159,   -13,   -43,  -159,  -159,  -159,  -159,  -159,  -159,
    -159,  -159,  -159,   -67,  -159,  -159,   -34,  -159,  -159,  -100,
    -159,   143,  -159,   109,  -159,  -159,  -159,  -159,  -142,  -159,
    -158,  -152
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -80
static const yytype_int16 yytable[] =
{
      50,    62,    87,    70,   121,    80,    89,   131,   124,   125,
      45,    46,    47,   105,    90,    75,     1,    50,    62,   180,
     181,    50,    62,   184,   145,    32,    48,   106,    72,    76,
     148,   196,    77,   194,    78,   197,   188,    49,    44,   109,
     126,   127,   128,   129,   142,     5,    21,    22,   103,   175,
     143,    23,     7,   104,   176,   164,   165,   150,   151,   152,
     153,    63,    64,    65,    95,    96,    97,   132,   133,   134,
     172,   112,   113,   114,    11,    12,    72,   -79,   168,   169,
     190,   191,     6,     9,    10,    14,    15,   158,    16,    19,
      31,    35,    23,    33,    38,    34,    68,    39,    73,   163,
      86,    43,   122,   160,    42,   157,   155,    67,    69,    71,
     109,   109,   173,    85,    74,    84,    88,    94,    93,    99,
     101,   108,   102,   111,   105,   116,   139,   138,   123,   140,
     141,   161,   146,   144,   149,   147,   195,   -42,   156,   159,
     162,   166,   167,   171,   170,   174,   182,   183,   176,   185,
     186,    50,    62,   189,   193,   192,   198,   199,   200,     8,
      37,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100
};

static const yytype_int16 yycheck[] =
{
      35,    35,    52,    42,    88,    48,    56,    93,     7,     8,
      18,    19,    20,    18,    57,    18,     3,    52,    52,   161,
     162,    56,    56,   175,    25,    21,    34,    32,    29,    32,
     116,   189,    35,   185,    37,   193,   178,    45,    34,    74,
      39,    40,    41,    42,    25,     4,    13,    14,    18,    13,
      31,    18,     9,    23,    18,   141,   142,    35,    36,    37,
      38,    15,    16,    17,    15,    16,    17,    15,    16,    17,
     154,    21,    22,    23,     5,     6,    29,    30,   145,   146,
     180,   181,     0,     7,    18,    12,     8,   130,    33,    18,
      30,    10,    18,    18,    27,    25,    31,    18,    30,   138,
      11,    29,    44,    12,    27,    43,   119,    27,    25,    23,
     145,   146,   155,    26,    30,    30,    26,    24,    30,    27,
      24,    18,    28,    24,    18,    30,    28,    27,    31,    28,
      25,    12,    25,    31,    24,    31,   186,    24,    24,    31,
      12,    24,    24,    31,    24,    24,    24,    31,    18,    25,
      10,   186,   186,    27,    27,    24,    11,    24,    24,     4,
      25,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    47,    48,    49,     4,     0,     9,    48,     7,
      18,     5,     6,    50,    12,     8,    33,    86,    87,    18,
      88,    13,    14,    18,    51,    52,    53,    54,    55,    57,
      87,    30,    57,    18,    25,    10,    60,    51,    27,    18,
      89,    90,    27,    29,    57,    18,    19,    20,    34,    45,
      56,    61,    62,    63,    64,    71,    72,    76,    77,    78,
      80,    81,    82,    15,    16,    17,    59,    27,    31,    25,
      59,    23,    29,    30,    30,    18,    32,    35,    37,    56,
      69,    70,    82,    83,    30,    26,    11,    61,    26,    61,
      69,    73,    74,    30,    24,    15,    16,    17,    96,    27,
      89,    24,    28,    18,    23,    18,    32,    58,    18,    56,
      79,    24,    21,    22,    23,    84,    30,    65,    66,    67,
      69,    65,    44,    31,     7,     8,    39,    40,    41,    42,
      75,    58,    15,    16,    17,    91,    92,    93,    27,    28,
      28,    25,    25,    31,    31,    25,    25,    31,    58,    24,
      35,    36,    37,    38,    68,    68,    24,    43,    69,    31,
      12,    12,    12,    59,    58,    58,    24,    24,    79,    79,
      24,    31,    65,    69,    24,    13,    18,    94,    95,    97,
      94,    94,    24,    31,    97,    25,    10,    85,    94,    27,
      85,    85,    24,    27,    97,    61,    96,    96,    11,    24,
      24
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 51 "synt.y"
    {printf("syntaxe correcte");          	            YYACCEPT;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 55 "synt.y"
    { inserelb("inout");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 56 "synt.y"
    { inserelb("arithme");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 61 "synt.y"
    {insertCST("non");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 62 "synt.y"
    {insertCST("oui");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 63 "synt.y"
    {insertCST("non");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 67 "synt.y"
    {inserelp((yyvsp[(2) - (8)].chaine));insererTy(sauvcst,(yyvsp[(4) - (8)].entier));;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 69 "synt.y"
    {if (strcmp(sauv4,"")==0) {if (rechercheType((yyvsp[(1) - (4)].chaine))==0) printf("erreur semantique : %s est non declaree a la ligne %d \n",(yyvsp[(1) - (4)].chaine),ligne);}
			                                                           else {if ((recherchevarfonc(sauv4,(yyvsp[(1) - (4)].chaine))==-1)&&(recherchevarpara(sauv4,(yyvsp[(1) - (4)].chaine))==-1)) printf("erreur semantique : %s est non declaree a la ligne %d \n",(yyvsp[(1) - (4)].chaine),ligne);}
			                                                           if ((yyvsp[(3) - (4)].entier)>recherchTaille((yyvsp[(1) - (4)].chaine))) printf("erreur semantique : depassement de la taille du tableau %s a la ligne %d\n",(yyvsp[(1) - (4)].chaine),ligne);;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 72 "synt.y"
    {if (strcmp(sauv4,"")==0) {if (rechercheType((yyvsp[(1) - (4)].chaine))==0) printf("erreur semantique : %s est non declaree a la ligne %d \n",(yyvsp[(1) - (4)].chaine),ligne);
						                                                              if (rechercheType((yyvsp[(3) - (4)].chaine))==0) printf("erreur semantique : %s est non declaree a la ligne %d \n",(yyvsp[(3) - (4)].chaine),ligne);}
						                                     else {if ((recherchevarfonc(sauv4,(yyvsp[(1) - (4)].chaine))==-1)&&(recherchevarpara(sauv4,(yyvsp[(1) - (4)].chaine))==-1)) printf("erreur semantique : %s est non declaree a la ligne %d \n",(yyvsp[(1) - (4)].chaine),ligne);
						               					     if ((recherchevarfonc(sauv4,(yyvsp[(3) - (4)].chaine))==-1)&&(recherchevarpara(sauv4,(yyvsp[(3) - (4)].chaine))==-1)) printf("erreur semantique : %s est non declaree a la ligne %d \n",(yyvsp[(1) - (4)].chaine),ligne);};}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 79 "synt.y"
    {inserelp((yyvsp[(1) - (3)].chaine));;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 80 "synt.y"
    {inserelp((yyvsp[(1) - (1)].chaine));;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 83 "synt.y"
    {if(strcmp(sauv5,"")!=0) insertlc((yyvsp[(1) - (3)].chaine));if (strcmp(sauv4,"")==0) {if (rechercheType((yyvsp[(1) - (3)].chaine))==0) printf("erreur semantique : %s est non declaree a la ligne %d \n",(yyvsp[(1) - (3)].chaine),ligne);}
                      else {if ((recherchevarfonc(sauv4,(yyvsp[(1) - (3)].chaine))==-1)&&(recherchevarpara(sauv4,(yyvsp[(1) - (3)].chaine))==-1)) printf("erreur semantique : %s est non declaree a la ligne %d \n",(yyvsp[(1) - (3)].chaine),ligne);};}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 85 "synt.y"
    {if(strcmp(sauv5,"")!=0) insertlc((yyvsp[(1) - (1)].chaine)); if (strcmp(sauv4,"")==0) {if (rechercheType((yyvsp[(1) - (1)].chaine))==0) printf("erreur semantique : %s est non declaree a la ligne %d \n",(yyvsp[(1) - (1)].chaine),ligne);}
			        else {if ((recherchevarfonc(sauv4,(yyvsp[(1) - (1)].chaine))==-1)&&(recherchevarpara(sauv4,(yyvsp[(1) - (1)].chaine))==-1)) printf("erreur semantique : %s est non declaree a la ligne %d \n",(yyvsp[(1) - (1)].chaine),ligne);};}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 90 "synt.y"
    { insererTy("entier",-1); strcpy(sauvcst,"entier"); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 91 "synt.y"
    { insererTy("reel",-1); strcpy(sauvcst,"reel");;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 92 "synt.y"
    { insererTy("chaine",-1); strcpy(sauvcst,"chaine");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 98 "synt.y"
    { if (recherchebibl("arithme")==-1) printf("erreur semantique : absence de la declaration de la bibliotheque Arithme a ligne %d \n",ligne);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 99 "synt.y"
    { if (recherchebibl("inout")==-1) printf("erreur semantique : absence de la declaration de la bibliotheque InOut a ligne %d \n",ligne);;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 100 "synt.y"
    { if (recherchebibl("inout")==-1) printf("erreur semantique : absence de la declaration de la bibliotheque InOut a ligne %d \n",ligne);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 104 "synt.y"
    {if (strcmp(sauv4,"")==0) 
			                                             {if (rechercheType(sauv7)==0) printf("erreur semantique : %s est non declaree a la ligne %d \n",sauv7,ligne);}
													else {if ((recherchevarfonc(sauv4,sauv7)==-1)&&(recherchevarpara(sauv4,sauv7)==-1)) printf("erreur semantique : %s est non declaree a la ligne %d \n",sauv7,ligne);}
			                                              if (rechconst(sauv7)==0) printf("erreur semantique : modification d'une valeur constante a la ligne %d\n",ligne); 
			                                        if(strcmp(sauv6,"boucle")==0) quadr("=","temp_operation","vide",sauv7);
													checkcompatibilite();strcpy(sauv7,"");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 112 "synt.y"
    { strcpy(sauv7,(yyvsp[(1) - (1)].chaine));insertlcp(sauv7); strcpy(op4,(yyvsp[(1) - (1)].chaine));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 115 "synt.y"
    { strcpy(op2,op3); if (strcmp(sauv,"divi")==0) {if(strcmp(sauv2,"int")==0) {if (strcmp(sauv3,"0")==0) {printf(" division par 0 a la ligne %d \n", ligne); strcpy(sauv,""); strcpy(sauv2,""); strcpy(sauv3,""); }
																 } }   if (strcmp(sauv8,"")!=0) insertlcp(sauv8);   
                                   quadr(opt,op1,op2,"temp_operation");
								   ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 120 "synt.y"
    {strcpy(op1,op3);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 121 "synt.y"
    {strcpy(opt,"+");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 122 "synt.y"
    {strcpy(opt,"*");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 123 "synt.y"
    {strcpy(opt,"-");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 124 "synt.y"
    {strcpy(sauv,"divi");strcpy(opt,"/");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 125 "synt.y"
    {if (strcmp(sauv7,"")!=0) strcpy(sauv8,(yyvsp[(1) - (1)].chaine)); strcpy(op3,(yyvsp[(1) - (1)].chaine)); if (strcmp(sauv4,"")==0) {if (rechercheType((yyvsp[(1) - (1)].chaine))==0) printf("erreur semantique : %s est non declaree a la ligne %d \n",(yyvsp[(1) - (1)].chaine),ligne);}
					                 else {if ((recherchevarfonc(sauv4,(yyvsp[(1) - (1)].chaine))==-1)&&(recherchevarpara(sauv4,(yyvsp[(1) - (1)].chaine))==-1)) printf("erreur semantique : %s est non declaree a la ligne %d \n",(yyvsp[(1) - (1)].chaine),ligne);};}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 127 "synt.y"
    {  strcpy(sauv2,"int"); sprintf(tmp2,"%d",sauv_deb);;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 128 "synt.y"
    {sprintf(op3,"%d",(yyvsp[(2) - (2)].chaine)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 129 "synt.y"
    {sprintf(op3,"%d",(yyvsp[(1) - (1)].entier));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 134 "synt.y"
    {
			                                sprintf(tmp2,"%d",sauv_deb);
											quadr("BR",tmp2,"vide", "vide");
											sprintf(tmp,"%d",qc); 
											 ajour_quad(sauv_bz,1,tmp);
											;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 140 "synt.y"
    {
											sauv_bz=qc;								
											quadr(op, "",op1, op2);
                                            strcpy(sauv6,"boucle");											
			                               ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 145 "synt.y"
    {strcpy(op2,op3);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 146 "synt.y"
    {strcpy(op1,op3);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 147 "synt.y"
    {strcpy(op,"BNE");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 148 "synt.y"
    {strcpy(op,"BL");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 149 "synt.y"
    {strcpy(op,"BE");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 150 "synt.y"
    {strcpy(op,"BLE");;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 151 "synt.y"
    {strcpy(op,"BLE");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 152 "synt.y"
    {strcpy(op,"BGE");;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 153 "synt.y"
    { sauv_deb=qc;;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 163 "synt.y"
    {if (strcmp(sauv4,"")==0) {if (rechercheType((yyvsp[(1) - (1)].chaine))==0) printf("erreur semantique : %s est non declaree a la ligne %d \n",(yyvsp[(1) - (1)].chaine),ligne);}
					         else {if ((recherchevarfonc(sauv4,(yyvsp[(1) - (1)].chaine))==-1)&&(recherchevarpara(sauv4,(yyvsp[(1) - (1)].chaine))==-1)) printf("erreur semantique : %s est non declaree a la ligne %d \n",(yyvsp[(1) - (1)].chaine),ligne);};}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 167 "synt.y"
    {comparType(sauv4,op4);}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 168 "synt.y"
    {var=checkcallfonc(sauv5); strcpy(sauv5,"");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 169 "synt.y"
    { strcpy(sauv5,(yyvsp[(1) - (1)].chaine));;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 171 "synt.y"
    {var=checkcallfonc(sauv5); strcpy(sauv5,"");;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 175 "synt.y"
    { if ((yyvsp[(1) - (1)].entier)==0) strcpy(sauv3,"0"); sprintf(op3,"%d",(yyvsp[(1) - (1)].entier));;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 176 "synt.y"
    {if ((yyvsp[(1) - (1)].entier)==0) strcpy(sauv3,"0"); sprintf(op3,"%d",(yyvsp[(1) - (1)].entier));;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 183 "synt.y"
    {insererFonc(sauv4);strcpy(sauv4,"");;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 184 "synt.y"
    {insererFonc(sauv4);strcpy(sauv4,"");;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 185 "synt.y"
    {insererFonc(sauv4);strcpy(sauv4,"");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 186 "synt.y"
    {strcpy(sauv4,(yyvsp[(1) - (1)].chaine));;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 188 "synt.y"
    {insertpara((yyvsp[(1) - (3)].chaine),sauvcst1);;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 191 "synt.y"
    {insertFonc(sauv4,"entier");insertparafonc(sauv4);;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 192 "synt.y"
    {insertFonc(sauv4,"reel");insertparafonc(sauv4);;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 193 "synt.y"
    {insertFonc(sauv4,"chaine");insertparafonc(sauv4);;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 202 "synt.y"
    { insertlv(sauv4,"entier") ;strcpy(sauvcst1,"entier"); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 203 "synt.y"
    { insertlv(sauv4,"reel") ;strcpy(sauvcst1,"reel");;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 204 "synt.y"
    { insertlv(sauv4,"chaine") ; strcpy(sauvcst1,"chaine");;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 210 "synt.y"
    {inserelpf((yyvsp[(1) - (3)].chaine));;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 211 "synt.y"
    {inserelpf((yyvsp[(1) - (1)].chaine));;}
    break;



/* Line 1455 of yacc.c  */
#line 2048 "synt.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 215 "synt.y"


main () 
{
yyparse();
Afficher();
Afficherfonc();
afficher_qdr();

} 
yywrap()
{}

incrementer() 
{
  ligne++;
}



