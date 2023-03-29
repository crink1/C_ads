#include<stdio.h>
void find_single_dog(int arr[], int sz, int* sd1, int* sd2)
{
	//1. 把所有的数字异或在一起
	int ret = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//2. 计算ret的二进制中哪一位是1
	int pos = 0;
	for (i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	//3. 分组异或
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			*sd1 ^= arr[i];
		}
		else
		{
			*sd2 ^= arr[i];
		}
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6};

	int sz = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	int y = 0;
	find_single_dog(arr, sz, &x, &y);
	printf("%d %d\n", x, y);
	return 0;
}
