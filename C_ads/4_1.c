//#include<stdio.h>
//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//int main()
//{
//	//序列化和反序列化的时候
//
//	struct S s = { 200, 3.5f, "wangwu" };
//	//把一个结构体转换成字符串
//	char arr[200] = { 0 };
//	sprintf(arr, "%d %f %s\n", s.n, s.f, s.arr);
//	printf("字符串的数据：%s\n", arr);
//
//	//把一个字符串转换成对应的格式化数据
//	struct S tmp = { 0 };
//	sscanf(arr, "%d %f %s", &(tmp.n), &(tmp.f), tmp.arr);
//	printf("格式化的数据：%d %f %s\n", tmp.n, tmp.f, tmp.arr);
//
//	return 0;
//}