//#include<iostream>
//using namespace std;
//int main()
//{
//	const int maxsize = 100;
//	int i=0,count=0;
//	int pos, s[maxsize],x;
//	while (1)
//	{
//		cin >> s[i];
//		if (s[i] == 0)
//		{
//			break;
//		}
//		i++;
//		count++;
//	}
//	cin >> pos;
//	for (i = count - 1; i >= pos; i--)
//	{
//		s[i + 1] = s[i];
//	}
//	cin >> x;
//	s[pos] = x;
//	count++;
//	for (i = 0; i < count; i++)
//	{
//		cout << s[i]<<" ";
//	}
//	return 0;
//}
//�Ӽ�������n��������n<100���������һά�����У������ǴӴ�С�����ٴӼ�������һ������x��
//���������뵽�������У�ʹ�ò����Ԫ��������Ȼ�����������������е�����Ԫ�ء�
//	���н�����x���뵽������ʹ����Ȼ�����ú�����ɡ�
//	�����ʽ����һ��Ϊ����n������Ϊn��������������һ������x��
//#include<iostream>
//using namespace std;
//void sort(int &n,int s[],int x)
//{
//	int i, j,a; 
//	
//	for (i = 0; i < n; i++)  
//	{    
//		if (s[i] <= x)
//		{
//			for (j = n - 1; j >= i; j--)
//				s[j + 1] = s[j];
//			a = i;
//			break;
//		}
//	}
//	s[a] = x;
//	
//}
//int main()
//{
//	const int maxsize=99;
//	int j,x,n,i,s[maxsize];
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		cin >> s[i];
//	}
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (s[i] < s[j])
//			{
//				int tmp;
//				tmp = s[i];
//				s[i] = s[j];
//				s[j] = tmp;
//			}
//		}
//	}
//	
//	cin >> x;
//	sort(n,s,x);
//	n++;
//	for (i = 0; i < n; i++)
//	{
//		cout << s[i] << " ";
//	}
//	return 0;
//}
////n++һ�������棻
//�Ӽ��������������������0��������������������Ϊn(n<100)������Щ���ݴ����һά�����0~n - 1�±��У�
//�����뱻ɾ��Ԫ�������±�pos��0 <= pos<n������pos�±��Ԫ�ش�������ɾ����
//��posλ�ò��Ϸ�����ɾ��Ԫ�ء����ɾ���������е�����Ԫ�ء�
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = 0, j, n = 0;
//	int s[100];
//	while (1)
//	{
//		cin >> s[i];
//		if (s[i] == 0)
//		{
//			break;
//		}
//		i++;
//		n++;
//	}
//	int pos;
//	cin >> pos;
//	if (pos >= 0 && pos < n)
//	{
//		for (i = pos; i <= n - 1; i++)
//		{
//			s[i] = s[i + 1];
//		}
//	}
//	n--;
//	for (i = 0; i < n; i++)
//	{
//		cout << s[i] << " ";
//	}
//	return 0;
//}
//�Ӽ��������������������0���������������n������100���������һά�����0~n - 1�±��У�
//������Ҫɾ����Ԫ��x�������������е�xȫ��ɾ�������ɾ���������е�����Ԫ�ء�
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = 0,count=0, j, n = 0, s[100];
//	while (1)
//	{
//		cin >> s[i];
//		if (s[i] == 0)
//		{
//			break;
//		}
//		i++;
//		n++;
//	}
//	int x;
//	cin >> x;
//	for (i = 0; i < n-count; i++)
//	{
//		if (s[i] == x)
//		{
//			count++;
//			for (j=i; j <n -count; j++)
//			{
//				s[j] = s[j + 1];
//			}
//			i--;
//		}
//	}
//	n -=count;
//	for (i = 0; i < n ; i++)
//	{
//		cout << s[i]<<" ";
//	}
//	return 0;
//}

//����m��n�У�����m��n������50����������ʱ���룩�ľ���洢��һ����ά���������У�
//�ֱ��������Ԫ��֮��, ����Ԫ�غ͡���ʾ������Ԫ�غ͡�����Ԫ�غ���Ҫ�ֱ�ʹ��һ��һά����row��colʵ�ִ洢,
//�����row��col�е�ֵ��
//#include<iostream>
//using namespace std;
//int main()
//{
//	int m, n,j=0,i=0; 
//	cin >> m >> n;
//	int arr[50][50];
//	int row[50] = { 0 }, col[50] = { 0 };
//	
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			row[i]+= arr[i][j];
//		}
//	}
//	for (j = 0; j < n; j++)
//	{
//		for (i = 0; i < m; i++)
//			col[j] += arr[i][j];
//	}
//	cout << "row:";
//	for (i = 0; i < m; i++)
//	{
//		cout << row[i]<<" ";
//	}
//	cout << endl;
//	cout << "col:";
//	for (j = 0; j < n; j++)
//	{
//		cout << col[j]<<" ";
//	}
//	return 0;
//}
//�Ӽ�������n��������n<100���������һά�����У������ǴӴ�С�����ٴӼ�������һ������x��
//���������뵽�������У�ʹ�ò����Ԫ��������Ȼ�����������������е�����Ԫ�ء�
//	���н�����x���뵽������ʹ����Ȼ�����ú�����ɡ�
//	�����ʽ����һ��Ϊ����n������Ϊn��������������һ������x��
//#include<iostream>
//using namespace std;
//void sort(int x,int s[],int n)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (x>s[i])
//		{
//			n++;
//			for (j = n - 1; j > i; j--)
//			{
//				s[j] = s[j-1];
//			}
//			s[i] = x;
//			break;
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		cout << s[i] << " ";
//	}
//}
//int main()
//{
//	int n=0,i = 0, j = 0, s[100];
//	cin >> n;
//	for (i = 0; i < n;i++)
//	{
//		cin >> s[i];
//		if (s[i] == 0)
//		{
//			break;
//		}
//	}
//	int x;
//	cin >> x;
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = i + 1; j < n;j++)
//		{
//			if (s[i] < s[j])
//			{
//				int tmp;
//				tmp = s[i];
//				s[i] = s[j];
//				s[j] = tmp;
//			}
//			
//		}
//	}
//	sort(x, s, n);
//	return 0;
//}
//����һ��n*n������nֵ������50���ľ���洢�ڶ�ά���飬��������Խ���Ԫ��ֵ֮�͡�����Խ������ص����ݣ�nΪ����ʱ�������ظ���ӡ�
/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 0, j = 0;
	int arr[50][50];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (i = 0, j = 0;i<)
	return 0;
}*/
