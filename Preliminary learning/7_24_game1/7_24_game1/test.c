#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void menu()
{
	printf("*******************************\n");
	printf("******  1.play   0.exit  ******\n");
	printf("*******************************\n");
}
void game()
{
	int ret = 1;
	srand((unsigned int)time(NULL));
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if(ret != 'c')
		{
			break;
		}
		ComperMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '#')
		printf("电脑玩家胜利！\n");
	else if (ret == '*')
		printf("恭喜您取得胜利！\n");
	else
		printf("平局\n");
}
int main()
{
	int input = 0;
	do 
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case 1:
			game();
			printf("\n三子棋\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误！\n");
			break;
		}
		printf("\n");
	} while (input);
	return 0;
}