#include <stdio.h>
#include <string.h>



int main()
{
	char arr[] = "192.168.3.212";
	char buf[30] = {0};
	strcpy(buf, arr);

	const char* p = ".";
	char* str = strtok(buf, p);
	printf("%s\n", str);

	str = strtok(NULL, p);
	printf("%s\n", str); 
	
	str = strtok(NULL, p);
	printf("%s\n", str);

	str = strtok(NULL, p);
	printf("%s\n", str);

	return 0;
}
