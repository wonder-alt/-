//����һ��5 * 5�ľ���������еİ��㡣
//��ν������ָһ���е����ֵҲ�Ǹ����е���Сֵ��
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
//����ָ��018�������ַ���
//�Ӽ�������n��n<100�����ַ���(ÿ���ַ������Ȳ�����19)����������ַ����еĻ����ַ�����
//�����ж�һ���ַ����Ƿ�Ϊ�����ַ����ú���ʵ�֣����ַ������ܹ������±��ָ�����ַ�ʽʵ�֡�
//��ν���Ĵ���ָ˳���͵�����һ����һ���ַ������硱level������abccba�����ǻ��Ĵ���
//�����ʽ����һ��Ϊ����n������Ϊn���ַ�����
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

//����n��(n<100)�ַ�������������ַ������ȵ�ƽ��ֵ��������һ���ַ����ĳ������Զ��庯��ʵ�֣����ַ������ܹ������±��ָ�����ַ�ʽʵ�֡�
//	�����ʽ����һ������nΪ�ַ�������������Ϊn���ַ�����

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
//��������������һ���ַ��������Ȳ�����99�����洢��һ���ַ������У������ַ����еĴ�д��ĸ�����Ӧ��Сд��ĸ��
//Сд��ĸ�����Ӧ�Ĵ�д��ĸ�������ַ����䣬���ת������ַ��������н��ַ���ת������д�ɺ��������ַ������ܹ������±��ָ�����ַ�ʽʵ�֡�
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
