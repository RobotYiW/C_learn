//#include "game.h"
//void extend(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	//int flag = 0;
//	if (mine[x][y] == '0')
//	{
//		for (i = x - 1; i <= x + 1; i++)
//		{
//			for (j = y - 1; j <= y + 1; j++)
//				if (mine[i][j] != '0')
//				{
//					//flag = 1;
//					count++;
//				}
//		}
//		if (count == 0 && show[x][y] == '*')
//		{
//			show[x][y] = count + '0';
//			for (i = x - 1; i <= x + 1; i++)
//			{
//				for (j = y - 1; j <= y + 1; j++)
//					extend(mine, show, i, j);
//			}
//		}
//		else
//			show[x][y] = count + '0';
//		
//	}
//}