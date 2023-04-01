//#include<stdio.h>
//int main()
//{
//	
//	FILE* pfRead = fopen("test1.txt", "r");
//	if (pfRead == NULL)
//	{
//		perror("open file for read");
//		return 1;
//	}
//	
//	FILE* pfWrite = fopen("test2.txt", "w");
//	if (pfWrite == NULL)
//	{
//		fclose(pfRead);
//		pfRead = NULL;
//		pfRead = NULL;
//		perror("open file for write");
//		return 1;
//	}
//
//	
//	int ch = 0;
//	while ((ch=fgetc(pfRead)) != EOF)
//	{
//		fputc(ch,pfWrite);
//	}
//
//	fclose(pfRead);
//	pfRead = NULL;
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}
