#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"
void game()
{
	//�׵�����Ĵ洢
	//1�����ú��׵���Ϣ
	char mine[rows][cols] = { 0 };
	//2���Ų���׵���Ϣ
	char show[rows][cols] = { 0 };
	//��ʼ��
	initboard(mine, rows, cols, '0');
	initboard(show, rows, cols, '*');
	//��ӡ����
	//displayboard(mine, row, col);
	displayboard(show, row, col);
	//������
	setmine(mine, row, col);
	//ɨ��
	findmine(mine,show, row, col);
}
void meau()
{
	printf("***** 1��start   2��exit*****");
}
void test()
{
	int input = 0;
	srand(unsigned int)time(NULL);
	do
	{
		meau();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����");
			break;
		}
	} while (input);
}
int main()
{
	test();
}