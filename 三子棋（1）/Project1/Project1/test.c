
#include "game.h"
#include<stdio.h>
void meau()
{
	printf("****** 1、start  2、exit ******");
}

//游戏整个算法的实现
void game()
{
	char ret = 0;
	//数组-存放走出棋盘的全部信息
	char board[row][col] = { 0 };//全部空格
	//初始化棋盘
	intiboard(board, row, col);
	//打印棋盘
	Displayboard(board, row, col); 
	//下棋
	while (1)
	{
		playermove(board, row, col);
		Displayboard(board, row, col);
		//判断玩家是否赢
		iswin（）;
		//电脑下棋
		computermove(board, row, col);
		Displayboard(board, row, col);
		//判断电脑是否赢
		ret=iswin(board,row,col);
		if ret != 'c'
		{
			break;
		}
		if (ret != 'c')
		{
			break;
		}
		if (ret = '*')
		{
			printf("玩家赢");
		}
		else if (ret == '#')
			printf("电脑赢");
		else
			printf("平局");
	}

	
}

void test()
{
	int input = 0;
	srand(unsigned int)time(NULL)
	do
	{
		meau();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{

		case 1:
			printf("三子棋\n");
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}