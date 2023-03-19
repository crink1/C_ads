#include<stdio.h>
#include<assert.h>
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d", &k);
	int x = 3;
	int y = 3;
	//返回型参数
	int ret = find_num(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("找到了, 下标是: %d %d\n", x, y);
	}
	else
		printf("找不到\n");

	return 0;
}
int find_num(int arr[3][3], int *px, int *py, int k)
{
	int x = 0;
	int y = *py - 1;

	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d", &k);
	int x = 3;
	int y = 3;
	//返回型参数
	int ret = find_num(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("找到了, 下标是: %d %d\n", x, y);
	}
	else
		printf("找不到\n");

	return 0;
}


int is_left_move(char arr1[], char arr2[])
{
	int len = strlen(arr1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		//左旋1个字符
		//1
		char tmp = arr1[0];
		//2
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr1[j] = arr1[j + 1];
		}
		//3
		arr1[len - 1] = tmp;
		if (0 == strcmp(arr1, arr2))
		{
			return 1;
		}
	}
	return 0;
}

int is_left_move(char arr1[], char arr2[])
{
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	if (len1 != len2)
		return 0;

	strncat(arr1, arr1, len1);
	if (strstr(arr1, arr2))
		return 1;
	else
		return 0;
}

int main()
{
	char arr1[20] = "abcdef";//abcdefabcdef
	char arr2[] = "cdef";
	int ret = is_left_move(arr1, arr2);
	if (1 == ret)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}

	return 0;
}

