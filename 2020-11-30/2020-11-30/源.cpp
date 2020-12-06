//输入一个5 * 5的矩阵，输出所有的鞍点。
//所谓鞍点是指一行中的最大值也是该列中的最小值。
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i=0, j=0,maxi[5],mini[5];
//	int arr[5][5];
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		maxi[i] = arr[i][0];
//		for (j = 0; j < 5; j++)
//		{
//			if (arr[i][j]>maxi[i])
//				maxi[i] = arr[i][j];
//		}
//	}
//	for (j = 0; j < 5; j++)
//	{
//		mini[j] = arr[0][j];
//		for (i = 0; i < 5; i++)
//		{
//			if (arr[i][j]<mini[j])
//				mini[j] = arr[i][j];
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (mini[j] == maxi[i])
//				cout << arr[i][j]<<" ";
//		}
//	}
//	return 0;
//} 
//数组指针018：回文字符串
//从键盘输入n（n<100）个字符串(每个字符串长度不超过19)，输出这组字符串中的回文字符串。
//其中判断一个字符串是否为回文字符串用函数实现，且字符访问能够利用下标和指针两种方式实现。
//所谓回文串是指顺读和倒读都一样的一个字符串，如”level”、”abccba”都是回文串。
//输入格式：第一个为个数n，后续为n个字符串。
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,i,j=0,len=0,count=0;
//	cin >> n;
//    char s[19];
//	char *p = s;
//	for (i = 0; i < n; i++)
//	{
//		cin >> s;
//		while (*(p+len) != 0)
//		{
//			len++;
//		}
//		for (i = 0,j=len-1; i < (len )/2; i++,j--)
//		{
//			if (*(p + i) == *(p + j))
//				count++;
//		}
//		if (count == (len ) / 2)
//			cout << p;
//		else
//			cout << "none";
//	}
//	return 0;
//}

//输入n个(n<100)字符串，输出所有字符串长度的平均值。其中求一个字符串的长度用自定义函数实现，且字符访问能够利用下标和指针两种方式实现。
//	输入格式，第一个整数n为字符串个数，后续为n个字符串。

//#include<iostream>
//using namespace std;
//double strlen(int len,char s[])
//{
//	while (s[len] != 0)
//		len++;
//	return len;
//}
//int main()
//{
//	double sum = 0, ave = 0, j = 0, i = 0;
//	char s[100];
//	int n,len=0;
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		cin >> s;
//		sum+=strlen(len,  s);
//	}
//	ave = sum *1.0/ n;
//	cout << ave;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int strlen(int len, char *p)
//{
//	while (*(p + len) != 0)
//		len++;
//	return len;
//}
//int main()
//{
//	char s[100];
//	char *p = s;
//	int n;
//	int len = 0;
//	cin >> n;
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		cin >> s;
//		sum += strlen(len, p);
//	}
//	double ave = sum*1.0 / n;
//	cout << ave;
//	return 0;
//}
//在主函数中输入一个字符串（长度不超过99），存储在一个字符数组中，将该字符串中的大写字母变成相应的小写字母，
//小写字母变成相应的大写字母，其他字符不变，输出转换后的字符串。其中将字符串转换部分写成函数，且字符访问能够利用下标和指针两种方式实现。
//#include<iostream>
//using namespace std;
//int main()
//{
//	char s[99];
//	int i = 0;
//	cin >> s;
//	while (s[i] != '\0')
//	{
//		if (s[i] >= 65 && s[i] <= 90)
//		{
//			s[i] = s[i] + 32;
//		}
//		 else if (s[i] >= 97 && s[i] <= 122)
//			s[i] = s[i] - 32;
//		i++;
//	}
//	i = 0;
//	while (s[i] != '\0')
//	{
//		cout << s[i];
//		i++;
//	}
//	return 0;
//}
