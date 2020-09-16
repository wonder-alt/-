#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{

//int i = 0;
//for (i = 0; i < 11; i++)
//	printf("%d", i);

/*int i = 0;
for (i = 0; i <= 10; i++)
{
if (i = 8)
printf("hehe");//不可在for循环体内更改变量
printf("haha");
}*/

/*int i = 0;
int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
for (i = 0; i < 10; i++)
{
printf("%d", arr[i]);
}*/

/*
for (;;)
{
printf("hehe");
}*/

/*int i = 0;
for (i = 0; i < 11; i++)
{
int j = 0;
for (j = 0; j < 11;j++)
{
printf("hehe");
}
}*/


//int i = 0;
//int j = 0;
//for (; i < 11; i++)
//{
//	for (; j < 11; j++)//不要轻易省略i=0
//	{
//		printf("hehe");
//	}
//}

//int i = 1;
//do
//{
//	printf("%d", i);
//	i++;
//} while (i < 10);
	///*int i = 0;
	//int n = 0;
	//int ret = 1;
	//int sum = 0;
	//for (n = 1; n <= 3; n++)
	//{
	//	ret = 1;
	//	for (i = 1; i <= n; i++)
	//	{
	//		ret = ret*i;
	//	}
	//	sum = sum + ret;
	//}
	//printf("sum=%d", sum);
	
	/*int n = 0;
	int sum = 0;
	int ret = 1;
	for (n = 1; n <= 3; n++)
	{
		ret = ret*n;
		sum = sum + ret;
	}
		printf("sum=%d", sum);*/

	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 5;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i <= sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到了，数字是=%d\n", i);
			break;
		}
	}*/
	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid]>k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了,下标是：%d", mid);
				break;
		}
	}
	if (left>right)
	{
		printf("找不到");
	}*/
//char arr1[] = { "welcome to bit" };
//char arr2[]= { "###############"};
//int left = 0;
////int right = sizeof(arr1) / sizeof(arr1[0]-2);
//int right = strlen(arr1 - 1);
//
//while (left <= right)
//{
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	printf("%s\n", arr2);
//	Sleep(1000);
//	system("cls");
//	right--;
//	left++;
//}
//printf("%d\n", arr2);
int i = 0;
char password[20] = { 0 };
for (i = 0; i <= 3; i++)
{
	printf("请输入密码:>");
	scanf("%s", password);
	if (strcmp(password,"123456") == 0)
	{
		printf("输入正确\n");
		break;
	}
}
if (i == 3)
{
	printf("输入错误");
}
	return 0;
	}