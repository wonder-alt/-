#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int ret = 0;
	int ch = 0;
	char password[] = {0};
	printf("请输入密码 ");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')//这篇代码没搞懂
	{
		;
	}
	getchar();
	printf("请确认（y/n）:>");
	ret = getchar();
	if (ret == 'y')
	{
		printf("输入成功");
	}
	else
		printf("输入失败");

	return 0;
}