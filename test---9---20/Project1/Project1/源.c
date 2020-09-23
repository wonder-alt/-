#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown-s-t 60");//60s将关机
//again:
//	printf("如果不在60s内输入***，则电脑将会关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "***") == 0)//比较两个字符串strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//		goto again;
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit" ;
//	char arr2[20] = "########### ";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr,'*',5);
//	printf("%s\n", arr);
//	return 0;
//}


//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a,b);
//	get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//void swap(int *pa, int *pb)
//{
//	int *tmp = 0;
//	tmp = *pa;
//	*pa = *pb; 
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 8;
//	int b = 24;
//	printf("a=%d\n b=%d\n", a,b);
//	swap(&a,&b);
//	printf("a=%d\n b=%d\n", a,b);
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y% 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//
//int main()
//{
//	int year = 1000;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d\n", year);
//		}
//	}
//	return 0;
//}


//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int middle = 0;
//		middle = (left + right) / 2;
//		if (arr[middle] < k)
//		{
//			left=middle+1;
//		}
//		else if (arr[middle]>k)
//		{
//			right=middle - 1;
//		}
//		else
//		{
//			return middle;
//		}
//	}
//	return 1;
//}
//
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == 1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了%d\n",ret);
//	}
//	return 0;
//}

//void add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int a = 0;
//	add(&a);
//	printf("%d\n",a);
//	add(&a);
//	printf("%d\n", a);
//	add(&a);
//	printf("%d\n", a);
//	return 0;
//}


//void new_line()
//{
//	printf("呵呵");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i <= 3; i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//int main()
//{
//	printf("%d",printf("%d", printf("%d", 43)));
//	return 0;
//}

#include "add.h"
int main()
{
	int a = 50;
	int b = 60;
	int sum = 0;
	sum = add(a, b);
	printf("%d",sum);
}