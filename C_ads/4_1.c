//#include<stdio.h>
//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};
//int main()
//{
//	//���л��ͷ����л���ʱ��
//
//	struct S s = { 200, 3.5f, "wangwu" };
//	//��һ���ṹ��ת�����ַ���
//	char arr[200] = { 0 };
//	sprintf(arr, "%d %f %s\n", s.n, s.f, s.arr);
//	printf("�ַ��������ݣ�%s\n", arr);
//
//	//��һ���ַ���ת���ɶ�Ӧ�ĸ�ʽ������
//	struct S tmp = { 0 };
//	sscanf(arr, "%d %f %s", &(tmp.n), &(tmp.f), tmp.arr);
//	printf("��ʽ�������ݣ�%d %f %s\n", tmp.n, tmp.f, tmp.arr);
//
//	return 0;
//}