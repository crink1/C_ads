#include <string.h>
#include <stdio.h>
//1. 计数器
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
// 


//2. 递归
//不创建临时变量，求字符串长度
//int my_strlen(const char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}

//3. 指针-指针

//#include <assert.h>
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//