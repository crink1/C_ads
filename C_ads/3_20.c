#include<stdio.h>
//struct S
//{
//	char c;
//	int a;
//};
//
//int main()
//{
//	struct S s = {0};
//	printf("%d\n", offsetof(struct S, c));//0
//	printf("%d\n", offsetof(struct S, a));//4
//
//	return 0;
//}
//


//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S2));
//	printf("%d\n", sizeof(struct S4));
//
//	return 0;
//}

//#pragma pack(1)
//struct S
//{
//	char c1;//1 1 1
//	int i;  //4 1 1
//	char c2;//1 1 1
//};
//#pragma pack()
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}
