#include<stdio.h>
int main()
{
	const int num = 8;
		printf("%d\n", num);
		num = 6; (有const在，该变量不可能改变，故无法运行起来 )
		printf("%d\n", num);
	return 0;
}