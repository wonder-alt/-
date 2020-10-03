#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"
void game()
{
	//雷的数组的存储
	//1、布置好雷的信息
	char mine[rows][cols] = { 0 };
	//2、排查出雷的信息
	char show[rows][cols] = { 0 };
	//初始化
	initboard(mine, rows, cols, '0');
	initboard(show, rows, cols, '*');
	//打印棋盘
	//displayboard(mine, row, col);
	displayboard(show, row, col);
	//布置雷
	setmine(mine, row, col);
	//扫雷
	findmine(mine,show, row, col);
}
void meau()
{
	printf("***** 1、start   2、exit*****");
}
void test()
{
	int input = 0;
	srand(unsigned int)time(NULL);
	do
	{
		meau();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏");
			break;
		default:
			printf("选择错误");
			break;
		}
	} while (input);
}
int main()
{
	test();
}