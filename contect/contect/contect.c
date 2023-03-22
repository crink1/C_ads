#include"contact.h"

void Initcontect(Contect* pc)
{
	pc->sz = 0;
	memset(pc->date, 0, sizeof(pc->date));
}


void Addcontect(Contect* pc)
{
	if (MAX == pc->sz)
	{
		printf("通讯录已满\n");
		return;
	}
	printf("姓名：\n");
	scanf("%s", pc->date[pc->sz].name);
	printf("年龄：\n");
	scanf("%d", &pc->date[pc->sz].age);
	printf("性别：\n");
	scanf("%s", pc->date[pc->sz].sex);
	printf("电话：\n");
	scanf("%s", pc->date[pc->sz].tele);
	printf("地址：\n");
	scanf("%s", pc->date[pc->sz].addr);
	printf("添加成功\n");
	pc->sz++;

}


static int Findcontect(const Contect* pc,char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->date[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void Delcontect(Contect* pc)
{
	if (0 == pc->sz)
	{
		printf("无数据\n");
		return;
	}
	int i = 0;
	char name[MAX_NAME] = {0};
	scanf("%s", name);
	i = Findcontect(pc,name);
	for (; i < pc->sz; i++)
	{
		pc->date[i] = pc->date[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}


void Showcontect(const Contect* pc)
{
	int i = 0;
	printf("%-10s %-4s %-5s %-12s %-30s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-10s %-4d %-5s %-12s %-30s\n", pc->date[i].name, pc->date[i].age, pc->date[i].sex, pc->date[i].tele, pc->date[i].addr);
	}
}

void Searchcontect(const Contect* pc)
{
	printf("输入\n");
	char name[MAX_NAME];
	scanf("%s", name);
	int i=Findcontect(pc, name);
	printf("%-10s %-4d %-5s %-12s %-30s\n", pc->date[i].name, pc->date[i].age, pc->date[i].sex, pc->date[i].tele, pc->date[i].addr);
}


void Modifycontect(Contect* pc)
{
	printf("输入\n");
	char name[MAX_NAME];
	scanf("%s", name);
	int i = Findcontect(pc, name);
	printf("姓名：\n");
	scanf("%s", pc->date[i].name);
	printf("年龄：\n");
	scanf("%d", &pc->date[i].age);
	printf("性别：\n");
	scanf("%s", pc->date[i].sex);
	printf("电话：\n");
	scanf("%s", pc->date[i].tele);
	printf("地址：\n");
	scanf("%s", pc->date[i].addr);
	printf("修改成功\n");
}

char *my_qsotr_name(const char *arr1,const char *arr2)
{
	return strcmp(((PeoInfo*)arr1)->name, ((PeoInfo*)arr2)->name);
}

void Sortcontect(Contect* pc)
{
	qsort(pc->date, pc->sz, sizeof(PeoInfo), my_qsotr_name);
	printf("排序成功\n");
}