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
    int c; // ע�⣺int����char��Ҫ����EOF
    FILE* fp = fopen("test.txt", "r");
    if (!fp) {
        perror("File opening failed");
        return EXIT_FAILURE;
    }
    //fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
    while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
    {
        putchar(c);
    }
    //�ж���ʲôԭ�������
    if (ferror(fp))
        puts("I/O error when reading");
    else if (feof(fp))
        puts("End of file reached successfully");
    fclose(fp);
}