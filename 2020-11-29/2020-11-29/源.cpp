//����ָ��018�������ַ���
//�Ӽ�������n��n<100�����ַ���(ÿ���ַ������Ȳ�����19)����������ַ����еĻ����ַ�����
//�����ж�һ���ַ����Ƿ�Ϊ�����ַ����ú���ʵ�֣����ַ������ܹ������±��ָ�����ַ�ʽʵ�֡�
//��ν���Ĵ���ָ˳���͵�����һ����һ���ַ������硱level������abccba�����ǻ��Ĵ���
//�����ʽ����һ��Ϊ����n������Ϊn���ַ�����
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

//�Ӽ�������n��n<100�����ַ���(ÿ���ַ������Ȳ�����19)����������ַ����еĻ����ַ�����
//�����ж�һ���ַ����Ƿ�Ϊ�����ַ����ú���ʵ�֣����ַ������ܹ������±��ָ�����ַ�ʽʵ�֡�
//��ν���Ĵ���ָ˳���͵�����һ����һ���ַ������硱level������abccba�����ǻ��Ĵ���
//�����ʽ����һ��Ϊ����n������Ϊn���ַ�����
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