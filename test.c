#define _CRT_SECURE_NO_WARNINGS

#include "CommentConvert.h"

void test()
{
	FILE* pFIn = fopen("input.c", "r");//读input.c文件
	FILE* pFOut = fopen("output.c", "w");//写出
	if (NULL == pFIn)
	{
		perror("open file for read.");//如果文件内容为空则报错
	}
	if (pFOut == NULL)
	{
		perror("open file for read.");
	}
	CommentConver(pFIn, pFOut);
}

int main(void)
{
	test();
	system("pause");
	return 0;
}