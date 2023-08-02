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
		printf("�������ʤ����\n");
	else if (ret == '*')
		printf("��ϲ��ȡ��ʤ����\n");
	else
		printf("ƽ��\n");
}
int main()
{
	int input = 0;
	do 
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case 1:
			game();
			printf("\n������\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
		printf("\n");
	} while (input);
	return 0;
}