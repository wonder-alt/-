//输入一组整数，其中第一个整数为个数n，后续为n个整数，输出其中素数的个数。
//要求将判断一个整数是否为素数用函数实现
//#include<iostream>
//using namespace std;
//int is_primary(int a)
//{
//	int c=0;
//	if (a == 1)
//		return 0;
//	else if (a == 2)
//		return 1;
//	else
//	{
//		for (int i = 2; i < a; i++)
//		{
//			int b;
//			b = a%i;
//			if (b == 0)
//			{
//				c++;
//				return 0;
//			}
//		}
//		if (c == 0)
//			return 1;
//	}
//}
//
//int main()
//{
//	int sum=0,n,i;
//	cin >> n;
//	for (i = 1; i <= n; i++)
//	{
//		int a;
//		cin >> a;
//		sum = sum + is_primary(a);
//	}
//
//	cout << sum << " ";
//}

