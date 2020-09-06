#include<stdio.h> 
int main()
{
	//真---非0
	//假---0
	int a = 5;
	int b = 0;
	int c = a&&b;//&&：逻辑与--- 两个为真才为真，一个为假全是假
	int d = a || b;//||---逻辑或---只要有一个为真即为真
	printf("%d\n ", c);
	printf("%d\n ", d);
	return 0;
}