#include<stdio.h> 
int main()
{
	//��---��0
	//��---0
	int a = 5;
	int b = 0;
	int c = a&&b;//&&���߼���--- ����Ϊ���Ϊ�棬һ��Ϊ��ȫ�Ǽ�
	int d = a || b;//||---�߼���---ֻҪ��һ��Ϊ�漴Ϊ��
	printf("%d\n ", c);
	printf("%d\n ", d);
	return 0;
}