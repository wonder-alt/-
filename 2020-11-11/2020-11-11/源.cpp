//输入两个正整数min、max，计算[min, max]之间所有的素数之和。
//将判断一个整数是否为素数用函数实现。
//
//输入n对整数，计算这n对整数最小公倍数之和。其中计算一对整数的最小公倍数用函数实现。
//输入格式：第一个为对数n，后续为n对整数。
//#include<iostream>
//using namespace std;
//int way(int a, int b)
//{
//	if (a > b)
//	{
//		int min = a*b;
//		for (int i = a;i<a*b; i++)
//		{
//			if (i%a == 0 && i%b == 0)
//			{
//				if (i < min)
//				{
//					min = i;
//				}
//			}
//		}
//		return min;
//	}
//	if (a < b)
//	{
//		int min =a*b;
//		for (int i = b; i<b*a; i++)
//		{
//			if (i%a == 0 && i%b == 0)
//			{
//				if (i < min)
//				{
//					min = i;
//				}
//			}
//		}
//		return min;
//	}
//}
//int main()
//{
//	int n,a,b,sum=0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a >> b;
//		way(a, b);
//		sum = sum + way(a, b);
//	}
//	cout << sum;
//	return 0;
//}
//从键盘输入一组整数（以0结束），计算这组整数逆序后之和。
//其中将一个整数逆序用函数实现，整数123逆序为321、整数 - 345逆序为 - 543。
//Input
//Output
//Sample Input
//234 894 - 94 736 0
//Sample Output
//1518

//#include<iostream>
//using namespace std;
//int ni(int num)
//{
//	int sum=0;
//		int i;
//		while (num != 0)
//		{
//			i = num % 10;
//			num = num / 10;
//			sum = i + sum * 10;
//		}
//	return sum;
//}
//int main()
//{
//	int num,sum=0;
//	while (1)
//	{
//		cin >> num;
//		if (num == 0)
//		{
//			break;
//		}
//		else
//		{
//			sum += ni(num);
//		}
//	}
//	cout << sum;
//	return 0;
//}
//题目描述
//输入一组正整数（以0结束），输出其中数位之和为奇数的整数。
//其中求一个数的数位之和用函数实现。
//输入
//输出
//样例输入
//12 22 45 88 0
//样例输出
//12 45
//提示
//来源
//#include<iostream>
//using namespace std;
//int sh(int num)
//{
//	int all=num;
//	int s=0,sum=0;
//	while (all != 0)
//	{
//		s = all % 10;
//		all = all / 10;
//		sum =sum+s;
//	}
//	if (sum % 2 != 0)
//		return  num;
//}
//int main()
//{
//	int num;
//	while (1)
//	{
//		cin >> num;
//		if (num == 0)
//			break;
//		else if (sh(num)==num)
//			cout<<sh(num)<<" ";
//	}
//	return 0;
//}
//题目描述
//输入2个正整数a和n，求a + aa + aaa + aa…a(n个a)之和。
//例如，输入2和3，则计算2 + 22 + 222，输出246。
//将求i个a组成的数用函数实现，即函数int f（int a，int i）的返回值为i个a的值，例如f（3，2）值为33。
//输入
//输出
//样例输入
//2 3
//样例输出
//246
//提示
//来源

//#include<iostream>
//using namespace std;
//int f(int a, int n)
//{
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum = a + sum * 10;
//	}
//	return sum;
//}
//int main()
//{
//	int sum = 0, a, n, i;
//	cin >> a >> n;
//	for (i = 1; i <= n; i++)
//	{
//		sum = f(a, i) + sum;
//	}
//	cout << sum;
//	return 0;
//}
//题目描述
//编写一个函数f(n) = 1 + 2 + ... + n。main函数从键盘输入m、n，利用该函数计算并输出f(m) + f(n)。
//输入
//输出
//样例输入
//10 5
//样例输出
//70
//提示
//来源
//#include<iostream>
//using namespace std;
//int f(int i)
//{
//	int sum = 0;
//	for (int j = 1; j <= i; j++)
//	{
//		sum += j;
//	}
//	return sum;
//}
//int main()
//{
//	int m, n,sum=0;
//	cin >> m >> n;
//	sum = f(m) + f(n);
//	cout << sum;
//	return 0;
//}
//题目描述
//编写一个函数f（x），若x>0函数返回值为1，若x<0函数返回值为 - 1，
//若x = 0函数返回值为0，利用该函数实现计算输入的n个整数中正整数的平均值。
//输入格式中第一个为整数个数n，后续为n个整数。
//输入
//输出
//样例输入
//5  2 5 - 5 3 - 3
//样例输出
//3.33333
//提示
//来源

//#include<iostream>
//using namespace std;
//int f(int x)
//{
//	if (x > 0)
//		return 1;
//	if (x = 0)
//		return 0;
//	if (x < 0)
//		return -1;
//}
//int main()
//{
//	double ave,n,num,sum=0,count=0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num;
//		if (f(num)>0)
//		{
//			sum = sum + num;
//			count++;
//		}
//	}
//	ave = sum *1.0/ count;
//	cout << ave;
//	return 0;
//}
//题目描述
//输入n个正整数（输入格式中第一个为整数个数n，后续为n个整数），输出各个数的数根。
//要求计算一个数的数根部分利用递归函数实现。
//数根的定义：对于一个正整数n，我们将它的各个位相加得到一个新的数字，如果这个数字是一位数，我们称之为n的数根，
//否则重复处理直到它成为一个一位数，这个一位数也算是n的数根。例如：考虑24，2 + 4 = 6，6就是24的数根。
//考虑39，3 + 9 = 12，1 + 2 = 3，3就是39的数根。
//输入
//输出
//样例输入
//5 23 424 98 632 12345
//样例输出
//5 1 8 2 6
//提示
//来源
//#include<iostream>
//using namespace std;
//int way(int num)
//{
//	int sum = 0;
//	while (num != 0)
//	{
//		sum += num % 10;
//		num = num / 10;
//	}
//	if (sum <= 9)
//		return sum;
//	else
//		return  way(sum);
//}
//int main()
//{
//	int n,num;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num;
//		cout<<way(num)<<" ";
//	}
//	return 0;
//}


//输入若干个正整数（输入时以0结束），输出其中所有的奇数及奇数个数。
//要求判断一个数num的奇偶写成函数bool isodd（num），奇数返回true，否则返回false。
//#include<iostream>
//using namespace std;
//bool isodd(int num)
//{
//	if (num % 2 == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		cout << num<<" ";
//		return 1;
//	}
//}
//int main()
//{
//	int num,sum=0;
//	while (1)
//	{
//		cin >> num;
//		if (num == 0)
//			break;
//		else
//			sum += isodd(num);
//	}
//	cout << sum<<" ";
//	return 0;
//}
//编写一个函数求一个数的所有因子之和。主函数中输入两个整数m、n，
//利用该函数依次实现下列问题：1)找出n以内所有完数； 2）找出m~n间所有素数 
//提示：完数定义为除自身外的所有因子之和等于它本身的数；素数定义为除了能被1和自身整数外，不能被其它数整数。
//注意：完数和素数分2行显示。
//#include<iostream>
//using namespace std;
//int hz(int n)
//{
//	int sum = 0;
//	for(i=)
//}
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	hz(n)
//	return 0;
//}