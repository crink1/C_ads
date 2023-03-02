#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char* arr[] = { "abcdef", "hehe", "qwer" };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", arr[i]);
	}
	return 0;
}