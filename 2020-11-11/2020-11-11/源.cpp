//��������������min��max������[min, max]֮�����е�����֮�͡�
//���ж�һ�������Ƿ�Ϊ�����ú���ʵ�֡�
//
//����n��������������n��������С������֮�͡����м���һ����������С�������ú���ʵ�֡�
//�����ʽ����һ��Ϊ����n������Ϊn��������
//#include<iostream>
//using namespace std;
//int way(int a, int b)
//{
//	if (a > b)
//	{
//		int min = a*b;
//		for (int i = a;i<a*b; i++)
//		{
//			if (i%a == 0 && i%b == 0)
//			{
//				if (i < min)
//				{
//					min = i;
//				}
//			}
//		}
//		return min;
//	}
//	if (a < b)
//	{
//		int min =a*b;
//		for (int i = b; i<b*a; i++)
//		{
//			if (i%a == 0 && i%b == 0)
//			{
//				if (i < min)
//				{
//					min = i;
//				}
//			}
//		}
//		return min;
//	}
//}
//int main()
//{
//	int n,a,b,sum=0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a >> b;
//		way(a, b);
//		sum = sum + way(a, b);
//	}
//	cout << sum;
//	return 0;
//}
//�Ӽ�������һ����������0�������������������������֮�͡�
//���н�һ�����������ú���ʵ�֣�����123����Ϊ321������ - 345����Ϊ - 543��
//Input
//Output
//Sample Input
//234 894 - 94 736 0
//Sample Output
//1518

//#include<iostream>
//using namespace std;
//int ni(int num)
//{
//	int sum=0;
//		int i;
//		while (num != 0)
//		{
//			i = num % 10;
//			num = num / 10;
//			sum = i + sum * 10;
//		}
//	return sum;
//}
//int main()
//{
//	int num,sum=0;
//	while (1)
//	{
//		cin >> num;
//		if (num == 0)
//		{
//			break;
//		}
//		else
//		{
//			sum += ni(num);
//		}
//	}
//	cout << sum;
//	return 0;
//}
//��Ŀ����
//����һ������������0�����������������λ֮��Ϊ������������
//������һ��������λ֮���ú���ʵ�֡�
//����
//���
//��������
//12 22 45 88 0
//�������
//12 45
//��ʾ
//��Դ
//#include<iostream>
//using namespace std;
//int sh(int num)
//{
//	int all=num;
//	int s=0,sum=0;
//	while (all != 0)
//	{
//		s = all % 10;
//		all = all / 10;
//		sum =sum+s;
//	}
//	if (sum % 2 != 0)
//		return  num;
//}
//int main()
//{
//	int num;
//	while (1)
//	{
//		cin >> num;
//		if (num == 0)
//			break;
//		else if (sh(num)==num)
//			cout<<sh(num)<<" ";
//	}
//	return 0;
//}
//��Ŀ����
//����2��������a��n����a + aa + aaa + aa��a(n��a)֮�͡�
//���磬����2��3�������2 + 22 + 222�����246��
//����i��a��ɵ����ú���ʵ�֣�������int f��int a��int i���ķ���ֵΪi��a��ֵ������f��3��2��ֵΪ33��
//����
//���
//��������
//2 3
//�������
//246
//��ʾ
//��Դ

//#include<iostream>
//using namespace std;
//int f(int a, int n)
//{
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum = a + sum * 10;
//	}
//	return sum;
//}
//int main()
//{
//	int sum = 0, a, n, i;
//	cin >> a >> n;
//	for (i = 1; i <= n; i++)
//	{
//		sum = f(a, i) + sum;
//	}
//	cout << sum;
//	return 0;
//}
//��Ŀ����
//��дһ������f(n) = 1 + 2 + ... + n��main�����Ӽ�������m��n�����øú������㲢���f(m) + f(n)��
//����
//���
//��������
//10 5
//�������
//70
//��ʾ
//��Դ
//#include<iostream>
//using namespace std;
//int f(int i)
//{
//	int sum = 0;
//	for (int j = 1; j <= i; j++)
//	{
//		sum += j;
//	}
//	return sum;
//}
//int main()
//{
//	int m, n,sum=0;
//	cin >> m >> n;
//	sum = f(m) + f(n);
//	cout << sum;
//	return 0;
//}
//��Ŀ����
//��дһ������f��x������x>0��������ֵΪ1����x<0��������ֵΪ - 1��
//��x = 0��������ֵΪ0�����øú���ʵ�ּ��������n����������������ƽ��ֵ��
//�����ʽ�е�һ��Ϊ��������n������Ϊn��������
//����
//���
//��������
//5  2 5 - 5 3 - 3
//�������
//3.33333
//��ʾ
//��Դ

//#include<iostream>
//using namespace std;
//int f(int x)
//{
//	if (x > 0)
//		return 1;
//	if (x = 0)
//		return 0;
//	if (x < 0)
//		return -1;
//}
//int main()
//{
//	double ave,n,num,sum=0,count=0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num;
//		if (f(num)>0)
//		{
//			sum = sum + num;
//			count++;
//		}
//	}
//	ave = sum *1.0/ count;
//	cout << ave;
//	return 0;
//}
//��Ŀ����
//����n���������������ʽ�е�һ��Ϊ��������n������Ϊn���������������������������
//Ҫ�����һ�����������������õݹ麯��ʵ�֡�
//�����Ķ��壺����һ��������n�����ǽ����ĸ���λ��ӵõ�һ���µ����֣�������������һλ�������ǳ�֮Ϊn��������
//�����ظ�����ֱ������Ϊһ��һλ�������һλ��Ҳ����n�����������磺����24��2 + 4 = 6��6����24��������
//����39��3 + 9 = 12��1 + 2 = 3��3����39��������
//����
//���
//��������
//5 23 424 98 632 12345
//�������
//5 1 8 2 6
//��ʾ
//��Դ
//#include<iostream>
//using namespace std;
//int way(int num)
//{
//	int sum = 0;
//	while (num != 0)
//	{
//		sum += num % 10;
//		num = num / 10;
//	}
//	if (sum <= 9)
//		return sum;
//	else
//		return  way(sum);
//}
//int main()
//{
//	int n,num;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num;
//		cout<<way(num)<<" ";
//	}
//	return 0;
//}


//�������ɸ�������������ʱ��0������������������е�����������������
//Ҫ���ж�һ����num����żд�ɺ���bool isodd��num������������true�����򷵻�false��
//#include<iostream>
//using namespace std;
//bool isodd(int num)
//{
//	if (num % 2 == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		cout << num<<" ";
//		return 1;
//	}
//}
//int main()
//{
//	int num,sum=0;
//	while (1)
//	{
//		cin >> num;
//		if (num == 0)
//			break;
//		else
//			sum += isodd(num);
//	}
//	cout << sum<<" ";
//	return 0;
//}
//��дһ��������һ��������������֮�͡���������������������m��n��
//���øú�������ʵ���������⣺1)�ҳ�n�������������� 2���ҳ�m~n���������� 
//��ʾ����������Ϊ�����������������֮�͵����������������������Ϊ�����ܱ�1�����������⣬���ܱ�������������
//ע�⣺������������2����ʾ��
//#include<iostream>
//using namespace std;
//int hz(int n)
//{
//	int sum = 0;
//	for(i=)
//}
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	hz(n)
//	return 0;
//}