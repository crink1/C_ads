#include<stdio.h>
char* my_strcop(char* arr1,const char* arr2)
{
	char* tmp = arr1;
	while (*arr1++ = *arr2++)
	{

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

char* my_strcat(char *arr1, char *arr2)
{
	while (*arr1)
	{
		arr1++;
	}
	while (*arr1++ = *arr2++)
	{
		
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
	char arr1[20]="zanmd ";
	char arr2[20] = "qwert";
	/*my_strcop(arr1, arr2);
	printf("%s", arr1);*/
	/*printf("%d", my_strlen(arr2));*/
	/*my_strcat(arr1, arr2);
	printf("%s", arr1);*/
	printf("%d", my_strcmp(arr1, arr2));

	return 0;
}