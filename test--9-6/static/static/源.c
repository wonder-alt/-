#include<stdio.h>
void test()
{
	static int a = 1//û��static���������������ʧЧ�������aһֱ����2�����˽���ᱣ���������Ϊ23456
	a++;
	printf("%d\n", a);
}

int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	printf("%d\n", i);

	return 0;
}
