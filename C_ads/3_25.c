#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//malloc
//calloc
//realloc - ��������Ķ����ڴ�Ĵ�С��
//reallocҲ������mallocһ������ռ�
//#include <stdio.h>
//
//int main()
//{
//	realloc(NULL, 20);//malloc(20);
//	return 0;
//}
//


//��������

//struct S
//{
//	int n;
//	char c;
//	int arr[];//���������Ա
//};


//err
//struct SA
//{
//	int arr[];//���������Ա
//};

#include <string.h>
#include <errno.h>
#include <stdlib.h>
//
//struct S
//{
//	int n;
//	char c;
//	int arr[0];//���������Ա
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
//	//ʹ��
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
//	//����arr����Ĵ�С
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
//	//ʹ��
//	//...
//	
//	//�ͷ�
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