#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int my_strlen(const char* str)
{
	return 0;
}

int main()
{
	//ָ������
	char* arr[10];
	//����ָ��
	int arr2[5] = { 0 };
	int (*p)[5] = &arr2;//p��һ��ָ�������ָ�����
	//����ָ��
	int (* pf)(const char*) = my_strlen;//pf��һ��ָ�����ĺ���ָ�����
	
	//����ָ������ - ��ź���ָ�������
	int (* pfArr[10])(const char*);

	return 0;
}
