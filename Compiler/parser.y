%defines "parser.h"

%{
	#include <cmath>
	#include <cstdio>
	#include <string>
	#include <iostream>

	#pragma warning (disable: 4005)
	
	// this function will be generated
	// by flex
	extern int yylex(); // lexical analyzer
	 
	 // we have to code this function
	extern void yyerror(const char*);

	using namespace std;
%}

%define api.value.type { double }


%token NUM
%token ADD
%token CONSTRAINT
%token ALTER
%token COLUMN
%token TABLE
%token ALL
%token AND
%token ANDOP
%token ANY
%token AS
%token ASC
%token BETWEEN
%token CASE
%token CHECK
%token CREATE
%token DATABASE
%token INDEX
%token OR
%token REPLACE
%token VIEW
%token PROCEDURE
%token UNIQUE
%token COMPARISON
%token NOT

%left COMPARISON /* = <> < > <= >= <=> */

%%		/* the grammars here */

input: %empty
	| input exp
	| input '\n'
	;

exp: ADD			 { cout<<"ADD"<<endl; }
   | CONSTRAINT      { cout<<"CONSTRAINT"<<endl; }
   | ALTER			 { cout<<"ALTER"<<endl; }	
   | COLUMN          { cout<<"COLUMN"<<endl; }
   | TABLE			 { cout<<"TABLE"<<endl; }
   | ALL			{ cout<<"ALL"<<endl; }
   | AND			{ cout<<"AND"<<endl; }
   | ANDOP			{ cout<<"ANDOP"<<endl;}
   | ANY			{ cout<<"ANY"<<endl; }
   | AS				{ cout<<"AS"<<endl; }
   | ASC			{ cout<<"ASC"<<endl; }
   | BETWEEN	    { cout<<"BETWEEN"<<endl; }
   | CASE			{ cout<<"CASE"<<endl; }
   | CHECK			{ cout<<"CHECK"<<endl; }
   | CREATE			{ cout<<"CREATE"<<endl; }
   | DATABASE		{ cout<<"DATABASE"<<endl; }
   | INDEX			{ cout<<"INDEX"<<endl; }
   | OR				{ cout<<"OR"<<endl; }
   | REPLACE		{ cout<<"REPLACE"<<endl; }
   | VIEW			{ cout<<"VIEW"<<endl; }
   | PROCEDURE		{ cout<<"PROCEDURE"<<endl; }
   | UNIQUE			{ cout<<"UNIQUE"<<endl; }
   | NOT			{ cout<<"NOT"<<endl; }
   | COMPARISON		{ cout<<"COMPARISON"<<$1<<endl; }
   ;

%%
