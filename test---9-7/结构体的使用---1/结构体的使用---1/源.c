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
	struct BOOK b1={"c语言的使用",55};
	//struct BOOK* pb = &b1;
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);//利用->来简化流程
	//上方是下方的简化
	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);//利用pb打印出书名与价格
	//结构体变量  .成员
	//结构体指针  ->成员


	//------------------------------------------------分割线
	//printf("书名：%s\n", b1.name);
	//printf("价格：%d元\n", b1.price);
	//b1.price = 20;
	//printf("修改后的价格%d\n", b1.price);//书名不能直接b1.name改，应为name是数组而price是个变量
	//若想改变即见下方（上方还需添加#include<string.h>）
	strcpy(b1.name, "c++");
	printf("%s\n", b1.name);
	return 0;
}