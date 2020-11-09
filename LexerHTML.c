// LexerHTML.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <errno.h>
#include "html.tab.h"
#include "symbols.h"


extern int yyparse(void);
extern FILE* yyin;
extern int yydebug;
const char* lexUnits[] = {
    "BODY",
    "FRAMESET ",
    "FRAME",
    "NOFRAME",
    "FORM",
    "INPUT",
    "SELECT",
    "OPTION",
    "TABLE",
    "TD",
    "TH",
    "TR",
    "THEAD",
    "TBODY",
    "IMG",
    "A",
    "LINK",
    "UL",
    "OL",
    "LI",
    "B",
    "I",
    "SMALL",
    "SUB",
    "SUP",
    "CENTER",
    "FONT",
    "H1",
    "H2",
    "H3",
    "H4",
    "H5",
    "H6",
    "P",
    "HR",
    "BR",
    "HTML",
    "TEXT",
    "HEAD",
    "cHEAD",
    "CBODY",
    "cFRAMESET ",
    "cFRAME",
    "cNOFRAME",
    "cFORM",
    "cINPUT",
    "cSELECT",
    "cOPTION",
    "cTABLE",
    "cTD",
    "cTH",
    "cTR",
    "cTHEAD",
    "cTBODY",
    "cIMG",
    "cA",
    "cLINK",
    "cUL",
    "cOL",
    "cLI",
    "cB",
    "cI",
    "cSMALL",
    "cSUB",
    "cSUP",
    "cCENTER",
    "cFONT",
    "cH1",
    "cH2",
    "cH3",
    "cH4",
    "cH5",
    "cH6",
    "cP",
    "cHR",
    "cBR",
    "cHTML", };
    
int main()
{
    yydebug = 1;
    int tokenValue = 0;
    yyin = fopen("input.csrc", "rt");
    if (yyin != NULL)
    {
        int result = yyparse();
        switch (result)
        {
        case 0:
            printf("Parse successfull. \n");
            break;
        case 1:
            printf("Invalid input encountered \n");
            break;
        case 2:
            printf("Out of memory \n");
            break;
        default:
            break;
        }
    
        fclose(yyin);
    }
    else
    {
        printf("Fisier inexistent");
    }

}

