#include<stdio.h>
int main()
{
	extern int g_val;
	printf("g_val = %d\n", g_val);
	return 0;
}