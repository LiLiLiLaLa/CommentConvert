#define _CRT_SECURE_NO_WARNINGS

#include "CommentConvert.h"

void test()
{
	FILE* pFIn = fopen("input.c", "r");//��input.c�ļ�
	FILE* pFOut = fopen("output.c", "w");//д��
	if (NULL == pFIn)
	{
		perror("open file for read.");//����ļ�����Ϊ���򱨴�
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