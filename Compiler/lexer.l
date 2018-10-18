%option noyywrap case-insensitive

%{
	#pragma warning (disable: 4005)

	#include <iostream>
	#include <cmath>
	#include <string>
	using namespace std;

	extern void yyerror(const char*);

	#include "parser.h"
%}

%s BTWMODE
NUMB	([0-9]+)|([0-9]*\.[0-9]+)

%%

"add"				{ return ADD; }
"constraint"		{ return CONSTRAINT; }
"alter"				{ return ALTER; }
"column"			{ return COLUMN; }
"table"				{ return TABLE; }
"all"				{ return ALL; }
<BTWMODE>AND        { BEGIN INITIAL; return AND; }
"and"				{ return ANDOP; }
"any"				{ return ANY; }
"as"				{ return AS; }
"asc"				{ return ASC; }
"between"			{ BEGIN BTWMODE; return BETWEEN; }
"case"				{ return CASE; }
"check"				{ return CHECK; }
"create"			{ return CREATE; }
"database"			{ return DATABASE; }
"index"				{ return INDEX; }
"or"				{ return OR; }
"replace"			{ return REPLACE; }
"view"				{ return VIEW; }
"procedure"			{ return PROCEDURE; }
"unique"			{ return UNIQUE; }
"not"				{ return NOT; }
"!"					{ return NOT; }

			/* Operators */
[-+&~|^/%*(),.;]	{ return yytext[0]; }

"&&"				{ return ANDOP; }
"||"				{ return OR; }

"="				    { yylval = 4; return COMPARISON; } /* =4 <=>12 >2 >=6 <1 <= <>*/
"<=>"				{ yylval = 12; return COMPARISON; }
">"					{ yylval = 2; return COMPARISON; }
">="				{ yylval = 6; return COMPARISON; }
"<"					{ yylval = 1; return COMPARISON; }
"<="				{ yylval = 5; return COMPARISON; }
"!="					|
"<>"				{ yylval = 3; return COMPARISON; }
 


{NUMB}			{ yylval = atof(yytext); return NUM; }
[\n]			{ return '\n'; }
[ \t]			{ /* empty */ }
"quit"			{ yyterminate(); }
.				{	/*error handling */		yyerror("unknown word");}

