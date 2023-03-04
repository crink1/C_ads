#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a + 0));//4/8 个字节
	printf("%d\n", sizeof(*a));//4
	printf("%d\n", sizeof(a + 1));//4/8
	printf("%d\n", sizeof(a[1]));//4
	printf("%d\n", sizeof(&a));//4/8
	printf("%d\n", sizeof(*&a));
	printf("%d\n", sizeof(&a + 1));//4/8
	printf("%d\n", sizeof(&a[0]));//取出首元素的地址 4/8
	printf("%d\n", sizeof(&a[0] + 1));//第二个元素的地址

	return 0;
}