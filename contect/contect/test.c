#include"contact.h"


void menu()
{
	printf("********************************\n");
	printf("*****    1. add     2. del   ***\n");
	printf("*****    3. search  4. modify***\n");
	printf("*****    5. show    6. sort  ***\n");
	printf("*****    0. exit   7.removeall***\n");
	printf("********************************\n");
}

enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	REMOVEALL
};

int main()
{
	
	int input = 0;
	Contect con;
	Initcontect(&con);
	do
	{
		menu();
		scanf("%d", &input);
		switch(input)
		{
			case EXIT:
				Destroycontect(&con);
				break;
			case ADD:
				Addcontect(&con);
				break;
			case DEL:
				Delcontect(&con);
				break;
			case SEARCH:
				Searchcontect(&con);
				break;
			case MODIFY:
				Modifycontect(&con);
				break;
			case SHOW:
				Showcontect(&con);
				break;
			case SORT:
				Sortcontect(&con);
				break;
			case REMOVEALL:
				Initcontect(&con);
				printf("清楚成功\n");
				break;
			default:
				printf("输入错误\n");
				break;
		}

	} while (input);
	return 0;

}