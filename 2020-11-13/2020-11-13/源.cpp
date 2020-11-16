//编写一个函数求一个 数的所有因子之和。主函数中输入两个整数m、n，利用该函数依次实现下列问题：
//1)找出n以内所有完数； 2）找出m~n间所有素数 
//提示：完数定义为除自身外的所有因子之和等于它本身的数；
//素数定义为除了能被1和自身整数外，不能被其它数整数。注意：完数和素数分2行显示。
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


















