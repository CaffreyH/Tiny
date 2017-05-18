// Tiny.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "globals.h"           //input and output file
//#include "util.h"			  //printToken 方法
#include "scan.h"

int _tmain(int argc, _TCHAR* argv[])
{
	fprintf(listing, "%s\n", "*****************************************");
	fprintf(listing, "%s\n", "TINY Lexical Analazer Result:");
	fprintf(listing, "%s\n", "*****************************************");
	TokensType token;
	do
	{
		token = getToken();
	} while (token != ENDFILE);
	fprintf(listing, "\t%s\n", "EOF");
	fclose(listing);
	printf("%s\n", "已完成扫描并保存到myresult.txt...");
	return 0;
}

