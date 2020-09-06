#include<stdio.h>
int add(int x, int y)
{
	int z = 0;
	 z = x + y;
	return z;
}
int main()
{
	int a = 10;
	int b = 20;
	int sum = add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}