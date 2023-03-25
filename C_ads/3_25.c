#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//malloc
//calloc
//realloc - 调整申请的堆区内存的大小的
//realloc也可以像malloc一样申请空间
//#include <stdio.h>
//
//int main()
//{
//	realloc(NULL, 20);//malloc(20);
//	return 0;
//}
//


//柔性数组

//struct S
//{
//	int n;
//	char c;
//	int arr[];//柔性数组成员
//};


//err
//struct SA
//{
//	int arr[];//柔性数组成员
//};

#include <string.h>
#include <errno.h>
#include <stdlib.h>
//
//struct S
//{
//	int n;
//	char c;
//	int arr[0];//柔性数组成员
//};
//
//int main()
//{
//	//      8               + 40
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10*sizeof(int));
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	ps->n = 100;
//	ps->c = 'w';
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", ps->arr[i]);
//	}
//	//调整arr数组的大小
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//	if (ptr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	else
//	{
//		ps = ptr;
//	}
//	//使用
//	//...
//	
//	//释放
//	free(ps);
//	ps = NULL;
//
//	//printf("%d\n", sizeof(struct S));//
//
//	return 0;
//}
//
//struct S
//{
//	int n;
//	char c;
//	int* arr;
//};