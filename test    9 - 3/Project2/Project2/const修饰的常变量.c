#include<stdio.h>
int main()
{
	const int num = 8;
		printf("%d\n", num);
		num = 6; (��const�ڣ��ñ��������ܸı䣬���޷��������� )
		printf("%d\n", num);
	return 0;
}