//��дһ��������һ�� ������������֮�͡���������������������m��n�����øú�������ʵ���������⣺
//1)�ҳ�n�������������� 2���ҳ�m~n���������� 
//��ʾ����������Ϊ�����������������֮�͵��������������
//��������Ϊ�����ܱ�1�����������⣬���ܱ�������������ע�⣺������������2����ʾ��
#include<iostream>
using namespace std;
int yh(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n%i == 0)
			sum += i;
	}
	return sum;
}
int main()
{
	int i,m, n,j;
	cin >> m >> n;
	for ( i = 1; i <= n; i++)
	{
		if (yh(i) == i)
		{
			cout << i<<" ";
		}
	}
	cout << endl;
	for ( i = m; i <= n; i++)
	{
		j = yh(i);
		if (j == 1)
			cout << i<<" ";
	}
	return 0;
}


















