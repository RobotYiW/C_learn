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
	printf("\n\n-------------扫雷游戏--------------\n\n");
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
//无雷时自动扩展周围一片无雷区
void extend(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y,int row,int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	//int flag = 0;
	//查看周围是否有雷
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
			if (mine[i][j] != '0')
			{
				//flag = 1;
				count++;
			}
	}
	//当周围没有雷并且没有被查看过时进行周围一圈的递归，及扩展
	if (count == 0 && show[x][y] == '*')
	{
		show[x][y] = count + '0';//给当前坐标展示为 '0' 
		for (i = x - 1; i <= x + 1; i++)
		{
			for (j = y - 1; j <= y + 1; j++)
				if ((x >= 1 && x <= row) && (y >= 1 && y <= col))//防止越界递归
				{
					extend(mine, show, i, j,ROW,COL);
				}
		}
	}
	//当周围有雷时，展示数组对应坐标设置为雷数，并停止递归
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
		printf("请输入要排查的坐标及是否标记\n例：3 2 1\n（前两位数表示坐标，最后一位为标记，输入1为标记雷，否则输入0）：>");
		scanf("%d %d %d", &x, &y, &flag);
		//检查输入坐标是否越界
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col) && (flag == 0 || flag ==1 ||flag ==2))
		{
			//检查是否需要标记
			//及检验是否能够标记
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
			//排查是否有雷
			else
			{
				//防止重复排查
				if (show[x][y] != '*' && show[x][y] != '$')
					printf("该坐标已被排查，请勿重复排查\n");
				else
				{
				
						if (mine[x][y] == '1')
						{
							DisplayBoard(mine, ROW, COL);
							printf("很遗憾，你被炸死了！\n\n\n");
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
			printf("输入坐标非法，请重新输入\n");
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}

