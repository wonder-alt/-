#include<stdio.h>
int main()
{
	int a = 5;
	int b = a++;//�Ƚ�a����b�ٽ�a����++
	int c = 7;
	int d = ++c;//�Ƚ�c����++�ٽ�c����d
	printf("%d\n", b);
	printf("%d\n", d);
	return 0;
}