
//输入一组整数，计算这些整数的因数个数之和。其中第一个整数为个数n，后续为n个整数。要求计算一个整数的因数个数用函数实现。
//如输入3 6 8 10，其中6的因数个数为4, 8的因数个数为4, 5的因数个数为2，所以计算结果为10。
//#include<iostream>
//using namespace std;
//int way(int a)
//{
//	int count=0;
//	for (int i = 1; i <= a; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			if (i*j == a)
//			{
//				if (i == j)
//				{
//				 count++;
//				}
//				else
//					 count=count+2;
//			}
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n,sum=0;
//	cin >> n;
//	for (int  i = 1; i <= n; i++)
//		{
//		int a;
//		cin >> a;
//		sum+=way(a);
//	     }
//	cout << sum;
//	return 0;
//}
//输入2 个正整数mini和maxi(0 <= mini, maxi <= 1000)，
//输出斐波那契数列（Fibonacci sequence）的值介于mini 和maxi之间(不含边界)所有的数
//#include<iostream>
//using namespace std;
//void fib(int mini,int maxi)
//{
//	int i = 1;
//	int num0 = 0;
//	int num1 = 1;
//	int num2 ;
//	while (1)
//	{
//		num2 = num1 + num0;
//		num0 = num1;
//		num1 = num2;
//		if (mini < num2&&maxi > num2)
//			cout << num2 << " ";
//		if (maxi <=num2)
//			break;
//	}
//}
//int main()
//{
//	int mini, maxi;
//	cin >> mini >> maxi;
//	fib(mini,maxi);
//	return 0;
//}

//从键盘输入n对整数，求这些对整数间所有奇数之和的最大值。
//要求计算一对整数min、max（含min和max）之间所有奇数的和用函数实现，若min>max，函数返回值为0。
//输入格式：第一个整数为n，后续为n对整数。
//例如：输入数据为 3 10 20 17 31 40 45，表示输入3对整数，
//因为10~20间的奇数依次为11, 13, 15, 17, 19，奇数之和为75, 17~31间的奇数依次为17, 19, 21, 23, 25, 27, 29, 31，
//奇数之和为192，而40~45间的奇数依次为41, 43, 45，奇数之和为129，因此最大值为192，输出结果为192。
#include<iostream>
using namespace std;
void fib(int mini, int maxi)
{
	int num0 = 0;
	int num1 = 1;
	int num2 ;
	while (1)
	{
		num2 = num0 + num1;
		num0 = num1;
		num1 = num2;
		if (num2 > mini&&num2 < maxi)
			cout << num2<<" ";
		else if (num2>maxi)
			break;
	}
}
int main()
{
	int maxi, mini;
	cin >> mini >> maxi;
	fib(mini, maxi);
	return 0;
}