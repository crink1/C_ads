#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	FILE* pFile = NULL;
//	int size = 0;
//	char arr[100] = {0};
//	pFile = fopen("example.txt", "r+");
//	if (pFile == NULL)
//	{
//		perror("Error opening file");
//	}
//	fseek(pFile, 9, SEEK_SET);
//	fgets(arr, 10, pFile);
//	printf("%s\n", arr);
//	rewind(pFile);
//	fgets(arr, 18, pFile);
//	puts(arr);
//	fclose(pFile);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int c; // 注意：int，非char，要求处理EOF
    FILE* fp = fopen("test.txt", "r");
    if (!fp) {
        perror("File opening failed");
        return EXIT_FAILURE;
    }
    //fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
    while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
    {
        putchar(c);
    }
    //判断是什么原因结束的
    if (ferror(fp))
        puts("I/O error when reading");
    else if (feof(fp))
        puts("End of file reached successfully");
    fclose(fp);
}