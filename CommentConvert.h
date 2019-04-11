#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include <Windows.h>

enum State{
	NUL_STATE, //ÎŢ×˘ĘÍ×´ĚŹ
	C_STATE, //C×˘ĘÍ×´ĚŹ
	CPP_STATE,//C++×˘ĘÍ×´ĚŹ
	END_STATE, //˝áĘř×´ĚŹ
};

void CommentConver(FILE *pfIn, FILE *pfOut);


void DoNulState(FILE *pfIn, FILE *pfOut, enum State *ps);
void DoCState(FILE *pfIn, FILE *pfOut, enum State *ps);
void DoCppState(FILE *pfIn, FILE *pfOut, enum State *ps);
