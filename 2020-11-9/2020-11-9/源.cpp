
//����һ��������������Щ��������������֮�͡����е�һ������Ϊ����n������Ϊn��������Ҫ�����һ�����������������ú���ʵ�֡�
//������3 6 8 10������6����������Ϊ4, 8����������Ϊ4, 5����������Ϊ2�����Լ�����Ϊ10��
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
//����2 ��������mini��maxi(0 <= mini, maxi <= 1000)��
//���쳲��������У�Fibonacci sequence����ֵ����mini ��maxi֮��(�����߽�)���е���
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

//�Ӽ�������n������������Щ����������������֮�͵����ֵ��
//Ҫ�����һ������min��max����min��max��֮�����������ĺ��ú���ʵ�֣���min>max����������ֵΪ0��
//�����ʽ����һ������Ϊn������Ϊn��������
//���磺��������Ϊ 3 10 20 17 31 40 45����ʾ����3��������
//��Ϊ10~20�����������Ϊ11, 13, 15, 17, 19������֮��Ϊ75, 17~31�����������Ϊ17, 19, 21, 23, 25, 27, 29, 31��
//����֮��Ϊ192����40~45�����������Ϊ41, 43, 45������֮��Ϊ129��������ֵΪ192��������Ϊ192��
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