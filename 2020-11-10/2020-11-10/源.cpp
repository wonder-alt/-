//�Ӽ�������n������������Щ����������������֮�͵����ֵ��
//Ҫ�����һ������min��max����min��max��֮�����������ĺ��ú���ʵ�֣�
//��min>max����������ֵΪ0�������ʽ����һ������Ϊn������Ϊn��������
//���磺��������Ϊ 3 10 20 17 31 40 45����ʾ����3��������
//��Ϊ10~20�����������Ϊ11, 13, 15, 17, 19����
//��֮��Ϊ75, 17~31�����������Ϊ17, 19, 21, 23, 25, 27, 29, 31��
//����֮��Ϊ192����40~45�����������Ϊ41, 43, 45��
//����֮��Ϊ129��������ֵΪ192��������Ϊ192��
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
//��дһ���ݹ麯��fac���ú�������n�Ľ׳ˣ���3�Ľ׳�Ϊ6��0�Ľ׳�Ϊ1��
//main����������n��������������Щ�����Ľ׳�ƽ��ֵ��
//�������룺2 1 2�������1��2�Ľ׳˵�ƽ��ֵ�����1.5��
//ע�⣺���õݹ������⣬��ʹ�ύͨ����Ҳ��������ĿҪ�󣬿���ʱ���÷֡�
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
//���������⡣��һͷСĸţ���ӳ�������ĸ���ͷ��ʼÿ����һͷĸţ�����˹��ɣ���n��ʱ�ж���ͷĸţ�����õݹ麯��������⣩
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