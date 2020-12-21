
%{
    #include "html.tab.h"
%}

%%

"<html>"      {return(HTML);}
"<body>"      {return(BODY);}
"<frameset>"  {return(FRAMESET);}
"<frame>"     {return(FRAME);}
"<noframe>"   {return(NOFRAME);}
"<form>"      {return(FORM);}
"<input>"     {return(INPUT);}
"<select>"    {return(SELECT);}
"<option>"    {return(OPTION);}
"<table>"     {return(TABLE);}
"<td>"        {return(TD);}
"<th>"        {return(TH);}
"<thead>"     {return(THEAD);}
"<tbody>"     {return(TBODY);}
"<img>"       {return(IMG);}
"<a>"         {return(A);}
"<link>"      {return(LINK);}
"<ul>"        {return(UL);}
"<ol>"        {return(OL);}
"<li>"        {return(LI);}
"<b>"         {return(B);}
"<i>"         {return(I);}
"<small>"     {return(SMALL);}
"<sup>"       {return(SUP);}
"<sub>"       {return(SUB);}
"<center>"    {return(CENTER);}
"<font>"      {return(FONT);}
"<h1>"        {return(H1);}
"<h2>"        {return(H2);}
"<h3>"        {return(H3);}
"<h4>"        {return(H4);}
"<h5>"        {return(H5);}
"<h6>"        {return(H6);}
"<p>"         {return(P);}
"<hr>"        {return(HR);}
"<br>"        {return(BR);}
"</html>"      {return(cHTML);}
"</body>"      {return(cBODY);}
"</frameset>"  {return(cFRAMESET);}
"</frame>"     {return(cFRAME);}
"</noframe>"   {return(cNOFRAME);}
"</form>"      {return(cFORM);}
"</input>"     {return(cINPUT);}
"</select>"    {return(cSELECT);}
"</option>"    {return(cOPTION);}
"</table>"     {return(cTABLE);}
"</td>"        {return(cTD);}
"</th>"        {return(cTH);}
"</thead>"     {return(cTHEAD);}
"</tbody>"     {return(cTBODY);}
"</img>"       {return(cIMG);}
"</a>"         {return(cA);}
"</link>"      {return(cLINK);}
"</ul>"        {return(cUL);}
"</ol>"        {return(cOL);}
"</li>"        {return(cLI);}
"</b>"         {return(cB);}
"</i>"         {return(cI);}
"</small>"     {return(cSMALL);}
"</sup>"       {return(cSUP);}
"</sub>"       {return(cSUB);}
"</center>"    {return(cCENTER);}
"</font>"      {return(cFONT);}
"</h1>"        {return(cH1);}
"</h2>"        {return(cH2);}
"</h3>"        {return(cH3);}
"</h4>"        {return(cH4);}
"</h5>"        {return(cH5);}
"</h6>"        {return(cH6);}
"</p>"         {return(cP);}
"</hr>"        {return(cHR);}
"</br>"        {return(cBR);}
. {} 
%%

 yywrap()
 {
    return (1);
 }
