#include"contact.h"

//void Initcontect(Contect* pc)
//{
//	pc->sz = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}

int checkcapacity(Contect* pc)
{
	if (pc->capacity == pc->sz)
	{
		PeoInfo* tmp = (PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (tmp == NULL)
		{
			printf("%s\n", strerror(errno));
			return 0;
		}
		else
		{
			pc->data = tmp;
			pc->capacity += INC_SZ;
			return 1;
		}
	}
	return 1;
}

void Readcontect(Contect* pc)
{
	FILE* pf = fopen("text.dat", "rb");
	if (pf == NULL)
	{
		perror("ReadContact::fopen");
		return;
	}

	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		checkcapacity(pc);
		pc->data[pc->sz] = tmp;
		pc->sz++;
	}

	fclose(pf);
	pf = NULL;
}


void Initcontect(Contect* pc)
{
	pc->capacity = DEFOULT_SZ;
	pc->sz = 0;
	PeoInfo* tmp = (PeoInfo*)malloc(DEFOULT_SZ * sizeof(PeoInfo));
	if (tmp == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	pc->data = tmp;
	Readcontect(pc);
}




void Addcontect(Contect* pc)
{
	if (0 == checkcapacity(pc))
	{
		printf("扩容失败\n");
		return;
	}
	else
	{
		printf("姓名：\n");
		scanf("%s", pc->data[pc->sz].name);
		printf("年龄：\n");
		scanf("%d", &pc->data[pc->sz].age);
		printf("性别：\n");
		scanf("%s", pc->data[pc->sz].sex);
		printf("电话：\n");
		scanf("%s", pc->data[pc->sz].tele);
		printf("地址：\n");
		scanf("%s", pc->data[pc->sz].addr);
		printf("添加成功\n");
		pc->sz++;
	}
}


static int Findcontect(const Contect* pc,char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
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
		pc->data[i] = pc->data[i + 1];
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
		printf("%-10s %-4d %-5s %-12s %-30s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
	}
}

void Searchcontect(const Contect* pc)
{
	printf("输入\n");
	char name[MAX_NAME];
	scanf("%s", name);
	int i=Findcontect(pc, name);
	printf("%-10s %-4d %-5s %-12s %-30s\n", pc->data[i].name, pc->data[i].age, pc->data[i].sex, pc->data[i].tele, pc->data[i].addr);
}


void Modifycontect(Contect* pc)
{
	printf("输入\n");
	char name[MAX_NAME];
	scanf("%s", name);
	int i = Findcontect(pc, name);
	printf("姓名：\n");
	scanf("%s", pc->data[i].name);
	printf("年龄：\n");
	scanf("%d", &pc->data[i].age);
	printf("性别：\n");
	scanf("%s", pc->data[i].sex);
	printf("电话：\n");
	scanf("%s", pc->data[i].tele);
	printf("地址：\n");
	scanf("%s", pc->data[i].addr);
	printf("修改成功\n");
}

char *my_qsotr_name(const char *arr1,const char *arr2)
{
	return strcmp(((PeoInfo*)arr1)->name, ((PeoInfo*)arr2)->name);
}

void Sortcontect(Contect* pc)
{
	qsort(pc->data, pc->sz, sizeof(PeoInfo), my_qsotr_name);
	printf("排序成功\n");
}




void Savecontect(Contect* pc)
{
	FILE *pf = NULL;
	pf=fopen("text.dat", "wb");
	if (NULL == pf)
	{
		perror("Savecontect:fopen");
		return;
	}
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pf);
	}

	fclose(pf);
	pf = NULL;
	printf("保存成功\n");
}

void Destroycontect(Contect* pc)
{
	pc->capacity = 0;
	pc->sz = 0;
	free(pc->data);
	pc->data = NULL;
}