#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
#include<string.h>
int main()
{
	int input = 0;
	printf("Ҫ�ú�ѧϰ��(1 / 0)>:");
	scanf("%d\n", &input);
	if (input == 1)
	{
		printf("�ҵ�\n");
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}