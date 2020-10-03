#include "game.h"
int get_mine_count(char mine[rows][cols], int x, int y)
{
return  mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y] +
		mine[x - 1][y] +
		mine[x + 1][y + 1] +
		mine[x - 1][y - 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y + 1] -
		8 * '0';
}

void initboard(char board[rows][cols], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void displayboard(char board[rows][cols], int rows, int cols)
{
	int i = 1;
	int j = 1;
	for (i =0; i <= col; i++)//打印列号
	{
		printf("%d", i);
	}
	for (i = 1; i <= row; i++)
	{
		printf("%d", i);//打印行号
		for (j = 1; j <=col; j++)
		{
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
}
void setmine(char board[rows][cols], int row, int col)
{
	int count = easy_count;
	while (count)
	{
		int x = rand() % row + 1;//1---9
		int y = rand() % col + 1;//1---9
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
void findmine(char mine[rows][cols], char show[rows][cols], int row, int col)
{
	int win = 0;
	int x = 0;
	int y = 0;
	while (win<row*col-easy_count)
	{
		printf("请输入坐标");
		scanf("%d%d", &x, &y);
		//检测合法性
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			//1、踩到雷
			if (mine[x][y] == '1')
			{
				printf("失败");
				displayboard(mine,row,col);
				break;
			}
			else
			{
				//不是雷
               //计算周围有多少雷
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入坐标非法\n");
		}
	}
	if (win == row*col - easy_count)
		printf("排雷成功\n");
}