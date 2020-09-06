#include<stdio.h>
int main()
{
	int a = 5;
	int b = a++;//先将a赋给b再将a进行++
	int c = 7;
	int d = ++c;//先将c进行++再将c赋给d
	printf("%d\n", b);
	printf("%d\n", d);
	return 0;
}