%{
#include <stdio.h>
#include "ast.h"

Node* astRoot = NULL;
int yyerror(char* s);
extern int yylex(void);

%}
%union{
    
    Node *node;
    char* strings;
}
%token <strings> HTML
%token <strings> BODY
%token <strings> HEAD
%token <strings> FRAMESET
%token <strings> FRAME
%token <strings> NOFRAME
%token <strings> FORM
%token <strings> INPUT
%token <strings> SELECT
%token <strings> OPTION
%token <strings> TABLE
%token <strings> TD
%token <strings> TH
%token <strings> TR 
%token <strings> THEAD
%token <strings> TBODY 
%token <strings> IMG
%token <strings> A
%token <strings> LINK
%token <strings> UL
%token <strings> OL
%token <strings> LI 
%token <strings> I
%token <strings> SMALL
%token <strings> SUB
%token <strings> SUP
%token <strings> CENTER
%token <strings> FONT
%token <strings> H1
%token <strings> H2
%token <strings> H3
%token <strings> H4
%token <strings> H5
%token <strings> H6
%token <strings> P
%token <strings> HR
%token <strings> BR
%token TEXT
%token <strings> cBODY
%token <strings> cHEAD
%token <strings> cFRAMESET
%token <strings> cFRAME
%token <strings> cNOFRAME
%token <strings> cFORM
%token <strings> cINPUT
%token <strings> cSELECT
%token <strings> cOPTION
%token <strings> cTABLE
%token <strings> cTD
%token <strings> cTH
%token <strings> cTR
%token <strings> cTHEAD
%token <strings> cTBODY 
%token <strings> cIMG
%token <strings> cA
%token <strings> cLINK
%token <strings> cUL
%token <strings> cOL
%token <strings> cLI 
%token <strings> cB
%token <strings> cI
%token <strings> cSMALL
%token <strings> cSUB
%token <strings> cSUP
%token <strings> cCENTER
%token <strings> cFONT
%token <strings> cH1
%token <strings> cH2
%token <strings> cH3
%token <strings> cH4
%token <strings> cH5
%token <strings> cH6
%token <strings> cP
%token <strings> cHR
%token <strings> cBR
%token <strings> cHTML

%type <node> html_doc
%type <node> html_tag
%type <node> html_content
%type <node> head_tag

%type <node> u_tag
%type <node> sup_tag
%type <node> sub_tag
%type <node> small_tag
%type <node> i_tag
%type <node> text_content
%type <node> th_tag
%type <node> table_content
%type <node> font_tag
%type <node> h1_tag
%type <node> h2_tag
%type <node> h3_tag
%type <node> h4_tag
%type <node> h5_tag
%type <node> h6_tag
%type <node> frameset_tag
%type <node> frameset_content_list
%type <node> frameset_content
%type <node> noframe_tag
%type <node> a_tag
%type <node> a_content
%type <node> heading
%type <node> body_tag
%type <node> body_content_list
%type <node> body_content
%type <node> block
%type <node> block_content_list
%type <node> block_content
%type <node> center_tag
%type <node> select_content
%type <node> select_content_list
%type <node> select_tag
%type <node> form_content
%type <node> form_content_list
%type <node> form_tag
%type <node> p_tag
%type <node> li_tag
%type <node> li_tag_list
%type <node> ol_tag
%type <node> option_tag
%type <node> td_tag
%type <node> table_cell
%type <node> tr_tag
%type <node> text_content_list
%type <node> table_content_list
%type <node> text
%type <node> ul_tag
%type <node> head_content
%type <node> table_tag


%start html_doc
%%

html_doc
    : html_tag                                                          { $$ = createHtmlDocumentNode($1); astRoot = $$;}
    ;

html_tag
    : HTML html_content cHTML                                           { $$ = createHtmlTagNode($2, $1, $3); }
    ;

html_content
    : head_tag body_tag                                                 { $$ = createHtmlContentNode($1, $2, NULL); }
    | body_tag                                                          { $$ = createHtmlContentNode(NULL, $1, NULL); }
    | head_tag                                                          { $$ = createHtmlContentNode($1, NULL, NULL); }
    | head_tag frameset_tag                                             { $$ = createHtmlContentNode($1, NULL, $2); }
    ;

head_tag
    : HEAD head_content cHEAD                                           { $$ = createHeadTagNode($2, $1, $3); }
    | HEAD cHEAD                                                        { $$ = createTagSpecifier("HEAD", "cHEAD"); }
    |
    ;

head_content
    : LINK                                                              { $$ = createTagSpecifier("LINK", NULL); }
    ;

frameset_tag
    : FRAMESET frameset_content cFRAMESET                               { $$ = createTagNode($2, $1, $3); }
    | FRAMESET cFRAMESET                                                { $$ = createTagSpecifier("FRAMESET", "cFRAMESET")}
    ;

frameset_content_list
    : frameset_content                                                  { $$ = createFramesetContentNode($1); }
    | frameset_content_list frameset_content                            { $$ = $1 ; addLinkToList ($$, $2); }
    ;

frameset_content
    : FRAME                                                             { $$ = createTagSpecifier("FRAME", NULL); }
    | noframe_tag                                                       { $$ = createNoframeTagNode($1); }
    ; 

noframe_tag
    : NOFRAME body_content_list cNOFRAME                                { $$ = createBodyContentListNode($2, $1, $3); }
    | NOFRAME cNOFRAME                                                  { $$ = createTagSpecifier("NOFRAME", "cNOFRAME"); }
    ;

a_tag
    : A  a_content cA                                                   { $$ = createATagNode($2, $1, $3); }
    | A cA                                                              { $$ = createTagSpecifier("A", "cA"); }

a_content
    : heading                                                           { $$ = createHeadingNode($1); }
    | text                                                              { $$ = createTextNode($1, NULL, NULL); }
    ;

heading
    : H1                                                                { $$ = createHxTagNode($1, NULL, NULL); }
    | H2                                                                { $$ = createHxTagNode($1, NULL, NULL); }
    | H3                                                                { $$ = createHxTagNode($1, NULL, NULL); }
    | H4                                                                { $$ = createHxTagNode($1, NULL, NULL); }
    | H5                                                                { $$ = createHxTagNode($1, NULL, NULL); }
    | H6                                                                { $$ = createHxTagNode($1, NULL, NULL); }
    ;

h1_tag 
    : H1 text cH1                                                       { $$ = createTextNode($1, "H1", "cH1"); }
    ;

h2_tag 
    : H2 text cH2                                                       { $$ = createTextNode($1, "H2", "cH2"); }
    ;

h3_tag 
    : H3 text cH3                                                       { $$ = createTextNode($1, "H3", "cH3"); }
    ;

h4_tag 
    : H4 text cH4                                                       { $$ = createTextNode($1, "H4", "cH4"); }
    ;

h5_tag 
    : H5 text cH5                                                       { $$ = createTextNode($1, "H5", "cH5"); }
    ;

h6_tag 
    : H6 text cH6                                                       { $$ = createTextNode($1, "H6", "cH6"); }
    ;

body_tag
    : BODY body_content_list cBODY                                      { $$ = createBodyContentListNode($2, $1, $3); }
    | BODY cBODY                                                        { $$ = createTagSpecifier( "BODY", cBODY); }

body_content_list
    : body_content                                                      { $$ = createBodyContentNode($1); }
    | body_content_list body_content                                    { $$ = $1; addLinkToList($$, $2); }
    ;

body_content 
    : HR                                                                { $$ = createTagSpecifier("HR", NULL); }
    | block                                                             { $$ = createBlockNode($1); }
    | heading                                                           { $$ = createHeadingNode($1); }
    | text                                                              { $$ = createTextNode($1, NULL, NULL); }
    ;

block
    : block_content_list                                                { $$ = createBlockContentListNode($1); }
    |                                                                   { $$ = createTagSpecifier(NULL, NULL); }
    ;

block_content_list
    : block_content                                                     { $$ = createBlockContentNode($1); }
    | block_content_list block_content                                  { $$ = $1; addLinkToList($$, $2); }
    ;

block_content  
    : center_tag                                                        { $$ = createCenterTagNode($1); }
    | form_tag                                                          { $$ = createFormTagNode($1); }
    | ol_tag                                                            { $$ = createOlTagNode($1); }
    | p_tag                                                             { $$ = createPTagNode($1); }
    | table_tag                                                         { $$ = createTableTagNode($1); }
    | ul_tag                                                            { $$ = createUlTagNode($1); }
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
    : OPTION text cOPTION
    ;

ol_tag
    : OL li_tag cOL
    ;

li_tag 
    : LI text cLI
    ;

p_tag
    : P text cP
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
    : font_tag
    | i_tag
    | small_tag
    | sub_tag
    | sup_tag
    ;

font_tag
    : FONT text cFONT
    ;

i_tag
    : I text cI
    ;

small_tag
    : SMALL text cSMALL
    ;

sub_tag
    : SUB text cSUB
    ;

sup_tag
    : SUP text cSUP
    ;
%%

int yyerror(char * s) 
/* yacc error handler */
{    
	printf ( "%s\n", s); 
	return 0;
}  