#include <errno.h>

//int main()
//{
//	//打开文件
//	//打开文件的时候，如果文件的打开方式是"r"
//	//文件存在则打开成功，文件不存在打开失败
//	//打开文件失败的话，会返回NULL
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("打开文件失败，原因是：%s\n", strerror(errno));
//		return 1;
//	}
//	//读写文件
//	//...
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//