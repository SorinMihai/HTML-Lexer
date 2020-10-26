// LexerHTML.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <symbols.h>

extern FILE* yyin;
extern int yylex(void);
const char* lexUnits[] = {
    " BODY",
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

    " CBODY",
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
    int tokenValue = 0;
    yyin = fopen("input.csrc", "rt");
    if (yyin != NULL)
    {
        while ((tokenValue = yylex()) != END)
        {
            printf(" -> TOKEN ID: %d; Token Value: %s \n", tokenValue, lexUnits[tokenValue]);
        }
    }
    else
    {
        printf("Fisierul de intrare nu poate fi deschis. Erorare: %d", errno);
    }

}

