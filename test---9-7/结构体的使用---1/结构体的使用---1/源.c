#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
#include<string.h>
struct  BOOK
{
	char name[10];
	short price;
};
int main()
{
	struct BOOK b1={"c���Ե�ʹ��",55};
	//struct BOOK* pb = &b1;
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);//����->��������
	//�Ϸ����·��ļ�
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);//����pb��ӡ��������۸�
	//�ṹ�����  .��Ա
	//�ṹ��ָ��  ->��Ա


	//------------------------------------------------�ָ���
	//printf("������%s\n", b1.name);
	//printf("�۸�%dԪ\n", b1.price);
	//b1.price = 20;
	//printf("�޸ĺ�ļ۸�%d\n", b1.price);//��������ֱ��b1.name�ģ�ӦΪname�������price�Ǹ�����
	//����ı伴���·����Ϸ��������#include<string.h>��
	strcpy(b1.name, "c++");
	printf("%s\n", b1.name);
	return 0;
}