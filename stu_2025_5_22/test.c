#include "contact.h"
void menu()
{
	printf("************************************************\n");
	printf("*********   1.add          2.del    ************\n");
	printf("*********   3.search       4.modify ************\n");
	printf("*********   5.show         6.sort   ************\n");
	printf("*********   0.exit                  ************\n");
	printf("************************************************\n");
}
int main()
{
	int input = 0;
	//通讯录
	Contact con;
	//初始化通讯录
	InitContact(&con);
	do
	{
		
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContct(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModiContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			SortContact(&con);
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}
