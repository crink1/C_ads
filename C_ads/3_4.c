#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));//16
	printf("%d\n", sizeof(a + 0));//4/8 ���ֽ�
	printf("%d\n", sizeof(*a));//4
	printf("%d\n", sizeof(a + 1));//4/8
	printf("%d\n", sizeof(a[1]));//4
	printf("%d\n", sizeof(&a));//4/8
	printf("%d\n", sizeof(*&a));
	printf("%d\n", sizeof(&a + 1));//4/8
	printf("%d\n", sizeof(&a[0]));//ȡ����Ԫ�صĵ�ַ 4/8
	printf("%d\n", sizeof(&a[0] + 1));//�ڶ���Ԫ�صĵ�ַ

	return 0;
}