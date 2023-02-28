#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int my_strlen(const char* str)
{
	return 0;
}

int main()
{
	//指针数组
	char* arr[10];
	//数组指针
	int arr2[5] = { 0 };
	int (*p)[5] = &arr2;//p是一个指向数组的指针变量
	//函数指针
	int (* pf)(const char*) = my_strlen;//pf是一个指向函数的函数指针变量
	
	//函数指针数组 - 存放函数指针的数组
	int (* pfArr[10])(const char*);

	return 0;
}
