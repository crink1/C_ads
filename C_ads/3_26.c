#include<stdio.h>
#include<stdlib.h>
//struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	char id[20];//学号
//	struct Stu stu;
//};
//
//
//struct contect
//{
//	int size;
//	struct Stu stu;
//};
//int main()
//{
//	struct Stu s3 = { "qwer",14,"男","123456" };
//	s3.age = 15;
//	struct Stu* s1 = &s3;
//	printf("%s  %d  %s  %s", s1->name, s1->age, s3.sex, s3.id);
//	return 0;
//}
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//enum Day//星期
//{
//	Mon,
//	Tues,
//	Wed = 5,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//int main()
//{
//	enum Day day = Thur;
//	
//	return 0;
//}

union Un
{
    char c;
    int i;
};
int main()
{
    union Un un;//定义
    un.i = 1;
    printf("%d", un.c);
    return 0;
}