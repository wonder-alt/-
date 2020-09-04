#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
#include<string.h>
int main()
{
	int input = 0;
	printf("要好好学习？(1 / 0)>:");
	scanf("%d\n", &input);
	if (input == 1)
	{
		printf("找到\n");
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}