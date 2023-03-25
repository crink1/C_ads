//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	/*for (i = 0; i < 5; i++)
//	{
//		p[i] = i + 1;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	/*for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("calloc()-->%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//
//
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		p[i] = i + 1;
//	}
//	int* ptr = (int*)realloc(p, 400000);
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//		//使用
//		for (i = 5; i < 10; i++)
//		{
//			p[i] = i + 1;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}