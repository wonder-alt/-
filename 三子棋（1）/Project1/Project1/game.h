#define row 3
#define col 3
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void intiboard(char board[row][col], int row, int col);
void Displayboard(char board[row][col], int row, int col);
void playermove(char board[row][col], int row, int col);
void computermove(char board[row][col], int row, int col);
//Ó®'*'
//Êä'#'
//Æ½¾Ö'q'
//¼ÌÐø'c'
char iswin(char board[row][col], int row, int col);