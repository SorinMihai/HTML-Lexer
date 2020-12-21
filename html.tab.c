/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "html.y"

#include <stdio.h>
#include "ast.h"

Node* astRoot = NULL;
int yyerror(char* s);
extern int yylex(void);


#line 81 "html.tab.c"

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
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    HTML = 258,                    /* HTML  */
    BODY = 259,                    /* BODY  */
    HEAD = 260,                    /* HEAD  */
    FRAMESET = 261,                /* FRAMESET  */
    FRAME = 262,                   /* FRAME  */
    NOFRAME = 263,                 /* NOFRAME  */
    FORM = 264,                    /* FORM  */
    INPUT = 265,                   /* INPUT  */
    SELECT = 266,                  /* SELECT  */
    OPTION = 267,                  /* OPTION  */
    TABLE = 268,                   /* TABLE  */
    TD = 269,                      /* TD  */
    TH = 270,                      /* TH  */
    TR = 271,                      /* TR  */
    THEAD = 272,                   /* THEAD  */
    TBODY = 273,                   /* TBODY  */
    IMG = 274,                     /* IMG  */
    A = 275,                       /* A  */
    LINK = 276,                    /* LINK  */
    UL = 277,                      /* UL  */
    OL = 278,                      /* OL  */
    LI = 279,                      /* LI  */
    I = 280,                       /* I  */
    SMALL = 281,                   /* SMALL  */
    SUB = 282,                     /* SUB  */
    SUP = 283,                     /* SUP  */
    CENTER = 284,                  /* CENTER  */
    FONT = 285,                    /* FONT  */
    H1 = 286,                      /* H1  */
    H2 = 287,                      /* H2  */
    H3 = 288,                      /* H3  */
    H4 = 289,                      /* H4  */
    H5 = 290,                      /* H5  */
    H6 = 291,                      /* H6  */
    P = 292,                       /* P  */
    HR = 293,                      /* HR  */
    BR = 294,                      /* BR  */
    TEXT = 295,                    /* TEXT  */
    cBODY = 296,                   /* cBODY  */
    cHEAD = 297,                   /* cHEAD  */
    cFRAMESET = 298,               /* cFRAMESET  */
    cFRAME = 299,                  /* cFRAME  */
    cNOFRAME = 300,                /* cNOFRAME  */
    cFORM = 301,                   /* cFORM  */
    cINPUT = 302,                  /* cINPUT  */
    cSELECT = 303,                 /* cSELECT  */
    cOPTION = 304,                 /* cOPTION  */
    cTABLE = 305,                  /* cTABLE  */
    cTD = 306,                     /* cTD  */
    cTH = 307,                     /* cTH  */
    cTR = 308,                     /* cTR  */
    cTHEAD = 309,                  /* cTHEAD  */
    cTBODY = 310,                  /* cTBODY  */
    cIMG = 311,                    /* cIMG  */
    cA = 312,                      /* cA  */
    cLINK = 313,                   /* cLINK  */
    cUL = 314,                     /* cUL  */
    cOL = 315,                     /* cOL  */
    cLI = 316,                     /* cLI  */
    cB = 317,                      /* cB  */
    cI = 318,                      /* cI  */
    cSMALL = 319,                  /* cSMALL  */
    cSUB = 320,                    /* cSUB  */
    cSUP = 321,                    /* cSUP  */
    cCENTER = 322,                 /* cCENTER  */
    cFONT = 323,                   /* cFONT  */
    cH1 = 324,                     /* cH1  */
    cH2 = 325,                     /* cH2  */
    cH3 = 326,                     /* cH3  */
    cH4 = 327,                     /* cH4  */
    cH5 = 328,                     /* cH5  */
    cH6 = 329,                     /* cH6  */
    cP = 330,                      /* cP  */
    cHR = 331,                     /* cHR  */
    cBR = 332,                     /* cBR  */
    cHTML = 333                    /* cHTML  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "html.y"

    
    Node *node;
    char* strings;

#line 212 "html.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_HTML = 3,                       /* HTML  */
  YYSYMBOL_BODY = 4,                       /* BODY  */
  YYSYMBOL_HEAD = 5,                       /* HEAD  */
  YYSYMBOL_FRAMESET = 6,                   /* FRAMESET  */
  YYSYMBOL_FRAME = 7,                      /* FRAME  */
  YYSYMBOL_NOFRAME = 8,                    /* NOFRAME  */
  YYSYMBOL_FORM = 9,                       /* FORM  */
  YYSYMBOL_INPUT = 10,                     /* INPUT  */
  YYSYMBOL_SELECT = 11,                    /* SELECT  */
  YYSYMBOL_OPTION = 12,                    /* OPTION  */
  YYSYMBOL_TABLE = 13,                     /* TABLE  */
  YYSYMBOL_TD = 14,                        /* TD  */
  YYSYMBOL_TH = 15,                        /* TH  */
  YYSYMBOL_TR = 16,                        /* TR  */
  YYSYMBOL_THEAD = 17,                     /* THEAD  */
  YYSYMBOL_TBODY = 18,                     /* TBODY  */
  YYSYMBOL_IMG = 19,                       /* IMG  */
  YYSYMBOL_A = 20,                         /* A  */
  YYSYMBOL_LINK = 21,                      /* LINK  */
  YYSYMBOL_UL = 22,                        /* UL  */
  YYSYMBOL_OL = 23,                        /* OL  */
  YYSYMBOL_LI = 24,                        /* LI  */
  YYSYMBOL_I = 25,                         /* I  */
  YYSYMBOL_SMALL = 26,                     /* SMALL  */
  YYSYMBOL_SUB = 27,                       /* SUB  */
  YYSYMBOL_SUP = 28,                       /* SUP  */
  YYSYMBOL_CENTER = 29,                    /* CENTER  */
  YYSYMBOL_FONT = 30,                      /* FONT  */
  YYSYMBOL_H1 = 31,                        /* H1  */
  YYSYMBOL_H2 = 32,                        /* H2  */
  YYSYMBOL_H3 = 33,                        /* H3  */
  YYSYMBOL_H4 = 34,                        /* H4  */
  YYSYMBOL_H5 = 35,                        /* H5  */
  YYSYMBOL_H6 = 36,                        /* H6  */
  YYSYMBOL_P = 37,                         /* P  */
  YYSYMBOL_HR = 38,                        /* HR  */
  YYSYMBOL_BR = 39,                        /* BR  */
  YYSYMBOL_TEXT = 40,                      /* TEXT  */
  YYSYMBOL_cBODY = 41,                     /* cBODY  */
  YYSYMBOL_cHEAD = 42,                     /* cHEAD  */
  YYSYMBOL_cFRAMESET = 43,                 /* cFRAMESET  */
  YYSYMBOL_cFRAME = 44,                    /* cFRAME  */
  YYSYMBOL_cNOFRAME = 45,                  /* cNOFRAME  */
  YYSYMBOL_cFORM = 46,                     /* cFORM  */
  YYSYMBOL_cINPUT = 47,                    /* cINPUT  */
  YYSYMBOL_cSELECT = 48,                   /* cSELECT  */
  YYSYMBOL_cOPTION = 49,                   /* cOPTION  */
  YYSYMBOL_cTABLE = 50,                    /* cTABLE  */
  YYSYMBOL_cTD = 51,                       /* cTD  */
  YYSYMBOL_cTH = 52,                       /* cTH  */
  YYSYMBOL_cTR = 53,                       /* cTR  */
  YYSYMBOL_cTHEAD = 54,                    /* cTHEAD  */
  YYSYMBOL_cTBODY = 55,                    /* cTBODY  */
  YYSYMBOL_cIMG = 56,                      /* cIMG  */
  YYSYMBOL_cA = 57,                        /* cA  */
  YYSYMBOL_cLINK = 58,                     /* cLINK  */
  YYSYMBOL_cUL = 59,                       /* cUL  */
  YYSYMBOL_cOL = 60,                       /* cOL  */
  YYSYMBOL_cLI = 61,                       /* cLI  */
  YYSYMBOL_cB = 62,                        /* cB  */
  YYSYMBOL_cI = 63,                        /* cI  */
  YYSYMBOL_cSMALL = 64,                    /* cSMALL  */
  YYSYMBOL_cSUB = 65,                      /* cSUB  */
  YYSYMBOL_cSUP = 66,                      /* cSUP  */
  YYSYMBOL_cCENTER = 67,                   /* cCENTER  */
  YYSYMBOL_cFONT = 68,                     /* cFONT  */
  YYSYMBOL_cH1 = 69,                       /* cH1  */
  YYSYMBOL_cH2 = 70,                       /* cH2  */
  YYSYMBOL_cH3 = 71,                       /* cH3  */
  YYSYMBOL_cH4 = 72,                       /* cH4  */
  YYSYMBOL_cH5 = 73,                       /* cH5  */
  YYSYMBOL_cH6 = 74,                       /* cH6  */
  YYSYMBOL_cP = 75,                        /* cP  */
  YYSYMBOL_cHR = 76,                       /* cHR  */
  YYSYMBOL_cBR = 77,                       /* cBR  */
  YYSYMBOL_cHTML = 78,                     /* cHTML  */
  YYSYMBOL_YYACCEPT = 79,                  /* $accept  */
  YYSYMBOL_html_doc = 80,                  /* html_doc  */
  YYSYMBOL_html_tag = 81,                  /* html_tag  */
  YYSYMBOL_html_content = 82,              /* html_content  */
  YYSYMBOL_head_tag = 83,                  /* head_tag  */
  YYSYMBOL_head_content = 84,              /* head_content  */
  YYSYMBOL_frameset_tag = 85,              /* frameset_tag  */
  YYSYMBOL_frameset_content = 86,          /* frameset_content  */
  YYSYMBOL_noframe_tag = 87,               /* noframe_tag  */
  YYSYMBOL_a_tag = 88,                     /* a_tag  */
  YYSYMBOL_a_content = 89,                 /* a_content  */
  YYSYMBOL_heading = 90,                   /* heading  */
  YYSYMBOL_body_tag = 91,                  /* body_tag  */
  YYSYMBOL_body_content_list = 92,         /* body_content_list  */
  YYSYMBOL_body_content = 93,              /* body_content  */
  YYSYMBOL_block = 94,                     /* block  */
  YYSYMBOL_block_content_list = 95,        /* block_content_list  */
  YYSYMBOL_block_content = 96,             /* block_content  */
  YYSYMBOL_center_tag = 97,                /* center_tag  */
  YYSYMBOL_form_tag = 98,                  /* form_tag  */
  YYSYMBOL_form_content = 99,              /* form_content  */
  YYSYMBOL_select_tag = 100,               /* select_tag  */
  YYSYMBOL_select_content = 101,           /* select_content  */
  YYSYMBOL_option_tag = 102,               /* option_tag  */
  YYSYMBOL_ol_tag = 103,                   /* ol_tag  */
  YYSYMBOL_li_tag = 104,                   /* li_tag  */
  YYSYMBOL_p_tag = 105,                    /* p_tag  */
  YYSYMBOL_table_tag = 106,                /* table_tag  */
  YYSYMBOL_table_content = 107,            /* table_content  */
  YYSYMBOL_tr_tag = 108,                   /* tr_tag  */
  YYSYMBOL_table_cell = 109,               /* table_cell  */
  YYSYMBOL_td_tag = 110,                   /* td_tag  */
  YYSYMBOL_th_tag = 111,                   /* th_tag  */
  YYSYMBOL_ul_tag = 112,                   /* ul_tag  */
  YYSYMBOL_text = 113,                     /* text  */
  YYSYMBOL_text_content = 114,             /* text_content  */
  YYSYMBOL_style = 115,                    /* style  */
  YYSYMBOL_font_tag = 116,                 /* font_tag  */
  YYSYMBOL_i_tag = 117,                    /* i_tag  */
  YYSYMBOL_small_tag = 118,                /* small_tag  */
  YYSYMBOL_sub_tag = 119,                  /* sub_tag  */
  YYSYMBOL_sup_tag = 120                   /* sup_tag  */
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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  131

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   333


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   152,   152,   156,   160,   161,   162,   163,   167,   168,
     169,   173,   177,   178,   187,   188,   192,   193,   197,   198,
     201,   202,   206,   207,   208,   209,   210,   211,   239,   240,
     243,   244,   248,   249,   250,   251,   255,   256,   260,   261,
     265,   266,   267,   268,   269,   270,   274,   277,   281,   282,
     283,   284,   287,   288,   292,   296,   300,   304,   308,   312,
     316,   317,   318,   319,   320,   324,   325,   329,   330,   334,
     338,   342,   346,   350,   351,   352,   353,   357,   358,   359,
     360,   361,   365,   369,   373,   377,   381,   385,   386,   387,
     388
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "HTML", "BODY", "HEAD",
  "FRAMESET", "FRAME", "NOFRAME", "FORM", "INPUT", "SELECT", "OPTION",
  "TABLE", "TD", "TH", "TR", "THEAD", "TBODY", "IMG", "A", "LINK", "UL",
  "OL", "LI", "I", "SMALL", "SUB", "SUP", "CENTER", "FONT", "H1", "H2",
  "H3", "H4", "H5", "H6", "P", "HR", "BR", "TEXT", "cBODY", "cHEAD",
  "cFRAMESET", "cFRAME", "cNOFRAME", "cFORM", "cINPUT", "cSELECT",
  "cOPTION", "cTABLE", "cTD", "cTH", "cTR", "cTHEAD", "cTBODY", "cIMG",
  "cA", "cLINK", "cUL", "cOL", "cLI", "cB", "cI", "cSMALL", "cSUB", "cSUP",
  "cCENTER", "cFONT", "cH1", "cH2", "cH3", "cH4", "cH5", "cH6", "cP",
  "cHR", "cBR", "cHTML", "$accept", "html_doc", "html_tag", "html_content",
  "head_tag", "head_content", "frameset_tag", "frameset_content",
  "noframe_tag", "a_tag", "a_content", "heading", "body_tag",
  "body_content_list", "body_content", "block", "block_content_list",
  "block_content", "center_tag", "form_tag", "form_content", "select_tag",
  "select_content", "option_tag", "ol_tag", "li_tag", "p_tag", "table_tag",
  "table_content", "tr_tag", "table_cell", "td_tag", "th_tag", "ul_tag",
  "text", "text_content", "style", "font_tag", "i_tag", "small_tag",
  "sub_tag", "sup_tag", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333
};
#endif

#define YYPACT_NINF (-57)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,    40,    17,   -57,   116,   -19,   -56,    37,   -57,   -57,
     180,    -5,   -57,     1,     6,     6,   233,   233,   233,   233,
     211,   233,   -57,   -57,   -57,   -57,   -57,   -57,   233,   -57,
     -57,   -57,   -57,   -57,   147,   -57,   -57,   242,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -17,   -57,    11,   -57,   -57,
     -57,    -9,   -57,    -8,   -57,     0,   -57,   -57,   -57,   -57,
      -4,   -57,   -57,   -15,   -57,   -57,   233,   -11,   -13,    -6,
      -3,   -14,    -7,    18,    -1,   -20,   -57,   -57,   -57,   -57,
     -57,    43,   -57,    41,   -57,   233,   -57,    12,   -57,   -57,
     211,   211,   -57,    33,   -57,   -57,   -57,   -57,    26,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,    85,
     -57,    44,   -57,    38,    45,   -57,   -57,   -57,   -57,   -57,
     -57
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    10,     0,     2,     0,     0,     0,     6,     5,     1,
      37,     0,    74,     0,     0,     0,     0,     0,     0,     0,
      37,     0,    22,    23,    24,    25,    26,    27,     0,    32,
      73,    29,    75,    34,     0,    30,    33,    36,    38,    40,
      41,    42,    43,    44,    45,    35,    72,    76,    77,    78,
      79,    80,    81,    11,     9,     0,     3,     0,     7,     4,
      48,     0,    49,     0,    50,     0,    60,    62,    61,    64,
       0,    63,    19,     0,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    31,    39,     8,
      14,     0,    13,     0,    15,     0,    53,     0,    54,    47,
      37,    37,    66,     0,    67,    68,    59,    18,     0,    71,
      56,    83,    84,    85,    86,    46,    82,    58,    17,     0,
      12,     0,    52,     0,     0,    65,    57,    16,    55,    69,
      70
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,    79,    88,     8,   -10,   -57,   -57,    59,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,    86,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -12,   -57,   -57,   -57,   -57,   -57,
     -57,   -57
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     6,     7,    55,    58,    93,    94,    32,
      73,    33,     8,    34,    35,    36,    37,    38,    39,    40,
      63,    64,    97,    98,    41,    77,    42,    43,    70,    71,
     103,   104,   105,    44,    45,    46,    47,    48,    49,    50,
      51,    52
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      62,    75,    53,    95,    79,    80,    81,    82,     1,    84,
      83,    65,    66,    67,   100,   101,    85,     9,    90,    91,
      12,    13,    56,    54,    87,    89,    16,    17,    18,    19,
      76,    21,    22,    23,    24,    25,    26,    27,    99,    96,
      30,     4,   107,    57,     4,     5,   106,   110,   109,    68,
      69,   113,    10,   102,    92,   117,    11,   111,    72,   114,
     122,   112,    12,    13,   108,    14,    15,   116,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   121,   120,   115,   125,   126,   118,   129,
     123,   124,    74,   128,    10,    59,    88,   130,    11,   119,
       0,    78,     0,     0,    12,    13,     0,    14,    15,    87,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,     0,     0,     0,    11,
     127,     0,     0,     0,     0,    12,    13,     0,    14,    15,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    31,     0,     0,
      11,     0,     0,     0,     0,     0,    12,    13,     0,    14,
      15,     0,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     0,    86,    10,
      60,    61,     0,    11,     0,     0,     0,     0,     0,    12,
      13,     0,    14,    15,     0,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,     0,     0,     0,    11,     0,     0,     0,     0,     0,
      12,    13,     0,    14,    15,     0,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    12,    13,     0,    11,     0,     0,    16,    17,
      18,    19,     0,    21,    14,    15,     0,     0,     0,     0,
       0,    20,    30,     0,     0,     0,     0,     0,     0,    28
};

static const yytype_int8 yycheck[] =
{
      10,    13,    21,    12,    16,    17,    18,    19,     3,    21,
      20,    16,    17,    18,    14,    15,    28,     0,     7,     8,
      19,    20,    78,    42,    34,    42,    25,    26,    27,    28,
      24,    30,    31,    32,    33,    34,    35,    36,    46,    48,
      39,     4,    57,     6,     4,     5,    50,    60,    59,    54,
      55,    65,     9,    53,    43,    75,    13,    63,    57,    66,
      48,    64,    19,    20,    76,    22,    23,    68,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    95,    43,    67,    53,    61,    45,    51,
     100,   101,    13,    49,     9,     7,    37,    52,    13,    91,
      -1,    15,    -1,    -1,    19,    20,    -1,    22,    23,   119,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,     9,    -1,    -1,    -1,    13,
      45,    -1,    -1,    -1,    -1,    19,    20,    -1,    22,    23,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,     9,    41,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    19,    20,    -1,    22,
      23,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,     9,
      10,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    19,
      20,    -1,    22,    23,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
       9,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,
      19,    20,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,     9,    19,    20,    -1,    13,    -1,    -1,    25,    26,
      27,    28,    -1,    30,    22,    23,    -1,    -1,    -1,    -1,
      -1,    29,    39,    -1,    -1,    -1,    -1,    -1,    -1,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    80,    81,     4,     5,    82,    83,    91,     0,
       9,    13,    19,    20,    22,    23,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    41,    88,    90,    92,    93,    94,    95,    96,    97,
      98,   103,   105,   106,   112,   113,   114,   115,   116,   117,
     118,   119,   120,    21,    42,    84,    78,     6,    85,    91,
      10,    11,    93,    99,   100,    16,    17,    18,    54,    55,
     107,   108,    57,    89,    90,   113,    24,   104,   104,   113,
     113,   113,   113,    93,   113,   113,    41,    93,    96,    42,
       7,     8,    43,    86,    87,    12,    48,   101,   102,    46,
      14,    15,    53,   109,   110,   111,    50,    57,   113,    59,
      60,    63,    64,    65,    66,    67,    68,    75,    45,    92,
      43,   113,    48,    93,    93,    53,    61,    45,    49,    51,
      52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    79,    80,    81,    82,    82,    82,    82,    83,    83,
      83,    84,    85,    85,    86,    86,    87,    87,    88,    88,
      89,    89,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    93,    93,    93,    93,    94,    94,    95,    95,
      96,    96,    96,    96,    96,    96,    97,    98,    99,    99,
      99,    99,   100,   100,   101,   102,   103,   104,   105,   106,
     107,   107,   107,   107,   107,   108,   108,   109,   109,   110,
     111,   112,   113,   114,   114,   114,   114,   115,   115,   115,
     115,   115,   116,   117,   118,   119,   120,    93,    93,    93,
      93
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     1,     1,     2,     3,     2,
       0,     1,     3,     2,     1,     1,     3,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     2,     1,     1,     1,     1,     1,     0,     1,     2,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     1,
       1,     0,     3,     2,     1,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     3,     2,     1,     1,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     1,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
        yyerror (YY_("syntax error: cannot back up")); \
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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
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
  case 2: /* html_doc: html_tag  */
#line 152 "html.y"
                                                                        { (yyval.node) = createHtmlDocumentNode((yyvsp[0].node)); astRoot = (yyval.node);}
#line 1449 "html.tab.c"
    break;

  case 3: /* html_tag: HTML html_content cHTML  */
#line 156 "html.y"
                                                                        { (yyval.node) = createHtmlTagNode((yyvsp[-1].node), (yyvsp[-2].strings), (yyvsp[0].strings)); }
#line 1455 "html.tab.c"
    break;

  case 4: /* html_content: head_tag body_tag  */
#line 160 "html.y"
                                                                        { (yyval.node) = createHtmlContentNode((yyvsp[-1].node), (yyvsp[0].node), NULL); }
#line 1461 "html.tab.c"
    break;

  case 5: /* html_content: body_tag  */
#line 161 "html.y"
                                                                        { (yyval.node) = createHtmlContentNode(NULL, (yyvsp[0].node), NULL); }
#line 1467 "html.tab.c"
    break;

  case 6: /* html_content: head_tag  */
#line 162 "html.y"
                                                                        { (yyval.node) = createHtmlContentNode((yyvsp[0].node), NULL, NULL); }
#line 1473 "html.tab.c"
    break;

  case 7: /* html_content: head_tag frameset_tag  */
#line 163 "html.y"
                                                                        { (yyval.node) = createHtmlContentNode((yyvsp[-1].node), NULL, (yyvsp[0].node)); }
#line 1479 "html.tab.c"
    break;

  case 8: /* head_tag: HEAD head_content cHEAD  */
#line 167 "html.y"
                                                                        { (yyval.node) = createHeadTagNode((yyvsp[-1].node), (yyvsp[-2].strings), (yyvsp[0].strings)); }
#line 1485 "html.tab.c"
    break;

  case 9: /* head_tag: HEAD cHEAD  */
#line 168 "html.y"
                                                                        { (yyval.node) = createTagSpecifier("HEAD", "cHEAD"); }
#line 1491 "html.tab.c"
    break;

  case 11: /* head_content: LINK  */
#line 173 "html.y"
                                                                        { (yyval.node) = createTagSpecifier("LINK", NULL); }
#line 1497 "html.tab.c"
    break;

  case 12: /* frameset_tag: FRAMESET frameset_content cFRAMESET  */
#line 177 "html.y"
                                                                        { (yyval.node) = createTagNode((yyvsp[-1].node), (yyvsp[-2].strings), (yyvsp[0].strings)); }
#line 1503 "html.tab.c"
    break;

  case 13: /* frameset_tag: FRAMESET cFRAMESET  */
#line 178 "html.y"
                                                                        { (yyval.node) = createTagSpecifier("FRAMESET", "cFRAMESET")}
#line 1509 "html.tab.c"
    break;

  case 14: /* frameset_content: FRAME  */
#line 187 "html.y"
                                                                        { (yyval.node) = createTagSpecifier("FRAME", NULL); }
#line 1515 "html.tab.c"
    break;

  case 15: /* frameset_content: noframe_tag  */
#line 188 "html.y"
                                                                        { (yyval.node) = createNoframeTagNode((yyvsp[0].node)); }
#line 1521 "html.tab.c"
    break;

  case 16: /* noframe_tag: NOFRAME body_content_list cNOFRAME  */
#line 192 "html.y"
                                                                        { (yyval.node) = createBodyContentListNode((yyvsp[-1].node), (yyvsp[-2].strings), (yyvsp[0].strings)); }
#line 1527 "html.tab.c"
    break;

  case 17: /* noframe_tag: NOFRAME cNOFRAME  */
#line 193 "html.y"
                                                                        { (yyval.node) = createTagSpecifier("NOFRAME", "cNOFRAME"); }
#line 1533 "html.tab.c"
    break;

  case 18: /* a_tag: A a_content cA  */
#line 197 "html.y"
                                                                        { (yyval.node) = createATagNode((yyvsp[-1].node), (yyvsp[-2].strings), (yyvsp[0].strings)); }
#line 1539 "html.tab.c"
    break;

  case 19: /* a_tag: A cA  */
#line 198 "html.y"
                                                                        { (yyval.node) = createTagSpecifier("A", "cA"); }
#line 1545 "html.tab.c"
    break;

  case 20: /* a_content: heading  */
#line 201 "html.y"
                                                                        { (yyval.node) = createHeadingNode((yyvsp[0].node)); }
#line 1551 "html.tab.c"
    break;

  case 21: /* a_content: text  */
#line 202 "html.y"
                                                                        { (yyval.node) = createTextNode((yyvsp[0].node), NULL, NULL); }
#line 1557 "html.tab.c"
    break;

  case 22: /* heading: H1  */
#line 206 "html.y"
                                                                        { (yyval.node) = createHxTagNode((yyvsp[0].strings), NULL, NULL); }
#line 1563 "html.tab.c"
    break;

  case 23: /* heading: H2  */
#line 207 "html.y"
                                                                        { (yyval.node) = createHxTagNode((yyvsp[0].strings), NULL, NULL); }
#line 1569 "html.tab.c"
    break;

  case 24: /* heading: H3  */
#line 208 "html.y"
                                                                        { (yyval.node) = createHxTagNode((yyvsp[0].strings), NULL, NULL); }
#line 1575 "html.tab.c"
    break;

  case 25: /* heading: H4  */
#line 209 "html.y"
                                                                        { (yyval.node) = createHxTagNode((yyvsp[0].strings), NULL, NULL); }
#line 1581 "html.tab.c"
    break;

  case 26: /* heading: H5  */
#line 210 "html.y"
                                                                        { (yyval.node) = createHxTagNode((yyvsp[0].strings), NULL, NULL); }
#line 1587 "html.tab.c"
    break;

  case 27: /* heading: H6  */
#line 211 "html.y"
                                                                        { (yyval.node) = createHxTagNode((yyvsp[0].strings), NULL, NULL); }
#line 1593 "html.tab.c"
    break;

  case 28: /* body_tag: BODY body_content_list cBODY  */
#line 239 "html.y"
                                                                        { (yyval.node) = createBodyContentListNode((yyvsp[-1].node), (yyvsp[-2].strings), (yyvsp[0].strings)); }
#line 1599 "html.tab.c"
    break;

  case 29: /* body_tag: BODY cBODY  */
#line 240 "html.y"
                                                                        { (yyval.node) = createTagSpecifier( "BODY", cBODY); }
#line 1605 "html.tab.c"
    break;

  case 30: /* body_content_list: body_content  */
#line 243 "html.y"
                                                                        { (yyval.node) = createBodyContentNode((yyvsp[0].node)); }
#line 1611 "html.tab.c"
    break;

  case 31: /* body_content_list: body_content_list body_content  */
#line 244 "html.y"
                                                                        { (yyval.node) = (yyvsp[-1].node); addLinkToList((yyval.node), (yyvsp[0].node)); }
#line 1617 "html.tab.c"
    break;

  case 32: /* body_content: HR  */
#line 248 "html.y"
                                                                        { (yyval.node) = createTagSpecifier("HR", NULL); }
#line 1623 "html.tab.c"
    break;

  case 33: /* body_content: block  */
#line 249 "html.y"
                                                                        { (yyval.node) = createBlockNode((yyvsp[0].node)); }
#line 1629 "html.tab.c"
    break;

  case 34: /* body_content: heading  */
#line 250 "html.y"
                                                                        { (yyval.node) = createHeadingNode((yyvsp[0].node)); }
#line 1635 "html.tab.c"
    break;

  case 35: /* body_content: text  */
#line 251 "html.y"
                                                                        { (yyval.node) = createTextNode((yyvsp[0].node), NULL, NULL); }
#line 1641 "html.tab.c"
    break;

  case 36: /* block: block_content_list  */
#line 255 "html.y"
                                                                        { (yyval.node) = createBlockContentListNode((yyvsp[0].node)); }
#line 1647 "html.tab.c"
    break;

  case 37: /* block: %empty  */
#line 256 "html.y"
                                                                        { (yyval.node) = createTagSpecifier(NULL, NULL); }
#line 1653 "html.tab.c"
    break;

  case 38: /* block_content_list: block_content  */
#line 260 "html.y"
                                                                        { (yyval.node) = createBlockContentNode((yyvsp[0].node)); }
#line 1659 "html.tab.c"
    break;

  case 39: /* block_content_list: block_content_list block_content  */
#line 261 "html.y"
                                                                        { (yyval.node) = (yyvsp[-1].node); addLinkToList((yyval.node), (yyvsp[0].node)); }
#line 1665 "html.tab.c"
    break;

  case 40: /* block_content: center_tag  */
#line 265 "html.y"
                                                                        { (yyval.node) = createCenterTagNode((yyvsp[0].node)); }
#line 1671 "html.tab.c"
    break;

  case 41: /* block_content: form_tag  */
#line 266 "html.y"
                                                                        { (yyval.node) = createFormTagNode((yyvsp[0].node)); }
#line 1677 "html.tab.c"
    break;

  case 42: /* block_content: ol_tag  */
#line 267 "html.y"
                                                                        { (yyval.node) = createOlTagNode((yyvsp[0].node)); }
#line 1683 "html.tab.c"
    break;

  case 43: /* block_content: p_tag  */
#line 268 "html.y"
                                                                        { (yyval.node) = createPTagNode((yyvsp[0].node)); }
#line 1689 "html.tab.c"
    break;

  case 44: /* block_content: table_tag  */
#line 269 "html.y"
                                                                        { (yyval.node) = createTableTagNode((yyvsp[0].node)); }
#line 1695 "html.tab.c"
    break;

  case 45: /* block_content: ul_tag  */
#line 270 "html.y"
                                                                        { (yyval.node) = createUlTagNode((yyvsp[0].node)); }
#line 1701 "html.tab.c"
    break;


#line 1705 "html.tab.c"

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
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 390 "html.y"


int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  
