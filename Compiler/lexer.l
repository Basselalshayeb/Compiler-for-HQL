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

NUMB	([0-9]+)|([0-9]*\.[0-9]+)

%%

"add"				{ return ADD; }
"constraint"		{ return CONSTRAINT; }
"alter"				{ return ALTER; }
"column"			{ return COLUMN; }
"table"				{ return TABLE; }
"all"				{ return ALL; }
"and"				{ return AND; }
"any"				{ return ANY; }
"as"				{ return AS; }
"asc"				{ return ASC; }
"between"			{ return BETWEEN; }
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



{NUMB}			{ yylval = atof(yytext); return NUM; }
[\n]			{ return '\n'; }
[ \t]			{ /* empty */ }
"quit"			{ yyterminate(); }
.				{	/*error handling */		yyerror("unknown word");}

