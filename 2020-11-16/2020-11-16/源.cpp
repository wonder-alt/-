#define  _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//using namespace std;
//int main()
//{
//	const int maxsize = 100;
//	int i, j, max,n=3;
//	int s[maxsize];
//	for (i = 0; i < n; i++)
//	{
//		cin >> s[i];
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		max = i;
//		for (j = 0; j < n; j++)
//		{
//			if (s[j]>s[max])
//			{
//				max = j;
//			}
//			if (max!=i)
//			{
//				int tmp;
//				tmp = s[i];
//				s[i] = s[max];
//				s[max] = tmp;
//			}
//		}
//		for (i = 0; i < n; i++)
//		{
//			cout << s[i];
//		}
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[3][3];
//	int i, j;
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= 2; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	for (i = 0; i <= 2; i++)
//	{
//		for (j = 0; j <= 2; j++)
//		{
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[4][5];
//	int i, j, maxi = 0, maxj = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if (arr[i][j]>arr[maxi][maxj])
//			{
//				maxi = i;
//				maxj = j;
//			}
//		}
//	}
//	cout << arr[maxi][maxj] << " " << maxi << " " << maxj;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int choi;
//	char s1[80], s2[80];
//	cin.getline(s1, 80, '\n');
//	cin.getline(s2, 80, '\n');
//	while (1)
//	{
//		cout << "1 length    2  strcpy      3  strcat     4  strcmp    0 exit\n ";
//		cin >> choi;
//		getchar();
//		if (!choi)
//		{
//			break;
//		}
//		switch (choi)
//		{
//		case 1:
//			cout << strlen(s1)<<endl;
//			cout << strlen(s2)<<endl;
//			break;
//		case 2:
//			strcpy(s1, s2);
//			cout << s1 << endl;
//			break;
//		case 3:
//			strcat(s1, s2);
//			cout << s1 << endl;
//			cout << s2 << endl;
//			break;
//		
//		case 4:
//			if (strcmp(s1, s2) > 0)
//				cout << "s1>s2" << endl;
//			else
//				cout << "s1<s2" << endl;
//			break;
//		default:
//			cout << "choice error" << endl;
//		}
//	}
//	return 0;
//}
//# include <iostream>
//using namespace std;
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *p;
//	p = a;
//	for (int i=1; i<=5; i++)  // for (int i = 0;i<5;i++){cout<<*p+i//*a+i<<endl;}
//                           // for (int p=a;p<a+5;p++){cout<<*p<<endl;} 
//	{
//		cout << *p << " ";
//		p++;
//	}
//	cout << endl;
//	return 0;
//}


//# include <iostream>
//using namespace std;
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *p;
//	p = a;
//	for (int i = 0; i < 5;i++)
//	{
//		cout << *a+i/*p+i*/ << " ";
//	}
//	cout << endl;
//	return 0;
//}


//# include <iostream>
//using namespace std;
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *p;
//	p = a;
//	for ( p=a ; p<a+5; p++)  
//	{
//		cout << *p << " ";
//	}
//	cout << endl;
//	return 0;
//}


