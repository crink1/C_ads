#include<stdio.h>
char* my_strncpy(char* arr1,const char* arr2,size_t num)
{
	char* tmp = arr1;
	if (num != 0)
	{
		
		while (*arr1++ = *arr2++)
		{

			num--;
			if (num == 0)
			{
				*arr1 = '\0';
				break;
			}
		}
	}

	return tmp;
}
size_t my_strlen(const char *arr1)
{
	char* tmp = arr1;
	while (*arr1)
	{
		arr1++;
	}
	return arr1 - tmp;
}

char* my_strncat(char *arr1, char *arr2,size_t num)
{
	if (num != 0)
	{
		while (*arr1)
		{
			arr1++;
		}
		while (*arr1++ = *arr2++)
		{
			num--;
			if (num == 0)
			{
				*arr1 = '\0';
				break;
			}
		}
	}
	return arr1;
}


int my_strcmp(const char* arr1, const char* arr2)
{
	while (*arr1 == *arr2)
	{
		if (*arr1 == '\0')
		{
			return 0;
		}
		arr1++;
		arr2++;
	}
	if (*arr1 > *arr2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}


int main()
{
	char arr2[20]="zanmd";
	char arr1[20] = {0};
	my_strncpy(arr1, arr2,7);
	printf("%s", arr1);
	/*printf("%d", my_strlen(arr2));*/
	/*my_strncat(arr1, arr2,6);
	printf("%s", arr1);*/
	//printf("%d", my_strcmp(arr1, arr2));

	return 0;
}