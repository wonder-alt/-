//从键盘输入n对整数，求这些对整数间所有奇数之和的最大值。
//要求计算一对整数min、max（含min和max）之间所有奇数的和用函数实现，
//若min>max，函数返回值为0。输入格式：第一个整数为n，后续为n对整数。
//例如：输入数据为 3 10 20 17 31 40 45，表示输入3对整数，
//因为10~20间的奇数依次为11, 13, 15, 17, 19，奇
//数之和为75, 17~31间的奇数依次为17, 19, 21, 23, 25, 27, 29, 31，
//奇数之和为192，而40~45间的奇数依次为41, 43, 45，
//奇数之和为129，因此最大值为192，输出结果为192。
//#include<iostream>
//using namespace std;
//int way(int num1, int num2)
//{
//	int i,sum=0;
//	for (i = num1; i <= num2; i++)
//	{
//		if (i % 2 != 0)
//		{
//				sum+= i;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int n,max=0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int num1, num2;
//		cin >> num1 >> num2;
//		way(num1, num2);
//		if (way(num1, num2) > max)
//		{
//			max = way(num1, num2);
//		}
//	}
//	cout << max<<" ";
//	return 0;
//}
//编写一个递归函数fac，该函数计算n的阶乘，如3的阶乘为6，0的阶乘为1。
//main函数中输入n个整数，计算这些整数的阶乘平均值。
//例如输入：2 1 2，则计算1和2的阶乘的平均值，输出1.5。
//注意：不用递归解决问题，即使提交通过，也不符合题目要求，考试时不得分。
//#include<iostream>
//using namespace std;
//int fac(int num,int f)
//{
//	if (num > 0)
//	{
//		f = f*num;
//		num--;
//		return fac(num, f);
//	}
//	else
//		return f;
//}
//int main()
//{
//	int n,i,sum=0;
//	double ave;
//	cin >> n;
//	for (i = 1; i <= n; i++)
//	{
//		int num;
//		int f = 1;
//		cin >> num;
//		if (num == 0)
//		{
//			sum += 1;
//		}
//		else
//		{
//			fac(num, f);
//			sum += fac(num, f);
//		}
//	}
//	ave = (sum*1.0) / n;
//	cout << ave;
//	return 0; 
//}
//编程求解问题。若一头小母牛，从出生起第四个年头开始每年生一头母牛，按此规律，第n年时有多少头母牛。（用递归函数方法求解）
#include<iostream>
using namespace std;
int f(int n)
{
	
	if (n < 4)
		return 1 ;
	else
	{
		if (n >= 4)
			
		return f(n-1)+f(n-3);
	}
}
int main()
{
	int n;
	int sum = 1;
	int a = 0;
	cin >> n;
	cout << f(n);
	return 0;
}