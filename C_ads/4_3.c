#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

        FILE* pf;
        //打开文件
        char str[20] = { 0 };
        int a = 0;
        char b = 0;
        int c = 0;
        pf = fopen("text.txt", "r");
        //文件操作
        if (pf == NULL)
        {
            perror("fopen");
        }
       // fprintf(pf,"%d,%c,%d", 5, 'A', 6);
        fscanf(pf,"%d,%c,%d", &a, &b, &c);
        printf("%d %c %d", a, b, c);
        //关闭文件
        fclose(pf);
       
        return 0;
}

//函数的实现 - 1
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
////宏的实现 - 2
//#define MAX(x,y)  ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//较大值
//	int m1 = Max(a, b);
//	printf("%d\n", m1);
//
//	int m2 = MAX(a, b);
//	//int m2 = ((a)>(b)?(a):(b));
//	printf("%d\n", m2);
//
//	return 0;
//}
//
//#define MALLOC(num, type)   (type*)malloc(num * sizeof(type))
//
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//....
//	}
//
//	int*p2 = MALLOC(10, int);
//	if (p2 == NULL)
//	{
//		//....
//	}
//	//MALLOC(10, flaot);
//
//
//	return 0;
//}


//#include <stdio.h>
//
//#define M 100
//
//int main()
//{
//	printf("%d\n", M);
//
//#undef M
//	printf("%d\n", M);//err
//
//	return 0;
//}
//
//#include "test.h"
////1. 
//
//#include "stdio.h"//?
//


