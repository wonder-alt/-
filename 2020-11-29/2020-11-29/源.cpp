//数组指针018：回文字符串
//从键盘输入n（n<100）个字符串(每个字符串长度不超过19)，输出这组字符串中的回文字符串。
//其中判断一个字符串是否为回文字符串用函数实现，且字符访问能够利用下标和指针两种方式实现。
//所谓回文串是指顺读和倒读都一样的一个字符串，如”level”、”abccba”都是回文串。
//输入格式：第一个为个数n，后续为n个字符串。
//#include<iostream>
//using namespace std;
//int main()
//{
//	char s[20];
//	int n;
//	int count = 0;
//	cin >> n;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int len = 0;
//	for (k = 0; k < n; k++)
//	{
//			cin >> s;
//			i = 0;
//		while (s[i] != '\0')
//		{
//			i++;
//			len++;
//		}
//		for (i = 0, j = len - 1; i < len / 2; i++, j--)
//		{
//			if (s[i] != s[j])
//				break;
//			else
//				count++;
//		}
//		if (count == len /2)
//			cout << s<<" ";
//	}
//	return 0;
//}

//从键盘输入n（n<100）个字符串(每个字符串长度不超过19)，输出这组字符串中的回文字符串。
//其中判断一个字符串是否为回文字符串用函数实现，且字符访问能够利用下标和指针两种方式实现。
//所谓回文串是指顺读和倒读都一样的一个字符串，如”level”、”abccba”都是回文串。
//输入格式：第一个为个数n，后续为n个字符串。
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int i = 0; 
//	char s[19];
//	int x = 123;
//	int *a = &x;
//	cout << a << endl;
//	cout << *a << endl;
//
//	for (i = 0; i < n; i++)
//	{
//	
//		
//		cin >> s;
//		char *p = s;
//		cout << &p << endl;
//		cout << *(p+2)<<" "<<s[2]<<" "<<p[2] << endl;
//		for (p = s; *p != '\0'; p++)
//		{
//			cout << *p << " ";
//			cout << (float * )&p << endl;
//		}
//		}
//	
//	return 0;
//}
#include<iostream>
using namespace std;
int main()
{
	int s[100];
	cin >> s;

	return 0;
}