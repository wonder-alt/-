
#include "game.h"
#include<stdio.h>
void meau()
{
	printf("****** 1��start  2��exit ******");
}

//��Ϸ�����㷨��ʵ��
void game()
{
	char ret = 0;
	//����-����߳����̵�ȫ����Ϣ
	char board[row][col] = { 0 };//ȫ���ո�
	//��ʼ������
	intiboard(board, row, col);
	//��ӡ����
	Displayboard(board, row, col); 
	//����
	while (1)
	{
		playermove(board, row, col);
		Displayboard(board, row, col);
		//�ж�����Ƿ�Ӯ
		iswin����;
		//��������
		computermove(board, row, col);
		Displayboard(board, row, col);
		//�жϵ����Ƿ�Ӯ
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
			printf("���Ӯ");
		}
		else if (ret == '#')
			printf("����Ӯ");
		else
			printf("ƽ��");
	}

	
}

void test()
{
	int input = 0;
	srand(unsigned int)time(NULL)
	do
	{
		meau();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{

		case 1:
			printf("������\n");
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}