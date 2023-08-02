#include "game.h"


void InitBoard(char board[ROWS][COLS], int rows, int cols ,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			board[i][j] = set;
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("\n\n-------------ɨ����Ϸ--------------\n\n");
	printf("   ");
	for (j = 1; j <= col; j++)
		printf("%d ", j);
	printf("\n   | | | | | | | | |\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d- ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count != 0)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//����ʱ�Զ���չ��ΧһƬ������
void extend(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y,int row,int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	//int flag = 0;
	//�鿴��Χ�Ƿ�����
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
			if (mine[i][j] != '0')
			{
				//flag = 1;
				count++;
			}
	}
	//����Χû���ײ���û�б��鿴��ʱ������ΧһȦ�ĵݹ飬����չ
	if (count == 0 && show[x][y] == '*')
	{
		show[x][y] = count + '0';//����ǰ����չʾΪ '0' 
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
				if ((x >= 1 && x <= row) && (y >= 1 && y <= col))//��ֹԽ��ݹ�
				{
					extend(mine, show, i, j,ROW,COL);
				}
		}
	}
	//����Χ����ʱ��չʾ�����Ӧ��������Ϊ��������ֹͣ�ݹ�
	else
		show[x][y] = count + '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col - EASY_COUNT)
	{
		int flag = 0;
		int count = 0;
		printf("������Ҫ�Ų�����꼰�Ƿ���\n����3 2 1\n��ǰ��λ����ʾ���꣬���һλΪ��ǣ�����1Ϊ����ף���������0����>");
		scanf("%d %d %d", &x, &y, &flag);
		//������������Ƿ�Խ��
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col) && (flag == 0 || flag ==1 ||flag ==2))
		{
			//����Ƿ���Ҫ���
			//�������Ƿ��ܹ����
			if (flag == 1 && (show[x][y] == '*' || show[x][y] == '$'))
			{
				show[x][y] = '$';
				DisplayBoard(show, ROW, COL);
			}
			else if(flag == 2 && (show[x][y] == '*' || show[x][y] == '$'))
			{
				show[x][y] = '*';
				DisplayBoard(show, ROW, COL);
			}
			//�Ų��Ƿ�����
			else
			{
				//��ֹ�ظ��Ų�
				if (show[x][y] != '*' && show[x][y] != '$')
					printf("�������ѱ��Ų飬�����ظ��Ų�\n");
				else
				{
				
						if (mine[x][y] == '1')
						{
							DisplayBoard(mine, ROW, COL);
							printf("���ź����㱻ը���ˣ�\n\n\n");
							break;
						}
						else
						{
							/*win++;
							int i = 0;
							int j = 0;
							for (i = x - 1; i <= x + 1; i++)
							{
								for (j = y - 1; j <= y + 1; j++)
									if (mine[i][j] == '1')
										count++;
							}
							show[x][y] = count + '0';*/
							extend(mine, show, x, y ,ROW ,COL);
							DisplayBoard(show, ROW, COL);
						}
				
				}
			}
		}
		else
			printf("��������Ƿ�������������\n");
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
	}
}

