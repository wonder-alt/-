#include<stdio.h>
void test()
{
	static int a = 1//没加static出了作用域会销毁失效，即结果a一直等于2。加了结果会保留，及结果为23456
	a++;
	printf("%d\n", a);
}

int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	printf("%d\n", i);

	return 0;
}
