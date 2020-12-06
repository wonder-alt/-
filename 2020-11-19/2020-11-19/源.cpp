
//从键盘输入n个整数（n<100），存放在一个一维数组中，逆序输出能被3整除的元素，并逆序输出数组下标为3的倍数的元素。
//输入格式：第一个整数为个数n，后续为n个整数
//输出格式：第一行能被3整除的元素，第二行为下标为3的倍数的元素，各个数值之间用空格分隔。
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
//从键盘输入n（n<100）个整数，存放在一个一维数组a中，将它们逆序存放在另一个整型数组b中，
//并按b数组中下标从小到大的顺序输出下标为3的倍数的数组元素。
//输入格式：第一个数为数组中元素个数n，之后为n个元素。
//输出格式：下标为3的倍数的元素，各个数值之间用空格分隔。
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

//从键盘输入任意个整数（以0结束，假设不超过100个），存放在一个一维数组中，计算这组数的平均值（实型）。
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

//从键盘输入任意个整数（以0结束，个数不超过100），存放在一个一维数组中，输出这组数的最大值。
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

//从键盘输入任意个整数（以0结束，个数不超过100），存放在一个一维数组中，数据从数组的0下标开始存储，输出这组数的最小值所在数组下标。
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
//从键盘输入任意个整数（以0结束，假设个数最大不超过100），将这些数存放在一个一维数组中，将它们从小到大排序后输出。
//# include <iostream>  //理解版
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