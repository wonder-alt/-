#include<stdio.h>
int MAX(x, y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1 = 6;
	int num2 = 23;
	int max = 0;
	max = MAX(num1, num2);
	printf("max=%d\n", max);
	return 0;
}