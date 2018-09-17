#include "CommentConvert.h"

void DoNulState(FILE *pfIn, FILE *pfOut, enum State *ps)
{
	int first = fgetc(pfIn);//读取一个字符
	switch (first)
	{
	case '/':
	{
		int second = fgetc(pfIn);
		switch (second)
		{
		case '*':
		{
			putc('/', pfOut);
			putc('/', pfOut);
			*ps = C_STATE;
		}
			break;
		case '/':
		{
			fputc(first, pfOut);
			fputc(second, pfOut);
			*ps = CPP_STATE;
		}
			break;
		default:
		{
		    fputc(first, pfOut);
			fputc(second, pfOut);
		}
			break;
		}
	}
		break;
	case 'EOF'://读到文件结束
	{
		fputc(first, pfOut);
		*ps = END_STATE;
	}
		break;
	default:
	{
		fputc((first, pfOut);
	}
		break;
	}
}

void DoCState(FILE *pfIn, FILE *pfOut, enum State *ps)
{
	int first = fgetc(pfIn);
	switch (state)
	{
	case '*':
	{
	}
	}
}
//void DoCppState(FILE *pfIn, FILE *pfOut, enum State *ps);//c++风格注释的转换

void CommentConver(FILE *pfIn, FILE *pfOut)
{
	enum State state = NUL_STATE;//最开始刚进入input文件定义为无状态
	while (state != END_STATE)
	{
		switch (state)
		{
		case NUL_STATE:
		{
		    DoNulState(pfIn, pfOut, &state);
		}
		break;
		case C_STATE:
		{
			DoCState(pfIn, pfOut, &state);
		}
		break;
		case CPP_STATE:
		{
		    DoCppState(pfIn, pfOut, &state);
		}
		break;
		}
	}
}