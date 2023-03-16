#include<stdio.h>
#include<assert.h>

char* my_strstr(const char *arr1, const char *arr2)
{
	assert(arr1 && arr2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cp = (char*)arr1;
	while (*cp)
	{
		s1 = cp;
		s2 = (char*)arr2;
		while (*s1 && *s2 &&*s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return cp;
		cp++;
	}
	return NULL;
}


int main()
{
	char arr1[20] = "wdnmmddnhsjuaiogfb";
	char arr2[20] = "md";
	printf("%s", my_strstr(arr1, arr2));
	return 0;
}