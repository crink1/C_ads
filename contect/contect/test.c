#include"contact.h"


void menu()
{
	printf("********************************\n");
	printf("*****    1. add     2. del   ***\n");
	printf("*****    3. search  4. modify***\n");
	printf("*****    5. show    6. sort  ***\n");
	printf("*****    0. exit             ***\n");
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
	SORT
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
			default:
				printf(" ‰»Î¥ÌŒÛ\n");
				break;
		}

	} while (input);
	return 0;

}