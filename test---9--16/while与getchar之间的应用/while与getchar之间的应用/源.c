#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int ret = 0;
	int ch = 0;
	char password[] = {0};
	printf("���������� ");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')//��ƪ����û�㶮
	{
		;
	}
	getchar();
	printf("��ȷ�ϣ�y/n��:>");
	ret = getchar();
	if (ret == 'y')
	{
		printf("����ɹ�");
	}
	else
		printf("����ʧ��");

	return 0;
}