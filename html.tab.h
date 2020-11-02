/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_HTML_TAB_H_INCLUDED
# define YY_YY_HTML_TAB_H_INCLUDED
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
    B = 280,                       /* B  */
    I = 281,                       /* I  */
    SMALL = 282,                   /* SMALL  */
    SUB = 283,                     /* SUB  */
    SUP = 284,                     /* SUP  */
    CENTER = 285,                  /* CENTER  */
    FONT = 286,                    /* FONT  */
    H1 = 287,                      /* H1  */
    H2 = 288,                      /* H2  */
    H3 = 289,                      /* H3  */
    H4 = 290,                      /* H4  */
    H5 = 291,                      /* H5  */
    H6 = 292,                      /* H6  */
    P = 293,                       /* P  */
    HR = 294,                      /* HR  */
    BR = 295,                      /* BR  */
    TEXT = 296,                    /* TEXT  */
    cBODY = 297,                   /* cBODY  */
    cHEAD = 298,                   /* cHEAD  */
    cFRAMESET = 299,               /* cFRAMESET  */
    cFRAME = 300,                  /* cFRAME  */
    cNOFRAME = 301,                /* cNOFRAME  */
    cFORM = 302,                   /* cFORM  */
    cINPUT = 303,                  /* cINPUT  */
    cSELECT = 304,                 /* cSELECT  */
    cOPTION = 305,                 /* cOPTION  */
    cTABLE = 306,                  /* cTABLE  */
    cTD = 307,                     /* cTD  */
    cTH = 308,                     /* cTH  */
    cTR = 309,                     /* cTR  */
    cTHEAD = 310,                  /* cTHEAD  */
    cTBODY = 311,                  /* cTBODY  */
    cIMG = 312,                    /* cIMG  */
    cA = 313,                      /* cA  */
    cLINK = 314,                   /* cLINK  */
    cUL = 315,                     /* cUL  */
    cOL = 316,                     /* cOL  */
    cLI = 317,                     /* cLI  */
    cB = 318,                      /* cB  */
    cI = 319,                      /* cI  */
    cSMALL = 320,                  /* cSMALL  */
    cSUB = 321,                    /* cSUB  */
    cSUP = 322,                    /* cSUP  */
    cCENTER = 323,                 /* cCENTER  */
    cFONT = 324,                   /* cFONT  */
    cH1 = 325,                     /* cH1  */
    cH2 = 326,                     /* cH2  */
    cH3 = 327,                     /* cH3  */
    cH4 = 328,                     /* cH4  */
    cH5 = 329,                     /* cH5  */
    cH6 = 330,                     /* cH6  */
    cP = 331,                      /* cP  */
    cHR = 332,                     /* cHR  */
    cBR = 333,                     /* cBR  */
    cHTML = 334                    /* cHTML  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_HTML_TAB_H_INCLUDED  */
