#include<stdio.h>
#include <stddef.h>
//
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//#define OFFSETOF(type, name)       (size_t)&(((type*)0)->name)
//
//int main()
//{
//	struct S s;
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c));
//	printf("%d\n", OFFSETOF(struct S, d));
//
//	return 0;
//}


//
//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������
//���λ�ǵ�1λ
//1 0 0 0 1 0 0 0 1 0 0 0 1 0 0 0 0 0 0 0 1 1 1 1 0 1 0 1 0 1 0 0

#define SWAP_BIT(x)   (x = (((x & 0x55555555)<<1) + ((x&0xaaaaaaaa)>>1)))
int main()
{
	//00000000000000000000000000000101
	//00000000000000000000000000001010
	int a = 5;
	SWAP_BIT(a);
	printf("%d\n", a);

	return 0;
}