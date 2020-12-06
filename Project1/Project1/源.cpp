//从键盘输入n(n<100)个整数（以0结束），存放在一个一维数组中，输出其中位数。
//	说明：中位数（Medians）统计学名词，是指将数据按从小到大顺序排列起来，形成一个数列，居于数列中间位置的那个数据。
//若数列元素个数为奇数，则中位数为最中间的元素；
//	若数列元素个数为偶数，则中位数为最中间两个元素的平均数。
//例如：输入2 7 9 11 5 4 3 6 8 20 0则排序后结果为2 3 4 5 6 7 8 9 11 20，则中间两个数的平均值为6.5

//#include<iostream>
//using namespace std;
//int main()
//{
//	const int maxsize = 100;
//	int s[maxsize];
//	int i = 0,j = 0,count=0;
//	double med;
//	while (1)
//	{
//		cin >> s[i];
//		if (s[i] == 0)
//			break;
//		i++;
//		count++;
//	}
//	for (i = 0; i < count - 1; i++)
//	{
//		for (j = i+1; j < count; j++)
//		{
//			if (s[i] > s[j])
//			{
//				int tmp=0;
//				tmp=s[j];
//				s[j] = s[i];
//				s[i] = tmp;
//			}
//		}
//	}
//	int n = i + 1;
//	if (i % 2 == 0)//奇数
//	{
//		med = 1.0* s[i / 2];
//	}
//	if (i % 2 != 0)
//	{
//		med = 1.0*((s[i / 2] + (s[i / 2 + 1])*1.0) / 2);
//		
//	}
//	cout << med;
//	return 0;
//}
//从键盘输入n(n<100)个整数（以0结束），存放在一个一维数组中，将它们按奇数在前、偶数在后，
//同为奇数或偶数的按从小到大的顺序排序，并输出排序后的结果。
//	其中：排序过程用函数实现。
//#include<iostream>
//using namespace std;
//const int maxsize = 100;
//void sort123(int s[100],int count)
//{
//	int i,j,tmp;
//	for (i = 0; i < count-1; i++)
//	{
//		for (j = i + 1; j < count; j++)
//		{
//			if (s[i] % 2 < s[j] % 2 || s[i] % 2 == s[j] % 2 && s[i] > s[j])
//			{
//				tmp = s[i];
//				s[i] = s[j];
//				s[j] = tmp;
//			}
//		}
//	}
//	
//}
//int main()
//{
//	int i=0, j,count=0;
//	int s[maxsize];
//	while (1)
//	{
//		cin >> s[i];
//		if (s[i] == 0)
//			break;
//		i++;
//		count++;
//	}
//	sort123(s,count);
//	for (i = 0; i < count; i++)
//	{
//		cout << s[i] << " ";
//	}
//	cout << '\n';
//	return 0;
//}

//#include<iostream>
//using namespace std;
//const int maxsize = 100;
//void sort(int count,int s[])
//{
//	int i = 0, j;
//	for (i = 0; i < count - 1; i++)
//	{
//		for (j = i + 1; j < count; j++)
//		{
//			if (s[i] % 2 > s[j] % 2 || s[i] < s[j] && s[i] % 2 == s[j] % 2)
//			{
//				int tmp;
//				tmp = s[i];
//				s[i] = s[j];
//				s[j] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int s[maxsize];
//	int i = 0, j = 0, count = 0;
//	while (1)
//	{
//		cin >> s[i];
//		if (s[i] == 0)
//			break;
//		i++;
//		count++;
//	}
//	sort(count, s);
//	for (i = 0; i < count; i++)
//	{
//		cout << s[i]<<" ";
//	}
//	return 0;
//}


//输入一个正整数n（n<100），将斐波那契数列的前n项保存到一维数组中，并输出斐波那契数列中对3取余为2的数。
//	斐波那契数列为：0 1 1 2 3 5 8 13 21 34 55……，起始项为第0项。
//#include<iostream>
//using namespace std;
//const int maxsize = 100;
//int fib(int i)
//{
//	int j;
//	if (i == 0)
//		return 0;
//	if (i == 1)
//		return 1;
//	if (i > 1)
//	{
//		int num1 = 0;
//		int num2 = 1;
//		int num3;
//		for (j = 1; j < i; j++)
//		{
//			num3 = num1 + num2;
//			num1 = num2;
//			num2 = num3;
//		}
//		return num3;
//	}
//}
//int main()
//{
//	int i, j;
//	int s[maxsize];
//	int n;
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		s[i] = fib( i);
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (s[i] % 3 == 2)
//			cout << s[i] << " ";
//	}
//	return 0;
//}
//输入m、n（m，n<100），输出[m, n]之间的素数。要求：使用筛选法求素数。
//	求100以内素数的筛选过程：在一张纸上写上1到100全部整数，然后逐个判断它们是否是素数，
//找出所有的非素数，把它挖掉，最后剩下的就是素数。提示：可以将1~100这些数存储于数组1~100下标，挖掉的数据置为0。
//	具体做法如下：
//	<1> 先将1挖掉(因为1不是素数)。
//	<2> 找到数组中第一个非零值（2），把2的倍数挖掉。
//	<3> 重复步骤<2>，再把3，。。。的倍数挖掉，直至11时结束（实际上可以挖掉7的倍数后即可结束）。
//	<4> 数组中非零值即为素数。
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[101] ;
//	int m, n,j;
//	cin >> m >> n;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		arr[i] = i;
//		if (arr[i] == 1)
//		{
//			arr[i] = 0;
//		}
//		if (arr[i] >2)
//		{
//			for (j = 2; j <7&&j<i; j++)
//			{
//				if (arr[i] % j == 0)
//				{
//					arr[i] = 0;
//				}
//			}
//		}
//	}
//	for (i = m; i <= n; i++)
//	{		
//		if (arr[i] != 0)
//		{
//			cout << arr[i]<<" ";
//		}
//	}
//	return 0;
//}

//从键盘输入任意个整数（以0结束，假设个数不超过100个），从0下标开始依次存放在一维数组中，再输入插入位置pos（0 <= pos <= n）及被插入的元素x，
//将x插入到数组的pos下标处pos。输出插入后数组中的所有元素。
#include<iostream>
using namespace std;
const int maxsize = 100;
int main()
{
	int i = 0,count=0,x;
	int pos;
	int s[maxsize];
	int tmp;
	while (1)
	{
		cin >> s[i];
		if (s[i] == 0)
		{
			break;
		}
		i++;
		count++;
	}
	cin >> pos;
	for (i = pos; i < count+1; i++ )
	{
		tmp = s[i + 1];
		s[i + 1] = s[i];
		s[i + 2] = tmp;
	}
	cin >> x;
	s[pos] = x;
	for (i = 0; i < count + 1; i++)
		cout << s[i] << " ";
	return 0;
}
//从键盘输入n(n<100)个整数（以0结束），存放在一个一维数组中，将它们按奇数在前、偶数在后，
//同为奇数或偶数的按从小到大的顺序排序，并输出排序后的结果。
//	其中：排序过程用函数实现。
//#include<iostream>
//using namespace std;
//const int maxsize = 100;
//int main()
//{
//	int s[maxsize];
//	int i = 0;
//	while (1)
//	{
//		cin >> s[i];
//
//	}
//	sort()
//	return 0;
//}