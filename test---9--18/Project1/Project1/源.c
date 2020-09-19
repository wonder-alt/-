#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
#include<time.h>

//int main()
//{
//	printf("hello\n");
//	goto again;
//	printf("hai\n");
//	again:
//	return 0;
//}



//void menu()
//{
//	printf("****     1、猜数字   2、退出     ****");
//}
//
//	void game()
//	{
//		//1、生成一个随机数
//		int ret = 0;
//		int guess = 0;//接收猜的数字
//		ret = rand() % 100+1;//没懂（为啥是生成10——100之间的随机数）
//		//printf("%d\n",ret);
//		//2、猜数字
//		while(1)
//		{
//			printf("请输入数字:>");
//			scanf("%d\n", &guess);
//			if (guess > ret)
//			{
//				printf("猜大了\n");
//			}
//			else if(guess<ret)
//			{
//				printf("猜小了\n");
//			}
//			else
//			{
//				printf("猜中了\n");
//					break;
//			}
//		}
//	}
//	int main()
//	{
//		int input = 0;
//		srand((unsigned int)time(NULL));//那时间戳来设置时间
//		do
//		{
//			menu();
//			printf("请选择 >:");
//			scanf("%d\n", &input);
//			switch(input)
//			{
//			case 1:
//				game();
//				break;
//			case 2:
//				printf("退出游戏");
//				break;
//			default:
//				printf("选择错误");
//				break;
//			}
//		} while (input);
//		return 0;
//	}



//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf(" %d*%d=%-2d", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int max = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//	}
//	if (i / 10 == 9)
//	{
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i<= 200; i++)//for(i=100;i<=200;i+=2)
//	{
//		int j = 0;
//		//for (j = 2; j < i; j++)
//		for (j = 2; j <= sqrt(i);j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		//if (j==i)
//			if (j>sqrt(i))
//			{
//				printf("%d", i);
//				count++;
//			}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}



//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		/*if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d", year);
//			count++;
//		}
//		if (year % 400 == 0)
//			printf("%d", year);
//		count++;*/
//		if (((year % 4 == 0) &&( year % 100 != 0))||(year % 400 == 0))
//		{
//			printf("%d",year);
//			count++;
//		}
//	}
//
//	return 0;
//}




//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d %d", &m, &n);//求最大公因数
//	while (m%n != 0)
//	{
//	 r=m%n;
//	 m = n;
//	 n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//	    c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a ,b, c);
//	return 0;
//}