#include<stdio.h>
#include<string.h>
//int main()
//{
//	char a[] = "abcde";
//	char b[] = { 'a', 'b', 'c', 'd', 'e', };
//	printf("%d\n", sizeof(a));//6
//	printf("%d\n", strlen(a));//5
//	printf("%d\n", sizeof(b));//5
//	printf("%d\n", strlen(b));//Ëæ»úÖµ
//}

//int main()
//{
//	char ch[] = { 1, 2, 3, 4, 5 };
//	int len = sizeof(ch) / sizeof(ch[0]);
//	int i = 0;
//	for (i = 1; i <= len; i++)
//	{
//		printf("%d", i);
//	}
// }

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d", arr[i]);
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
	int i = 0;
	for (i = 0; i < 3;i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			//printf("%d", arr[i][j]);
			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
		}
		//printf("\n");
	}
	return 0;
}




