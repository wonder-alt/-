//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = 0,len=0;
//	char s[100];
//	cin >> s;
//	while (s[len] != 0)
//	{
//		len++;
//	}
//	for (i = 0; i < len; i++)
//	{
//		if (s[i] >= 65 && s[i] <= 90)
//			s[i] = s[i] + 32;
//		 else if (s[i] >= 97 && s[i] <= 122)
//			s[i] = s[i] - 32;
//	}
//	cout << s;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	char s[100];
//	char*p = s;
//	cin >> s;
//	int len = 0;
//	int i = 0;
//	while (*(p+len)!='\0')
//	{
//		len++;
//	}
//	for (i = 0; i < len; i++)
//	{
//		if (*(p + i) >= 65 && *(p + i) <= 90)
//			*(p + i) = *(p + i) + 32;
//		else if (*(p + i) >= 97 && *(p + i) <= 122)
//			*(p + i) = *(p + i) - 32;
//	}
//	cout << s;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//void mystrcat(char *p,char *s,int len1,int len2,char arr1[])
//{
//	int i = 0, j = 0;
//	while (*(p + len1) != '\0')
//		len1++;
//	while (*(s + len2) != '\0')
//		len2++;
//	for (i = 1, j = 0; i <= len2; i++, j++)
//	{
//		*(p + len1 - 1 + i) = *(s + j);
//	}
//	*(p + len2 + len1) = '\0';
//	cout << arr1;
//}
//int main()
//{
//	char arr1[100];
//	char arr2[100];
//	cin >> arr1 >> arr2;
//	int len1 = 0, len2 = 0;
//	char *p = arr1, *s = arr2;
//	mystrcat(p, s, len1, len2, arr1);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//void mystrcmp(char *p, char *s,char arr1[],char arr2[])
//{
//	int len = 0, j = 0;
//	double sum = 0;
//	while (int(*(p + len))!=int(*(s+len)))
//	{
//		
//		cout << *(p+len) << " " << *s  << "\n";
//		len++;
//	}
//	cout << endl;
//	cout << len<<" ";
//	sum = *(p + len ) - *(s + len);
//	cout << sum;
//}
//int main()
//{
//	char arr1[100];
//	char arr2[100];
//	cin >> arr1 >> arr2;
//	char *p = arr1, *s = arr2;
//	mystrcmp(p, s,arr1,arr2);
//}



//#include<iostream>
//using namespace std;
//int main()
//{
//	char arr[100];
//	char s[100];
//	cin >> s;
//	cin >> arr[0];
//	int len = 0;
//	while (s[len] != '\0')
//		len++;
//	int i = 0,j=0;
//	j = len;
//	int count = 0;
//	for (i = j-1; i >= 1;i--,j--)
//	{
//		s[i+j-1] = s[i];
//		s[i+j-2] = char(arr[0]);
//		count++;
//	}
//	s[2*len] = '\0';
//		cout << s;
//	return 0;
//}




















