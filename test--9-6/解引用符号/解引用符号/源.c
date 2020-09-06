#include<stdio.h>
int main()
{
	int a = 10;//将10存到a的空间中，且有一个地址，a为四个字节
	int * p = &a;//将地址存在p中，且p为指针
	* p = 20;//找到P并修改p中的a的数字
	printf("%d\n", p);//显示地址
	printf("%d\n", a);//显示最后放在空间中的数字
	return 0;
}