//#include<iostream>
//using namespace std;
//int main()
//{
//	const int maxsize = 100;
//	int n = 3, f[maxsize], i, j, max, tmp;
//	for (i = 0; i < n; i++)
//	{
//		cin >> f[i];
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		max = i;
//		for (j = i; j < n; j++)
//		{
//			if (f[j]>f[max])
//			{
//				max = j;
//			}
//			if (max != i)
//			{
//				tmp = f[i];
//				f[i] = f[max];
//				f[max] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		cout << f[i] << " ";
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	
//	int f[4][5];
//	int i, j;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			cin >> f[i][j];
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			cout<< f[i][j];
//		}
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j,maxi=0,maxj=0;
//	int arr[4][5];
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
//			if (arr[maxi][maxj] < arr[i][j])
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
//const int maxsize = 100;
//int main()
//{
//	int *p, *max=0,s[maxsize] ;
//	int n = 10;
//	for (p = s; p < s + n; p++)
//	{
//		cin >> *p;
//	}
//	for (p = s; p < s + n; p++)
//	{
//		if (*max < *p)
//		{
//			max = p;
//		}
//	}
//	cout << *max;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[2][3] = { { 1, 2, 3 },{ 4, 5, 6 } };
//	int i, j;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	int *p;
//	int(*p2)[3];
//	
//	/*p1 = &a[0][0];
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << *p1++<<" ";
//		}
//	}*/
//
//	/*p2 = a;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << *(*(p2 + i) + j) << " ";
//		}
//	}
//*/
//	p2 = a;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << *(*p2 + j)<<" ";
// 		}
//		cout << endl;
//		p2++;
//	}
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	int * p=arr[0];
//	int i, j;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			cout << *p++<<" ";
//		}
//	}
//	return 0;
//}



//
#include<iostream>
using namespace std;
int main()
{
	int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int (*p)[3];
	int i, j;
	p = arr;
	cout << (int)p<<endl;
	cout << (int)arr[0]<<endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << *(*p + j);
		}
		p++;
	}
	return 0;
}