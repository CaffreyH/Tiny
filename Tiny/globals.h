#ifndef GLOBALS_H
#define GLOBALS_H

#include<stdio.h>
#define MAXRESERVED 8
#define MAXTOKENLEN 50

int lineno = 0;
int EchoSource = false;
int TraceScan = true;

FILE *source = fopen("../test/test.tiny", "r");
FILE *listing = fopen("../test/myresult.txt", "w+");

//char tokenString[MAXTOKENLEN + 1];

enum TokensType
{
	ENDFILE, ERROR,
	IF, THEN, ELSE, END, REPEAT, UNTIL, READ, WRITE,
	ID, NUM,
	ASSIGN, EQ, LT, PLUS, MINUS, TIMES, OVER, LPAREN, RPAREN, SEMI
};
#endif
