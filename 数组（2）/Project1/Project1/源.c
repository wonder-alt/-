#include<stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < j - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j+1];
//				arr[j+ 1] = arr[j];
//				arr[j] = tmp;
//				flag = 0;
//			}
//			if (flag==1)
//				break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//



//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6,  7, 8, 9, };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}