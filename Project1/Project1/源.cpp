//�Ӽ�������n(n<100)����������0�������������һ��һά�����У��������λ����
//	˵������λ����Medians��ͳ��ѧ���ʣ���ָ�����ݰ���С����˳�������������γ�һ�����У����������м�λ�õ��Ǹ����ݡ�
//������Ԫ�ظ���Ϊ����������λ��Ϊ���м��Ԫ�أ�
//	������Ԫ�ظ���Ϊż��������λ��Ϊ���м�����Ԫ�ص�ƽ������
//���磺����2 7 9 11 5 4 3 6 8 20 0���������Ϊ2 3 4 5 6 7 8 9 11 20�����м���������ƽ��ֵΪ6.5

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
//	if (i % 2 == 0)//����
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
//�Ӽ�������n(n<100)����������0�������������һ��һά�����У������ǰ�������ǰ��ż���ں�
//ͬΪ������ż���İ���С�����˳�����򣬲���������Ľ����
//	���У���������ú���ʵ�֡�
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


//����һ��������n��n<100������쳲��������е�ǰn��浽һά�����У������쳲����������ж�3ȡ��Ϊ2������
//	쳲���������Ϊ��0 1 1 2 3 5 8 13 21 34 55��������ʼ��Ϊ��0�
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
//����m��n��m��n<100�������[m, n]֮���������Ҫ��ʹ��ɸѡ����������
//	��100����������ɸѡ���̣���һ��ֽ��д��1��100ȫ��������Ȼ������ж������Ƿ���������
//�ҳ����еķ������������ڵ������ʣ�µľ�����������ʾ�����Խ�1~100��Щ���洢������1~100�±꣬�ڵ���������Ϊ0��
//	�����������£�
//	<1> �Ƚ�1�ڵ�(��Ϊ1��������)��
//	<2> �ҵ������е�һ������ֵ��2������2�ı����ڵ���
//	<3> �ظ�����<2>���ٰ�3���������ı����ڵ���ֱ��11ʱ������ʵ���Ͽ����ڵ�7�ı����󼴿ɽ�������
//	<4> �����з���ֵ��Ϊ������
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

//�Ӽ��������������������0�������������������100��������0�±꿪ʼ���δ����һά�����У����������λ��pos��0 <= pos <= n�����������Ԫ��x��
//��x���뵽�����pos�±괦pos���������������е�����Ԫ�ء�
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
//�Ӽ�������n(n<100)����������0�������������һ��һά�����У������ǰ�������ǰ��ż���ں�
//ͬΪ������ż���İ���С�����˳�����򣬲���������Ľ����
//	���У���������ú���ʵ�֡�
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