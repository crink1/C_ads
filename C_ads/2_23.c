#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void re(char* arr,int sz,int k)
//{
//	
//	for (int i = 1; i <= k; i++)
//	{
//		char tmp;
//		char* p = arr + 1;
//		int x = 1;
//		tmp = *(arr);
//		while (x <= sz - 2)
//		{
//			*(p-1) = *p;
//			p++;
//			x++;
//		}
//		*(arr+sz-2) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = { "ABCDEF" };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	re(arr, sz,k);
//	printf("%s", arr);
//}


int main()
{
    int i, j, a[11][11] = { 0,1 };
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
