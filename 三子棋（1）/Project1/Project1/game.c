#include "game.h"
#include<stdio.h>

void Displayboard(char board[row][col],int row,int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");  
				printf("\n");
			}
			if (i < row - 1)
			{
				for (j = 0; j < col; j++);
				{
					printf("---");
					if (j < col - 1)
					{
						printf("|");
					}
				}
			}
		}
	}
}
void playermove(char board[row][col], int row, , int col)
{
	    int x = 0;
		int y = 0;
		printf("���������һ��");
		while (1)
		{
			printf("����������");
				scanf("%d\n", &row, &col);
				if (x >= 1 && x <= row&&y >= 1 && y <= col)
				{
					if (board == ' ')
					{
						board = '*';
						break;
					}
					else
					{
						printf("�����걻ռ��");
					}
				}
				else
				{
					printf("�������");
				}
		}
}
void computermove(char board[row][col],int row,int col)
{
	int x = 0;
	int y = 0;
	printf("������:>");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board [x][y]= '#';
			break;
		}
	}
}
//����1��ʾ�������ˣ�����0��ʾ����û��
int isfull(char board[row][col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char iswin(char board[row][col], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//������
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//Ϊɶ�ǡ�i����1��������[i][2]��
		{
			return board[i][1];
		}
	}
	//������
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return  board[1][i];
		}
		//�����Խ���
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ');
		{
			return board[1][1];
		}
		if (board[2][0] == board[1][1] && board[1][1] == board[0][2]&&board[1][1]!=' ')
		{
			return board[1][ 1];
		}
	}
}
	
