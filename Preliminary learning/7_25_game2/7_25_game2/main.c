

#include "game.h"


void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');//��ʼ��������Ϊ '0'
	InitBoard(show, ROWS, COLS,'*');//��ʼ��չʾ����Ϊ '*'
	SetMine(mine, ROW, COL);//�����������������
	DisplayBoard(show, ROW, COL);//չʾչʾ����
	//DisplayBoard(mine, ROW, COL);//չʾչʾ������
	FindMine(mine, show, ROW, COL);//���׽���
	
}
//�˵�
void menu()
{
	printf("**************************\n");
	printf("*******   1.play    ******\n");
	printf("*******   0.exit    ******\n");
	printf("**************************\n");
}
int main()

{
	srand((unsigned int)time(NULL));//��������������
	int input = 0;
	do 
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("\nɨ��\n");
			game();
			break;
		case 0:
			break;
		default:
			printf("\nѡ�����������ѡ��:>");
			break;
		}
	} while(input);
	return 0;
}