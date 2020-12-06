//输入一个n*n（假设n值不超过50）的矩阵存储于二维数组，求出两条对角线元素值之和。
//如果对角线有重叠数据（n为奇数时），不重复相加。
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,sum1=0,sum2=0,sum=0;
//	cin >> n;
//	int s[50][50], i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			cin >> s[i][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		sum1 += s[i][i];
//	}
//	cout << endl;
//	for (i = 0, j = n-1; i < n; i++, j--)
//	{
//		if (i!=j)
//		sum2 += s[i][j];
//	}
//	sum = sum1 + sum2;
//	cout << sum;
//	return 0;
//}

//输入一个5 * 5的矩阵，输出所有的鞍点。
//所谓鞍点是指一行中的最大值也是该列中的最小值。
//#include<iostream>
//using namespace std;
//int main()
//{
//	int s[5][5];
//	int i, j = 0;
//	int maxi[50] = { 0 }, minj[50] = { { 100 },{ 100 },{100},{100},{100} };
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			cin >> s[i][j];
//		}
//	}
//
//
//
//
//	for (i = 0; i < 5; i++)
//	{
//		maxi[i] = s[i][0];
//		for (j = 0; j < 5; j++)
//		{
//			if (s[i][j]>maxi[i])
//			{
//				maxi[i] = s[i][j];
//			}
//		}
//	}
//	
//	for (j = 0; j < 5; j++)
//	{
//		minj[j] = s[0][j];
//		for (i = 0; i < 5; i++)
//		{
//			if (s[i][j]<minj[j])
//			{
//				minj[j] = s[i][j];
//			}
//		}
//	}
//	
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5;j++)
//		if (maxi[i] == minj[j])
//		{
//			cout << s[i][j] << " ";
//		}
//	}
//	return 0;
//}

//数组指针018：回文字符串
//从键盘输入n（n<100）个字符串(每个字符串长度不超过19)，输出这组字符串中的回文字符串。
//其中判断一个字符串是否为回文字符串用函数实现，且字符访问能够利用下标和指针两种方式实现。
//所谓回文串是指顺读和倒读都一样的一个字符串，如”level”、”abccba”都是回文串。
////输入格式：第一个为个数n，后续为n个字符串。
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,i,j,k=0,count=0,sum1=0,sum2=0;
//	cin >> n;
//	int s[100];
//	for (i = 0; i < n; i++)
//	{
//		cin >> s[i];
//	}
//	for (k = 0; k < n; k++)
//	{
//		i = k;
//		 j = s[k];
//		while (j != 0)
//		{
//			j=j / 10;
//			count++;
//		}
//		if (count % 2 == 0)//偶数
//		{
//			j = s[i];
//			for (i = count; i > count / 2; i--)
//			{
//				sum1 = j % 10 + sum1;
//				j = j / 10;
//			}
//			for (i = count / 2; i > 0; i--)
//			{
//				sum2 += j % 10;
//				j = j / 10;
//			}
//			if (sum1 == sum2)
//			{
//				cout << s[i]<<" ";
//			}
//		}
//		if (count % 2 != 0)//奇数
//		{
//			j = s[i];
//			for (i = count; i > count / 2+1; i--)
//			{
//				sum1 = j % 10 + sum1;
//				j = j / 10;
//			}
//			for (i = count / 2; i > 0; i--)
//			{
//				j = j / 10;
//				sum2 += j % 10;
//				j = j / 10;
//			}
//			if (sum1 == sum2)
//			{
//				cout << s[k]<<" ";
//			}
//		}
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	char s[100];
	int n, j = 0;
	cin >> n;
	for (j = 0; j<n; j++)
	{
		cin >> s;
		int len = 0;
		while (s[len] != '\0')
		{
			len++;
		}
		int i;
		for (i = 0; i<len / 2; i++)
		{
			if (s[i] != s[len - i - 1])
				break;
		}
		if (i == len / 2)
		{
			cout << s << " ";
		}
	}
	return 0;
}
