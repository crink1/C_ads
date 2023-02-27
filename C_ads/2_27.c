#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
	{
		printf("小端字节序");
	}
	else
	{
		printf("大端字节序");
	}
	return 0;
}