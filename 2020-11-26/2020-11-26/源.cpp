//����һ��n*n������nֵ������50���ľ���洢�ڶ�ά���飬��������Խ���Ԫ��ֵ֮�͡�
//����Խ������ص����ݣ�nΪ����ʱ�������ظ���ӡ�
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

//����һ��5 * 5�ľ���������еİ��㡣
//��ν������ָһ���е����ֵҲ�Ǹ����е���Сֵ��
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

//����ָ��018�������ַ���
//�Ӽ�������n��n<100�����ַ���(ÿ���ַ������Ȳ�����19)����������ַ����еĻ����ַ�����
//�����ж�һ���ַ����Ƿ�Ϊ�����ַ����ú���ʵ�֣����ַ������ܹ������±��ָ�����ַ�ʽʵ�֡�
//��ν���Ĵ���ָ˳���͵�����һ����һ���ַ������硱level������abccba�����ǻ��Ĵ���
////�����ʽ����һ��Ϊ����n������Ϊn���ַ�����
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
//		if (count % 2 == 0)//ż��
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
//		if (count % 2 != 0)//����
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
