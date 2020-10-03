#define _CRT_SECURE_NO_WARNINGS
#define row 9
#define col 9
#define rows row+2
#define cols col+2
#define easy_count 10

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void initboard(char board[rows][cols], int rows, int cols);
void setmine(char board[rows][cols], int row, int col);
void displayboard(char board[rows][cols], int row, int col);
void findmine(char mine[rows][cols],char show[rows][cols], int row, int col);