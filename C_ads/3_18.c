#include<stdio.h>

//void* my_memcpy(void *arr2, void *arr, size_t num)
//{
//	void* tmp = arr2;
//	while (num--)
//	{
//		*(char*)arr2 = *(char*)arr;
//		arr2 = (char*)arr2 + 1;
//		arr = (char*)arr + 1;
//
//	}
//	return tmp;
//}


void* my_memmove(void *arr2, void *arr, size_t num)
{
	char* tmp = arr2;
	if (arr2 < arr)
	{
		while (num--)
				{
					*(char*)arr2 = *(char*)arr;
					arr2 = (char*)arr2 + 1;
					arr = (char*)arr + 1;
			
				}
				
	}
	else
	{
		while (num--)
		{
			*((char*)arr2+num) = *((char*)arr+num);

		}
	}
}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int arr2[30];
	/*my_memcpy(arr2, arr, 20);*/
	my_memmove(arr + 2, arr, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}