

#include "game.h"


void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');//初始化雷数组为 '0'
	InitBoard(show, ROWS, COLS,'*');//初始化展示数组为 '*'
	SetMine(mine, ROW, COL);//雷数组中设置随机雷
	DisplayBoard(show, ROW, COL);//展示展示数组
	//DisplayBoard(mine, ROW, COL);//展示展示雷数组
	FindMine(mine, show, ROW, COL);//排雷进行
	
}
//菜单
void menu()
{
	printf("**************************\n");
	printf("*******   1.play    ******\n");
	printf("*******   0.exit    ******\n");
	printf("**************************\n");
}
int main()

{
	srand((unsigned int)time(NULL));//设置随机数的起点
	int input = 0;
	do 
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("\n扫雷\n");
			game();
			break;
		case 0:
			break;
		default:
			printf("\n选择错误，请重新选择:>");
			break;
		}
	} while(input);
	return 0;
}