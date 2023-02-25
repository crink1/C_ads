#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//void calc(int (*p)(int ,int))
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n",(*p)(a, b));
//}
//
//int main()
//{
//	
//	int input = 0;
//
//	do
//	{
//		
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("ÕÀ≥ˆ");
//			break;
//
//		default:
//			printf(" ‰»Î¥ÌŒÛ");
//			break;
//		}
//	} while(input);
//	return 0;
//}

int cmp(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}



void swp(char* p1, char* p2, size_t w)
{
	for (int i = 0; i < w; i++)
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;

	}
}

void bsort(void* bease, size_t sz, size_t w, int(*p)(const void*, const void*))
{
	for (size_t i = 0; i < sz - 1; i++)
	{
		for (size_t j = 0; j < sz - i - 1; j++)
		{
			if (cmp((char*)bease+j*w, (char*)bease + (j+1) * w)>0)
			{
				
					swp((char*)bease + j * w, (char*)bease + (j + 1) * w,w);
			}
		}
	}
}

int main()
{

	int arr[] = { 9,8,7,4,5,6,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bsort(arr,sz,sizeof(arr[0]),cmp);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}