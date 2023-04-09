#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//#define TEST
//int main()
//{
//	int i = 10;
//	
//#ifdef TEST
//		printf("%d\n", i);
//#endif
//	return 0;
//}
//int main()
//{
//	int i = 10;
//
//#if 2 == 3
//	printf("%d\n", i);
//#endif
//	return 0;
//}


//int main()
//{
//	int i = 10;
//
//	#if 1 == 2
//	printf("%d", i);
//
//	#elif 2 == 3
//	printf("%d", i);
//
//	#else
//	printf("%d", 8);
//
//	#endif
//	
//	return 0;
//}
//#define  M
//int main()
//{
//	#if defined(M)
//	printf("hehe\n");
//	#endif
//
//	#ifndef M
//	printf("hehe\n");
//	#endif
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	
//	if ((char)a == 1)
//	{
//		printf("xiao");
//	}
//	else
//	{
//		printf("da");
//	}
//	return 0;
//}
void* my_memcpy(void* dst,void* src,size_t size)

{
	assert(dst);
	assert(src);
	void* tmp = dst;
	while (size--)
	{
		*(char*)dst = *(char*)src;
		dst = (char*)dst + 1;
		src = (char*)src + 1;
	}
	return tmp;
}

int main()
{
	
	return 0;
}
//void rotate(int* nums, int numsSize, int k) {
//    for (int i = 0; i < k; i++)
//    {
//        int tmp = *(nums + numsSize - 1);
//        for (int j = numsSize - 1; j >0; j--)
//        {
//            *(nums + j) = *(nums + j - 1);
//        }
//        *nums = tmp;
//    }
//}
//int main()
//{
//    int arr[7] = { 1,2,3,4,5,6,7 };
//    rotate(arr, sizeof(arr) / sizeof(arr[0]), 3);
//    for (int i = 0; i < 7; i++)
//    {
//        printf("%d", arr[i]);
//    }
//    return 0;
//}