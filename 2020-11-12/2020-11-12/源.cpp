//#include<iostream>
//using namespace std;
//void judge(int m, int n)
//{
//
//	int j = 1;
//	for (j = 1; j <= n; j++)
//	{
//		int k = 0;
//		for (int i = 1; i < j; i++)
//		{
//			if ((j % i) == 0)
//				k = k + i;
//		}
//		if (k == j)
//			cout << j << " ";
//	}
//
//	cout << endl;
//	for (int i = m; i <= n; i++)
//	for (int j = 2; j <= i; j++)
//	{
//		if (i == j)
//			cout << j << " ";
//		if (i % j == 0)
//			break;
//	}
//
//}
//
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	judge(m, n);
//	return 0;
//}��дһ��������һ��������������֮�͡���������������������m��n�����øú�������ʵ���������⣺
//1)�ҳ�n�������������� 2���ҳ�m~n���������� 
//��ʾ����������Ϊ�����������������֮�͵����������������������Ϊ�����ܱ�1�����������⣬���ܱ�������������
//ע�⣺������������2����ʾ��	

//#include<iostream>
//using namespace std;
//int f(int n)
//{
//	int i , sum = 0;
//	for (i = 1; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			sum += i;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int i, j;
//	int m, n;
//	cin >> m >> n;
//	for (i = 1; i <=n; i++)
//	{
//		j = f(i);
//		if (j == i)
//			cout << i << " ";
//	}
//	cout << endl;
//	for (i = m; i <=n; i++)
//	{
//		j = f(i);
//		if (j == 1)
//			cout << i << " ";
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int m, n, max=0;
//	cin >> m >> n;
//	if (m > n)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			if (m%i == 0 && n%i == 0)
//			if (max < i)
//				max = i;
//		}
//	}
//	if (m < n)
//	{
//		for (int i = 1; i <= m; i++)
//		{
//			if (m%i == 0 && n%i == 0)
//			if (max < i)
//				max = i;
//		}
//	}
//	cout << max;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n=0, r, a[10], i = 0;
//	char b[16] = { '0','1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
//	cin >> n >> r;
//	while (n != 0)
//	{
//		a[i] = n%r;//�ȷ����λ
//		n = n / r;
//		i++;
//	} 
//	for (i=i-1; i >= 0; i=i-1)//һ��ʼ�����λ
//	{
//		n = a[i];
//		cout << b[n];
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	if (n == 0 )
//		cout << "no";
//	if (n == 1)
//		cout << "no";
//	else
//	{
//		int num0 = 0;
//		int num1 = 1;
//		int num2 = 1;
//		for (int i = 1; i < n; i++)
//		{
//			num2 = num0 + num1;
//			num0 = num1;
//			num1 = num2;
//		}
//		if (num2 % 3 == 0)
//		{
//			cout << "yes";
//		}
//		else
//		{
//			cout << "no";
//		}
//	}
//	return 0;
//}
