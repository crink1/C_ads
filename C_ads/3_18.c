#include<stdio.h>
#include<string.h>
//void* my_memcpy(void *dst, void *src, size_t num)
//{
//	void* tmp = dst;
//	while (num--)
//	{
//		*(char*)dst = *(char*)src;
//		dst = (char*)dst + 1;
//		src = (char*)src + 1;
//
//	}
//	return tmp;
//}


//void* my_memmove(void *dst, void *src, size_t num)
//{
//	char* tmp = dst;
//	if (dst < src)
//	{
//		while (num--)
//				{
//					*(char*)dst = *(char*)src;
//					dst = (char*)dst + 1;
//					src = (char*)src + 1;
//			
//				}
//				
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dst+num) = *((char*)src+num);
//
//		}
//	}
//}
//
//
//
//int main()
//{
//	int src[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int dst[30];
//	/*my_memcpy(dst, src, 20);*/
//	my_memmove(src + 2, src, 20);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", src[i]);
//	}
//	return 0;
//}

//
//int main()
//{
//	char src[] = "abcdef";
//	char dst[30];
//	memmove(dst, src, strlen(src) + 1);
//	printf("%s\n", src);
//	printf("%s\n", dst);
//	return 0;
//}