#include<stdio.h>
int main()
{
	char ch = 'w';
	char*pc = &ch;
	printf("%d\n", sizeof(pc));//��debug��Ϊwin32ƽ̨ʱ�ֽ�Ϊ4����x64ƽ̨ʱ��8�ֽ�
	return 0;
}