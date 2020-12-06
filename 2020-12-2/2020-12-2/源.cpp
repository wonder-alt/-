//输入n 个(n<100)二进制整数，计算这n个二进制整数之和。
//要求：将二进制整数转换为十进制整数用函数实现，其中二进制数用字符串存储。
//提示：（1）二进制整数用字符串存储；
//（2）11001的计算过程为：(((1 * 2 + 1) * 2 + 0) * 2 + 0) * 2 + 1 = 25。
//	输入格式：第一个整数为个数n，后续为n个二进制正整数。
//#include<iostream>
//using namespace std;
//int bin(char s[],int len)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < len-1;i++)
//	{
//		sum=(sum + (s[i]-'0')) * 2;
//	}
//	return sum+(s[len-1]-'0');
//}
//int main()
//{
//	int n;
//	cin >>n ;
//	int len = 0;
//	int sum = 0;
//	char s[100];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		cin >> s;
//		while (s[len] != '\0')
//			len++;
//		sum+=bin(s, len);
//		len = 0;
//	}
//	cout << sum;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{ 
//	int n;
//	cin >> n;
//	int s[100];
//	int i = 0;
//	int arr[100];
//	for (i = 0; i < n; i++)
//	{
//		cin >> s[i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (i >= n - 3)
//		{
//			int j = 0;
//			for (j = 2, i = n - 1; j >= 0; j--, i--)
//			{
//				arr[j] = s[i];
//			}
//			break;
//		}
//	}
//		for (i = n - 4; i >= 0; i--)
//		{
//			s[i+3]=s[i];
//		}
//		for (i = 0; i < 3; i++)
//			s[i] = arr[i];
//		for (i = 0; i < n;i++)
//		cout <<s[i]<<" " ;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int arr[110][110];
//	int i = 0, j = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	int sumi = 0,sumj=0;
//	for (j = 0; j < 5; j++)
//	{
//		sumj += arr[j][0] + arr[j][4];
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		sumi += arr[0][i] + arr[4][i];
//	}
//
//	int sum = 0;
//	sum = sumi + sumj-arr[0][0]-arr[0][n-1]-arr[m-1][n-1]-arr[m-1][0];
//	cout << sum;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int find(int count,int s[],int x)
//{
//	int i = 0;
//	int j = 0;
//	
//	for (i = 0; i < count; i++)
//	{
//		if (x == s[i])
//		{
//			return  i;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int i = 0;
//	int s[100];
//	int count = 0;
//	while (1)
//	{
//		cin >> s[i];
//		if (s[i] == 0)
//		{
//			break;
//		}
//		i++;
//		count++;
//	}
//	int x;
//	cin >> x;
//	if (find(count, s,x) >= 0)
//		cout << find(count, s,x);
//	else cout << -1;
//	return 0;
//}

#include<iostream>
using namespace std;
void ave(double s[],int count)
{
	double sum = 0;
	int i = 0;
	for (i = 0; i < count; i++)
		sum += s[i];
	cout << sum*1.0 / count;
}
int main()
{
	double s[100] ;
	int i = 0;
	int count = 0;
	while (1)
	{
		cin >> s[i];
		if (s[i] == 0)
			break;
		i++;
		count++;
	}
	 ave(s, count);
	return 0;
}