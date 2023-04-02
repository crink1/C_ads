#include<stdio.h>
//#define MAX 1000
//
//int main()
//{
//	printf("%d\n", MAX);
//	int arr[MAX];
//
//	return 0;
//}

//#define DEBUG_PRINT printf("file:%s\tline:%d\t date:%s\ttime:%s\n" , \
//						__FILE__,__LINE__ , \
//						__DATE__,__TIME__ ) 
//ÐøÐÐ·û

//#define MAX 1000;
//
//int main()
//{
//	int a = MAX;
//
//	return 0;
//}


int Max(int x, int y)
{
    return x > y ? x : y;
}

#define MAX(X,Y) ((X)>(Y)?(X):(Y))

int main()
{
    int a = 3;
    int b = 5;
    //int c = MAX(a++, b++);
    int c = Max(a++, b++);
    //int c = ((a++)>(b++)?(a++):(b++));
    //         3      5    
    printf("%d\n", c);//6
    printf("%d\n", a);//4
    printf("%d\n", b);//7

    return 0;
}