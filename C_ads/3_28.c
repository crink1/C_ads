#include <stdio.h>


//int main()
//{
//	//���ļ�
//	//���·��
//	FILE* pf = fopen("C:\\Users\\Administrator\\Desktop\\test2.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//

//fputc д�ļ�
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	//��26����ĸд���ļ���
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		fputc('a'+i, pf);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//

//fgetc - ���ļ�����