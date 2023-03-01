#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//�����������+-*/
//����: << >> & | ^ && ||
//
void menu()
{
	printf("******************************\n");
	printf("****   1. add    2.sub   *****\n");
	printf("****   3. mul    4.div   *****\n");
	printf("****   0. exit           *****\n");
	printf("******************************\n");
}
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;

	//ת�Ʊ� - ����ָ�������
	int (*pfArr[])(int, int) = { NULL, Add, Sub, Mul, Div };
	//0    1    2    3    4

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("�˳�������\n");
			break;
		}
		else if (input >= 1 && input <= 4)
		{
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}