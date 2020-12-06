//#include<iostream>
//using namespace std;
//void sort(int x, int n, int s[])
//{
//	int i = 0, j = 0;
//	int count = 0;
//	for (i = 0; i<n; i++)
//	{
//		if (x >= s[i])
//		{
//			count++;
//			for (j = n - 1; j >= i; j--)
//			{
//				s[j + 1] = s[j];
//			}
//			s[i] = x;
//			break;
//		}
//	}
//	if (count == 0)
//	{
//		s[n] = x;
//	}
//	n++;
//	for (i = 0; i<n; i++)
//	{
//		cout << s[i] << " ";
//	}
//}
//int main()
//{
//	int n, s[100];
//	cin >> n;
//	int i = 0, j = 0;
//	for (i = 0; i<n; i++)
//	{
//		cin >> s[i];
//	}
//	int tmp;
//	for (i = 0; i<n - 1; i++)
//	{
//		for (j = i + 1; j<n; j++)
//		{
//			if (s[i]<s[j])
//			{
//				tmp = s[i];
//				s[i] = s[j];
//				s[j] = tmp;
//			}
//		}
//	}
//	int x;
//	cin >> x;
//	sort(x, n, s);
//	return 0;
//}




#include<iostream>
using namespace std;
int fib(int i)
{
	if (i == 0)
		return 0;
	else if (i == 1)
		return 1;

	else
		return fib(i - 1) + fib(i - 2);
}
int main()
{
	int m, n;
	int i = 0;
	cin >> m >> n;
	while (1)
	{
		if (fib(i)>m&&fib(i)<n)
			cout << fib(i);
		if (fib(i) >= n)
			break;
		i++;
	}
	return 0;
}