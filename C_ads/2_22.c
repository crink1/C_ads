#include<stdio.h>
//
//void print(int(*p)[5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *((*p)+i));
//	}
//}
//
//
//int main()
//{
//
//	int arr[5] = {1,2,3,4,5};
//	print(&arr);
//	return 0;
//}

//void print(int(*p)[5])
//{
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ",*((*(p+i))+j));
//		}
//	}
//}
//
//
//int main()
//{
//
//	int arr[2][5] = { 1,2,3,4,5,
//					6,7,8,9,0 };
//	print(&arr);
//	return 0;
//}