#include<stdio.h>
int main()
{
	char ch = 'w';
	char*pc = &ch;
	printf("%d\n", sizeof(pc));//在debug中为win32平台时字节为4，是x64平台时是8字节
	return 0;
}