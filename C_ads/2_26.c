#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//struct std
//{
//	char name[20];
//	int age;
//};
//
//int cmp(const void* p1, const void* p2)
//{
//	return ((struct std*)p1)->age - ((struct std*)p2)->age;
//}
//
//void text()
//{
//	struct std std1[] = { {"wdnmd",20},{"dwadaw",12} };
//	int sz = sizeof(std1) / sizeof(std1[0]);
//	qsort(std1, sz, sizeof(std1[0]), cmp);
//	printf("%d", std1[0].age);
//}
//int main()
//{
//	
//	text();
//	return 0;
//}

//void find(int arr[3][3], int row, int col, int n)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x<row && y>=0)
//	{
//		if (arr[x][y] == n)
//		{
//			printf("ÏÂ±êÎª(%d,%d)\n", x, y);
//			break;
//		}
//		else if (arr[x][y] > n)
//		{
//			y--;
//		}
//		else
//		{
//			x++;
//		}
//	}
//}
//
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	find(arr, 3, 3, 7);
//	
//	return 0;
//}
