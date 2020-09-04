#include<stdio.h>
int add(int x,int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	sum = add(num1, num2);
	printf("sum=%d\n", sum);
	return 0;
}