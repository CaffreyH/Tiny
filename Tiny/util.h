#ifndef UTIL_H
#define UTIL_H

#include"globals.h"

#endif
extern FILE *listing;
extern FILE *source;
void printToken(TokensType token, char *tokenString)
{
	switch (token)
	{
	case IF:
	case THEN:
	case ELSE:
	case END:
	case REPEAT:
	case UNTIL:
	case READ:
	case WRITE:
		fprintf(listing, "\treserved word:%s\n", tokenString);
		break;
	case ID:
		fprintf(listing, "\tID, name = %s\n", tokenString);
		break;
	case NUM:
		fprintf(listing, "\tNUM, val = %s\n", tokenString);
		break;
	case ASSIGN:
	case EQ:
	case LT:
	case PLUS:
	case MINUS:
	case TIMES:
	case OVER:
	case LPAREN:
	case RPAREN:
	case SEMI:
		fprintf(listing, "\t%s\n", tokenString);
	}
}