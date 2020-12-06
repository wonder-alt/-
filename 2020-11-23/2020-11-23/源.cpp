//#include<iostream>
//using namespace std;
//int main()
//{
//	const int maxsize = 100;
//	int i=0,count=0;
//	int pos, s[maxsize],x;
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
//	cin >> pos;
//	for (i = count - 1; i >= pos; i--)
//	{
//		s[i + 1] = s[i];
//	}
//	cin >> x;
//	s[pos] = x;
//	count++;
//	for (i = 0; i < count; i++)
//	{
//		cout << s[i]<<" ";
//	}
//	return 0;
//}
//从键盘输入n个整数（n<100），存放在一维数组中，将它们从大到小排序，再从键盘输入一个整数x，
//将该数插入到该数组中，使得插入后元素序列依然有序，输出插入后数组中的所有元素。
//	其中将整数x插入到数组中使其依然有序用函数完成。
//	输入格式：第一个为个数n，后续为n个整数，再输入一个整数x。
//#include<iostream>
//using namespace std;
//void sort(int &n,int s[],int x)
//{
//	int i, j,a; 
//	
//	for (i = 0; i < n; i++)  
//	{    
//		if (s[i] <= x)
//		{
//			for (j = n - 1; j >= i; j--)
//				s[j + 1] = s[j];
//			a = i;
//			break;
//		}
//	}
//	s[a] = x;
//	
//}
//int main()
//{
//	const int maxsize=99;
//	int j,x,n,i,s[maxsize];
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		cin >> s[i];
//	}
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (s[i] < s[j])
//			{
//				int tmp;
//				tmp = s[i];
//				s[i] = s[j];
//				s[j] = tmp;
//			}
//		}
//	}
//	
//	cin >> x;
//	sort(n,s,x);
//	n++;
//	for (i = 0; i < n; i++)
//	{
//		cout << s[i] << " ";
//	}
//	return 0;
//}
////n++一定放下面；
//从键盘输入任意个整数（以0结束），假设整数个数为n(n<100)，则这些数据存放在一维数组的0~n - 1下标中，
//再输入被删除元素所在下标pos（0 <= pos<n），将pos下标的元素从数组中删除，
//若pos位置不合法，则不删除元素。输出删除后数组中的所有元素。
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = 0, j, n = 0;
//	int s[100];
//	while (1)
//	{
//		cin >> s[i];
//		if (s[i] == 0)
//		{
//			break;
//		}
//		i++;
//		n++;
//	}
//	int pos;
//	cin >> pos;
//	if (pos >= 0 && pos < n)
//	{
//		for (i = pos; i <= n - 1; i++)
//		{
//			s[i] = s[i + 1];
//		}
//	}
//	n--;
//	for (i = 0; i < n; i++)
//	{
//		cout << s[i] << " ";
//	}
//	return 0;
//}
//从键盘输入任意个整数（以0结束，并假设个数n不超过100），存放在一维数组的0~n - 1下标中，
//再输入要删除的元素x，将数组中所有的x全部删除。输出删除后数组中的所有元素。
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = 0,count=0, j, n = 0, s[100];
//	while (1)
//	{
//		cin >> s[i];
//		if (s[i] == 0)
//		{
//			break;
//		}
//		i++;
//		n++;
//	}
//	int x;
//	cin >> x;
//	for (i = 0; i < n-count; i++)
//	{
//		if (s[i] == x)
//		{
//			count++;
//			for (j=i; j <n -count; j++)
//			{
//				s[j] = s[j + 1];
//			}
//			i--;
//		}
//	}
//	n -=count;
//	for (i = 0; i < n ; i++)
//	{
//		cout << s[i]<<" ";
//	}
//	return 0;
//}

//输入m行n列（假设m，n不超过50。程序运行时输入）的矩阵存储在一个二维整型数组中，
//分别求出各行元素之和, 各列元素和。提示：各行元素和、各列元素和需要分别使用一个一维数组row、col实现存储,
//再输出row、col中的值。
//#include<iostream>
//using namespace std;
//int main()
//{
//	int m, n,j=0,i=0; 
//	cin >> m >> n;
//	int arr[50][50];
//	int row[50] = { 0 }, col[50] = { 0 };
//	
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			row[i]+= arr[i][j];
//		}
//	}
//	for (j = 0; j < n; j++)
//	{
//		for (i = 0; i < m; i++)
//			col[j] += arr[i][j];
//	}
//	cout << "row:";
//	for (i = 0; i < m; i++)
//	{
//		cout << row[i]<<" ";
//	}
//	cout << endl;
//	cout << "col:";
//	for (j = 0; j < n; j++)
//	{
//		cout << col[j]<<" ";
//	}
//	return 0;
//}
//从键盘输入n个整数（n<100），存放在一维数组中，将它们从大到小排序，再从键盘输入一个整数x，
//将该数插入到该数组中，使得插入后元素序列依然有序，输出插入后数组中的所有元素。
//	其中将整数x插入到数组中使其依然有序用函数完成。
//	输入格式：第一个为个数n，后续为n个整数，再输入一个整数x。
//#include<iostream>
//using namespace std;
//void sort(int x,int s[],int n)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (x>s[i])
//		{
//			n++;
//			for (j = n - 1; j > i; j--)
//			{
//				s[j] = s[j-1];
//			}
//			s[i] = x;
//			break;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		cout << s[i] << " ";
//	}
//}
//int main()
//{
//	int n=0,i = 0, j = 0, s[100];
//	cin >> n;
//	for (i = 0; i < n;i++)
//	{
//		cin >> s[i];
//		if (s[i] == 0)
//		{
//			break;
//		}
//	}
//	int x;
//	cin >> x;
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = i + 1; j < n;j++)
//		{
//			if (s[i] < s[j])
//			{
//				int tmp;
//				tmp = s[i];
//				s[i] = s[j];
//				s[j] = tmp;
//			}
//			
//		}
//	}
//	sort(x, s, n);
//	return 0;
//}
//输入一个n*n（假设n值不超过50）的矩阵存储于二维数组，求出两条对角线元素值之和。如果对角线有重叠数据（n为奇数时），不重复相加。
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 0, j = 0;
	int arr[50][50];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (i = 0, j = 0;i<)
	return 0;
}*/
