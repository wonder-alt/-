
//�Ӽ�������n��������n<100���������һ��һά�����У���������ܱ�3������Ԫ�أ���������������±�Ϊ3�ı�����Ԫ�ء�
//�����ʽ����һ������Ϊ����n������Ϊn������
//�����ʽ����һ���ܱ�3������Ԫ�أ��ڶ���Ϊ�±�Ϊ3�ı�����Ԫ�أ�������ֵ֮���ÿո�ָ���
//#include<iostream>
//using namespace std;
//int main()
//{
//	const int maxsize=100;
//	int s[maxsize];
//	int n;
//	cin >> n;
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		cin >> s[i];
//	}
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (s[i] % 3 == 0)
//			cout << s[i] << " ";
//	}
//	cout << endl;
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (i% 3 == 0)
//			cout << s[i] << " ";
//	}
//	return 0;
//}
//�Ӽ�������n��n<100���������������һ��һά����a�У�����������������һ����������b�У�
//����b�������±��С�����˳������±�Ϊ3�ı���������Ԫ�ء�
//�����ʽ����һ����Ϊ������Ԫ�ظ���n��֮��Ϊn��Ԫ�ء�
//�����ʽ���±�Ϊ3�ı�����Ԫ�أ�������ֵ֮���ÿո�ָ���
//#include<iostream>
//using namespace std;
//int main()
//{
//	const int maxsize = 100;
//	int a[maxsize],b[maxsize];
//	int n;
//	cin >> n;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		b[i] = a[n - 1 - i];
//		if (i % 3 == 0)
//			cout << b[i] << " ";
//	}
//	return 0;
//}

//�Ӽ��������������������0���������費����100�����������һ��һά�����У�������������ƽ��ֵ��ʵ�ͣ���
//#include<iostream>
//using namespace std;
//int main()
//{
//	const int maxsize = 100;
//	int s[maxsize];
//	int sum = 0, count = 0,i = 0, num;
//	double ave;
//	while (1)
//	{
//		cin >> s[i];
//		if (s[i] == 0)
//			break;
//		sum += s[i];
//		count++;
//		i++;
//	}
//	ave = sum *1.0/ count;
//	cout << ave;
//	return 0;
//}

//�Ӽ��������������������0����������������100���������һ��һά�����У���������������ֵ��
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = 0,max=0;
//	const int maxsize = 100;
//	int s[maxsize];
//	while (1)
//	{
//		cin >> s[i];
//		if (s[i] == 0)
//			break;
//		if (s[i] > max)
//			max = s[i];
//		i++;
//	}
//	cout << max;
//	return 0;
//}

//�Ӽ��������������������0����������������100���������һ��һά�����У����ݴ������0�±꿪ʼ�洢���������������Сֵ���������±ꡣ
//#include<iostream>
//using namespace std;
//int main()
//{
//	const int maxsize = 100;
//	int min = 1;
//	int f[maxsize];
//	int i=0;
//	while (true)
//	{
//		cin >> f[i];
//		if (f[i]==0)
//		{
//			break;
//		}
//		if (f[i] < f[min])
//			min = i;
//		i++;
//	}
//	cout << min;
//	return 0;
//}
//�Ӽ��������������������0���������������󲻳���100��������Щ�������һ��һά�����У������Ǵ�С��������������
//# include <iostream>  //����
//using namespace std;
//
//int main()
//{
//	int a[100];
//	int i = 0;
//	cin >> a[i];
//	while (a[i])
//	{
//		i++;
//		cin >> a[i];
//	}
//	int count = i;
//	int tmp;
//	for (i = 0; i < count-1; i++)
//	{
//		for (int j = i+1; j < count; j++)
//		{
//			if (a[i]> a[j])
//			{
//				tmp = a[i];
//				a[i] = a[j];
//				a[j] = tmp;
//				for (int k = 0; k < count; k++)
//			cout << a[k] << " ";
//			cout << endl;
//			}
//			
//		}
//		cout << endl;
//		for (int k = 0; k < count; k++)
//			cout << a[k] << " ";
//		cout << endl;
//	}
//	for (i = 0; i < count ; i++)
//	{
//		cout << a[i] << " ";
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	const int maxsize = 100;
	int f[maxsize];
	int i=0, j,count=0;
	int tmp;
	while (1)
	{
		cin >> f[i];
		if (f[i] == 0)
			break;
		count++;
		i++;
	}
	for (i = 0; i < count - 1; i++)
	{
		for (j = i + 1; j < count; j++)
		{
			if (f[i]>f[j])
			{
				tmp = f[i];
				f[i] = f[j];
				f[j] = tmp;
			}
		}
	}
	for (i = 0; i < count; i++)
	{
		cout << f[i]<<" ";
	}
	return 0;
}