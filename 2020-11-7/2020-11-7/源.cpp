//����һ��������n�����[1, n]֮�������������
//�����Ķ��壺�������������֮�͵���������
//���磺6 = 1 + 2 + 3�����6��������
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,sum=0,i,j,a;
//	cin >> n;
//	for (a = 2; a <= n; a++)
//	{
//		sum = 0;
//		for (i = 2; i <= n; i++)
//		{
//			for (j = 1; j <= i; j++)
//			{
//					if (a == i*j)
//					{
//						if (i != a&&j != a)
//						{
//							sum = sum + i + j;
//						}
//						if (i == a)
//						{
//							sum = sum + j;
//						}
//					}
//				}
//
//		}
//		if (sum == a)
//		{
//			cout << a << endl;
//		}
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, i, j, sum;
//	cin >> n;
//	for (i = 1; i <= n; i++)
//	{
//		sum = 0;
//		for (j = 1; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				sum = sum + j;
//			}
//		}
//		if (sum == i)
//		{
//			cout << i << " ";
//		}
//	}
//	return 0;
//}

//

#include<iostream>
using namespace std;
int main()
{
	int x, max = 0;
	while (1)
	{
		cin >> x;
		for (int i = 2; i < x; i++)
		{
			if (x%i == 0)
				break;
			else  if(max < x)
				max = x;
		}
		if (x == 0)
			break;
	}
	if (max == 0)
		cout << "no";
	else
		cout << max;
	return 0;
}