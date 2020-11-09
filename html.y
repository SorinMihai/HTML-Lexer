%{
#include <stdio.h>
int yyerror(char * s);
extern int yylex(void);
%}
%token HTML
%token BODY
%token HEAD
%token FRAMESET
%token FRAME
%token NOFRAME
%token FORM
%token INPUT
%token SELECT
%token OPTION
%token TABLE
%token TD
%token TH
%token TR 
%token THEAD
%token TBODY 
%token IMG
%token A
%token LINK
%token UL
%token OL
%token LI 
%token B
%token I
%token SMALL
%token SUB
%token SUP
%token CENTER
%token FONT
%token H1
%token H2
%token H3
%token H4
%token H5
%token H6
%token P
%token HR
%token BR
%token TEXT
%token cBODY
%token cHEAD
%token cFRAMESET
%token cFRAME
%token cNOFRAME
%token cFORM
%token cINPUT
%token cSELECT
%token cOPTION
%token cTABLE
%token cTD
%token cTH
%token cTR
%token cTHEAD
%token cTBODY 
%token cIMG
%token cA
%token cLINK
%token cUL
%token cOL
%token cLI 
%token cB
%token cI
%token cSMALL
%token cSUB
%token cSUP
%token cCENTER
%token cFONT
%token cH1
%token cH2
%token cH3
%token cH4
%token cH5
%token cH6
%token cP
%token cHR
%token cBR
%token cHTML

%start html_doc
%%

html_doc
    : html_tag
    ;

html_tag
    : HTML html_content cHTML
    ;

html_content
    : head_tag body_tag
    | head_tag frameset_tag
    ;

head_tag
    : HEAD head_content cHEAD 
    | HEAD cHEAD
    ;

head_content
    : LINK 
    ;

frameset_tag
    : FRAMESET frameset_content cFRAMESET
    ;

frameset_content
    : FRAME
    | noframe_tag
    ; 

noframe_tag
    : NOFRAME body_content cNOFRAME
    ;

a_tag
    : A  a_content cA 
    ;

a_content
    : heading
    | text
    ;

heading
    : H1
    | H2
    | H3
    | H4
    | H5
    | H6
    ;

body_tag
    : B TEXT cB
    ;

body_tag
    : BODY body_content cBODY
    ;

block
    : block_content
    ;

block_content
    : center_tag
    | form_tag
    | ol_tag
    | ul_tag
    | table_tag
    | p_tag
    ;

center_tag
    : CENTER body_content cCENTER

form_tag
    : FORM form_content cFORM
    ;

form_content
    : INPUT
    | body_content
    | select_tag
    |

select_tag
    : SELECT select_content cSELECT
    | SELECT cSELECT
    ;

select_content
    : option_tag
    ;

option_tag
    : OPTION TEXT cOPTION
    ;

ol_tag
    : OL li_tag cOL
    ;

li_tag 
    : LI TEXT cLI
    ;

p_tag
    : P TEXT cP
    ;

table_tag
    : TABLE table_content cTABLE
    ;

table_content
    : THEAD
    | cTHEAD
    | TBODY
    | tr_tag
    | cTBODY
    ;

tr_tag
    : TR table_cell cTR
    | TR cTR
    ;

table_cell
    : td_tag
    | th_tag
    ;

td_tag
    : TD body_content cTD
    ;

th_tag
    : TH body_content cTH
    ;

ul_tag
    : UL li_tag cUL
    ;

text
    : text_content
    ;

text_content
    : BR
    | IMG
    | a_tag
    | style
    ;

style
    : b_tag 
    | font_tag
    | i_tag
    | small_tag
    | sub_tag
    | sup_tag
    ;

b_tag 
    : B TEXT cB
    ;

font_tag
    : FONT TEXT cFONT
    ;

i_tag
    : I TEXT cI
    ;

small_tag
    : SMALL TEXT cSMALL
    ;

sub_tag
    : SUB TEXT cSUB
    ;

sup_tag
    : SUP TEXT cSUP
    ;

body_content
    : HR
    | heading
    | block 
    | text 
    ;
%%

    
