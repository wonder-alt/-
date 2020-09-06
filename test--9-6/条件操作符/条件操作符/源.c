#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = (a > b ? a : b);
	if (a > b)
		max = a;
	else
		max = b;
	printf("max=%d\n", max);
	return 0;
}