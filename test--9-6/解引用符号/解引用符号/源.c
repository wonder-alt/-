#include<stdio.h>
int main()
{
	int a = 10;//��10�浽a�Ŀռ��У�����һ����ַ��aΪ�ĸ��ֽ�
	int * p = &a;//����ַ����p�У���pΪָ��
	* p = 20;//�ҵ�P���޸�p�е�a������
	printf("%d\n", p);//��ʾ��ַ
	printf("%d\n", a);//��ʾ�����ڿռ��е�����
	return 0;
}