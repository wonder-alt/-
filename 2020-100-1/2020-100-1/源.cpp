//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch;
//   ch=getchar();
//	putchar(ch);
//	return 0;
//}



//����˰�������ո�������˰���涨���£�
//1����������1000Ԫ���ڣ���1000����������
//2����������1000~3000Ԫ���ڣ���3000������˰��Ϊ�����3%��
//3����������3000~5000Ԫ���ڣ���5000������˰Ϊ����4%��
//4���������볬��5000Ԫʱ����˰Ϊ����6%��
//��������Ϲ�ϵ����������m�����Ӧ���ɵ�˰��tax��
//����900 ���0
//����2000 ���60
//����3890 ���155.6
//����4010.5 ���160.42
//����6000 ���360
//#include<iostream>
//using namespace std;
//int main()
//{
//	double  y;
//	int m;
//	cin >> m;
//	switch (m / 1000)
//	{
//	case 0:
//		y = 0;
//		break;
//	case 1:
//	case 2:
//		y = 0.03*m;
//		break;
//	case 3:
//	case 4:
//		y = 0.04*m;
//		break;
//	default:
//		y = 0.06*m;
//	}
//	cout << y << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int m;
//	cin >> m;
//	if (m % 400 == 0 || m % 4 == 0 && m % 100 != 0)
//		cout << "yes" << endl;
//	else
//		cout << "no" << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int m;
//	cin >> m;
//	if (m >= 0 && m < 60)
//		cout << "C" << endl;
//	else if (m >= 60 && m < 90)
//		cout << "b" << endl;
//	else if (m >= 90 && m <= 100)
//		cout << "a" << endl;
//	else
//		cout << "illegal";
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	double m, tax;
//	cin >> m;
//	if (m <= 1000)
//		tax = 0;
//	else if (m > 1000 && m <= 3000)
//		tax = m*0.03;
//	else if (m > 3000 && m <= 5000)
//		tax = m*0.04;
//	else
//		tax = m*0.06;
//	cout << tax << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	double m, wage;
//	cin >> m;
//	if (m <= 4)
//	{
//		wage = 50;
//		cout << wage << endl;
//	}
//	else if (m > 4 && m <= 8)
//	{
//		wage = 50 + (m - 4) * 20;
//		cout << wage << endl;
//	}
//	else
//	{
//		wage = 130 + (m - 8) * 30;
//		cout << wage << endl;
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int year, month;
//	cin >> year >> month ;
//	if (month == 2)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			cout << 29 << endl;
//		else
//			cout << 28 << endl;
//	}
//	else if (month == 4||month==6||month==9||month==11)
//	{
//		cout << 30 << endl;
//	}
//	else 
//		cout << 31<<endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a + b > c&&a + c > b&&b + c > a)
//		cout << "yes" << endl;
//	else
//		cout << "no" << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c,max;
//	cin >> a >> b >> c;
//	if (a > b)
//	{
//		max = a;
//		if (b > c)
//		{
//			max = b;
//		}
//		else
//		{
//			max = c;
//		}
//	}
//	else
//	{
//		if (b > c)
//			max=b;
//		else
//			max=c;
//	}
//	cout << max << endl;
//	return 0;
//}

//
//3.1Ԫ / ���2.50Ԫ / ���4.10Ԫ / ���10.20Ԫ / ����
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x ;
//	cin >> x;
//	if (x == 1)
//		cout << 3.1 << endl;
//	else if (x == 2)
//		cout << 2.50 << endl;
//	else if (x == 3)
//		cout << 4.10 << endl;
//	else if (x == 4)
//		cout << 10.20<<endl;
//	else
//		cout << 0<< endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int year, month, day,sum1,i,sum2,sum3,sum;
//	sum1 = 0;
//	sum2 = 0;
//	sum3 = 0;
//	i = 1;
//	cin >> year >> month >> day;
//	for (i = 1 ; i <= month; i++)
//	{
//		if (i == 4 || i == 6 || i == 9 || i == 11)
//		{
//			sum1 = sum1 + 30;
//		}
//		else if (i == 2)
//		{
//			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			{
//				sum2 = 29;
//			}
//			else
//				sum2 = 28;
//		}
//		
//		else if(i == 1||i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
//		{
//			sum3 = sum3 + 31;
//		}
//	}
//	sum = sum1 + sum2 + sum3;
//	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//		sum -= (31 - day);
//	else if (month == 2)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			sum -= 29 - day;
//
//		}
//		else
//		{
//			sum -= 28 - day;
//
//		}
//	}
//	else
//		sum -= (30 - day);
//
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int x;
//	cin >> x;
//	if (x > 60)
//		cout << "Pass" << endl;
//	else
//		cout << "Fail";
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c,d, min;
//	cin >> a >> b >> c>>d;
//	if (a < b)
//	{
//		min = a;
//		if (a < c)
//		{
//			min = a;
//			if (a < d)
//			{
//				min = a;
//			}
//			else
//			{
//				min = d;
//			}
//		}
//		else
//		{
//			min = c;
//		}
//	}
//	else
//	{
//		min = b;
//		if (b < c)
//		{
//			min = b;
//			if (b < d)
//			{
//				min = b;
//			}
//			else
//			{
//				min = d;
//			}
//		}
//		else
//		{
//			min = c;
//			if (c < d)
//			{
//				min = c;
//			}
//			else
//			{
//				min = d;
//			}
//		}
//	}
//	cout << min << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c,d,e, sum;
//	cin >> a;
//	e = a % 10;
//	a = a/10;
//	d = a% 10;
//	a = a /10;
//	c = a % 10;
//	a = a /10;
//	b = a%10;
//	a = a/10;
//	if (a==e&&b==d)
//		cout << "YES" << endl;
//	else
//		cout << "NO" << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	char ch;
//	cin >> ch;
//	if (ch >= 65 && ch <= 90)
//	{
//		ch = ch + 32;
//		
//		cout << char(ch) << endl;
//	}
//	else if (ch>=97&&ch<=122)
//	{
//		cout << ch << endl;
//	}
//	else
//	{
//		cout << ch << endl;
//	}
//	return 0;
//}

//��дһ����������ĳ�˵���ߣ�cm���Լ����أ�kg�����������±�׼���������������������ԣ�
//��1����׼���� = ��� - 110����2��������׼����5kg������5kg����Ϊ�����֡���
//��3�����ڱ�׼����5kg������5kg����Ϊ�����ݡ���3���Ȳ�������׼���ض���5kg��
//     Ҳ�����ڱ�׼���ض���5kg��Ϊ����׼��
//����175 75 ��� fat
//����175 60 ��� standard
//����175 55 ��� thin
//#include<iostream>
//using namespace std;
//int main()
//{
//	double t, w,standard;
//	cin >> t >> w;
//	standard = t - 110;
//	if (w - standard > 5)
//	{
//		cout << "fat" << endl;
//	}
//	if (standard - w > 5)
//	{
//		cout << "thin" << endl;
//	}
//	if (w <= standard + 5 && w >= standard - 5)
//	{
//		cout << "standard" << endl;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a + b == c)
//	{
//		cout << "right";
//	}
//	else
//		cout << "error";
//	return 0;
//}

//��дһ������������һ���µ��������ã����㷽�����£�������ʱ��<��10Сʱ������Ϊ30Ԫ��
//��10Сʱ<����ʱ��<��50Сʱ������ÿСʱ3Ԫ��������ʱ��>50Сʱ������ÿСʱ2.5Ԫ��Ҫ��
//�����������Сʱ������ʾ�����ܵ��������á�
//	����8���30
//	����30���90
//	����60���150
//
//��·��������涨�������ز�����50����ģ����˷Ѱ�ÿ����0.15Ԫ�Ʒѣ��糬50�����������ÿ�������0.10Ԫ��
//���������������������������˷ѡ�
//����25���3.75
//����50���7.5
//����80���15
//#include<iostream>
//using namespace std;
//int main()
//{
//	double f, w;
//	cin >> w;
//	if (w <= 50)
//	{
//		f = 0.15*w;
//	}
//	else
//		f = 0.15*50+0.25*(w-50);
//	cout << f << endl;
//}
//����һԪ���η��̵�ϵ��a��b��c�����㷽�̵�ʵ���⡣
//��һ����ʱ���һ��������������ʱ���մ�С�����˳�������������������֮���ÿո�ָ���
//�޸�ʱ������޽⡱��
//���룺4 4 1  ����� - 0.5
//���룺1 2 - 3 ����� - 3 1
//���룺1 2 3  ������޽�
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	double a, b, c,d1,d2;
//	cin >> a >> b >> c;
//	if (b*b - 4*a*c > 0)
//	{
//		d1 = ((0-b) + (sqrt(b*b - 4 * a*c)) / (2 * a));
//		d2 = ((0-b) - (sqrt(b*b - 4 * a*c)) / (2 * a));
//		if (d1 > d2)
//		{
//			cout << d1 << " "<<d2;
//		}
//		else
//		{
//			cout << d2<<" " << d1;
//		}
//	}
//	else if (b*b - 4 * a*c == 0)
//	{
//		d1 =((0-2)*a)/b;
//		cout << d1 << endl;
//	}
//	else
//		cout << "�޽�"<< endl;
//	return 0;
//}

//n�����ϣ���һ����һ����������Ժ�ÿ����ʣ�µ�һ����������ʼ����Ժ������ꣿ
//˵���������ϸ���Ϊ����ʱ����һ��Ϊһ����������統���ϸ���Ϊ5ʱ����һ��Ϊ��2����

//�룺���ϸ��������������

//����10���2

//����50���4





//n�����ϣ���һ����һ����������Ժ�ÿ����ʣ�µ�һ����������ʼ����Ժ������ꣿ
//˵���������ϸ���Ϊ����ʱ����һ��Ϊһ����������統���ϸ���Ϊ5ʱ����һ��Ϊ��2����
//���룺���ϸ��������������
//����10���2
//����50���4
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,i,day=0;
//	cin >> n;
//	while (n!=0)
//	{
//		n =n-((n / 2) + 2);
//		day++;
//	}
//	cout << day << endl;
//	return 0;
//}
//����һ��������repeat(����0<repeat<10)����repeat���������㣺
//	����һ��ѧ������ѧ�ɼ������������60�������Fail�������������Pass����
//	����5 35 68 49 94 88
//	�����ע�⣺������ݷ�����ʾ��
//	Fail
//	Pass
//	Fail
//	Pass
//	Pass
//
//����1 �������� n(n <= 100)�����㲢���1��1 / 2��1 / 3��������1 / n ��
//����5���2.28333
//����4���2.08333
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n,i;
//	double sum = 0;
//	cin >> n;
//	for (i = 0; i < n; i++)
//	{
//		sum = sum + 1.0 / (1 + i);
//	}
//	cout << sum << endl;
//	return 0;
//}
//��ӡ�����е� "ˮ�ɻ��� "����ν "ˮ�ɻ��� "��ָһ����λ�������λ���������͵��ڸ�
//���������磺153��һ�� "ˮ�ɻ��� "����Ϊ153 = 1�����η���5�����η���3�����η���
//���� : ��
// ��� : 153 370 371 407 ��ע�⣺ÿ��ֵ�������һ���ո�
//#include<iostream>
//using namespace std;
//int main()
//{
//	int s,a,b,c,d;
//	for (s = 100; s <= 999 ;s++)
//	{
//		d = s;
//		a = d % 10;
//		d = d / 10;
//		b = d % 10;
//		d = d / 10;
//		c = d % 10;
//		if (s == a*a*a + b*b*b + c*c*c)
//		{
//		cout << s << " "; 
//		
//		}
//	}
//	return 0;
//}


//˰������������˰���涨���£�
//1��������1000Ԫ���ڣ���1000����������
//2��������1000~3000Ԫ���ڣ���3000������˰��Ϊ�����3%��
//3�����볬��3000~5000Ԫ���ڣ���5000������˰Ϊ�����4%��
//4�������볬��5000Ԫʱ����˰Ϊ�����6%��
//��������Ϲ�ϵ����������m�����Ӧ���ɵ�˰��tax��
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	double m, tax;
//	for (cin >> n; n > 0; n--)
//	{
//		cin >> m;
//		if (m <= 1000)
//			tax = 0;
//		else if (m > 1000 && m <= 3000)
//		{
//			tax = 0.03*m;
//		}
//		else if (m > 3000 && m <= 5000)
//		{
//			tax = 0.04*m;
//		}
//		else
//			tax = 0.06*m;
//		cout << tax<<" ";
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int num,i,j,count=0;
//	cin >> num;
//	for (i = 1; i <= num; i++)
//	{
//		for (j = 1; j <= num; j++)
//		{
//			if (i*j == num)
//			{
//				count++;
//			}
//		}
//	}
//	cout<< count;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int m, n,i,a=0;
//	cin >> m >> n;
//	if (m > n)
//	{
//		for (i = 2; i <= m&i <= n; i++)
//		{
//			if (m%i == 0 && n%i == 0)
//			{
//				if (a<i)
//				a = i;
//			}
//		}
//		cout << a << endl;
//	}
//	if (m < n)
//	{
//		for (i = 2; i <= m&i <= n; i++)
//		{
//			if (m%i == 0 && n%i == 0)
//			{
//				if (a<i)
//					a = i;
//			}
//		}
//		cout << a << endl;
//	}
//	return 0;
//}

//�ж�쳲��������У�Fibonacci sequence����n���ֵ�ܷ�3��������쳲���������Ϊ��F(0) = 0, F(1) = 1, F(n) = F(n - 1) + F(n - 2)(n >= 2), 
//��дһ����������n(����n >= 2)�����F(n)��ֵ�ܱ�3�����������yes�������������no����
//����7��f(7)Ϊ13�������no
//����8��f(8)Ϊ21�������yes
//��ʾ��쳲��������е�ֵ����Ϊ0��1��1��2��3��5��8��������
//#include<iostream>
//using namespace std;
//int fibon(int a)
//{
//	if (a == 0)
//		return 0;
//	if (a == 1)
//		return 1;
//	int f0 = 0;
//	int f1 = 1;
//	int f2 = 1;
//	for (int i = 1; i <a; i++)
//	{
//		f2 = f1 + f0;
//		f0 = f1;
//		f1 = f2;
//	}
//	return f2;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	fibon(n);
//	if (fibon(n) % 3 == 0)
//		cout << "yes";
//	else
//		cout << "no";
//	return 0;
//}
//��N�� <= 100��������������ƽ������ż���������͡�
//#include<iostream>
//using namespace std;
//int main()
//{
//	int c=0,d=0,a=0,b=0,N,i;
//	cin >> N;
//	for (i = 1; i <= N; i++)
//	{
//		cin >> a;
//		if (a % 2 != 0)
//			c = c + a*a;
//		if (a % 2 == 0)
//			d = d + a*a*a;
//	}
//	cout << c << " " << d;
//	return 0;
//}
//���������һ�����֣���������ĸ���λ�ϵ�����Ϊż���ĺ͡����磺1234�����Ϊ6 = 2 + 4��
//����4321���6
//����51289���10
//#include<iostream>
//using namespace std;
//int main()
//{
//	int x,a,b=0;
//	cin >> x;
//	while (x != 0)
//	{
//		if (x == 0)
//			break;
//		a = x % 10;
//		if (a % 2 == 0)
//		{
//			b = b + a;
//		}
//		x = x / 10;
//	}
//	cout << b;
//}
//����һ��������n�����ǽ����ĸ���λ��ӵõ�һ���µ����֣�������������һλ�������ǳ�֮Ϊn��������
//�����ظ�����ֱ������Ϊһ��һλ�������һλ��Ҳ����n�����������磺����24��2 + 4 = 6��6����24��������
//����39��3 + 9 = 12��1 + 2 = 3��3����39�����������д���򣬼���n��������
//����189���9

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, sum = 0,a;
//	cin >> n;
//	while (1)
//	{
//		while (n!=0)
//		{
//			a = n % 10;
//			n = n / 10;
//			sum = sum + a;
//		}	
//		if (sum < 10 && sum >= 0)
//			break;
//		else
//		{
//			n = sum;
//			sum = 0;
//		}
//	}
//	cout << sum << endl;
//	return 0;
//}
//������һ���༶��n��ͬѧѡ����C++���Գ�����ƣ�Ҫ��ͳ�Ƹ��ſε�ƽ���ɼ���
//�����ʽ����һ����λѧ������n���������n���ɼ������ƽ���ɼ���
//���룺5 80 90 88 96 70 ���84.8
//#include<iostream>
//using namespace std;
//int main()
//{
//	double i, n,j,sum=0,ave;
//	cin >> n;
//	for (i = 1; i <= n; i++)
//	{
//		cin >> j;
//			sum = sum + j;
//	}
//	ave = sum / n;
//	cout << ave;
//	return 0;
//}
//����һ��������repeat(����0<repeat<10)����repeat���������㣺����1 ����ʵ��x��1�������� n(n <= 50)�����㲢���x��n���ݡ�
	//����3 2 5 3 4 5 3���32 81 125
//

//����һ����������0������ͳ�����ݸ���������0�������ֵ��
//#include<iostream>
//using namespace std;
//int main()
//{
//	int count=0,a,max=0;
//	while (1)
//	{
//		cin >> a;
//		if (a == 0)
//		{
//			break;
//		}
//		else
//		{
//			if (a > max)
//			{
//				max = a;
//			}
//			count++;
//		}
//	}
//	cout << count << " " << max;
//	return 0;
//}
//����һ��������n�����[2, n]֮�����е�����������������
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n, i, j=2,count=0,a=0;
//	cin >> n;
//	for (i = 2; i <= n; i++)
//	{
//		for (j = 2; j < i;j++)
//		{
//			if (i%j == 0)
//			{
//				a++;
//				break;
//			}
//		}
//		if (a == 0)
//		{
//			count++;
//			cout << i << " ";
//		}
//		a = 0;
//	}
//	cout << endl;
//	cout << count;
//	cout << endl;
//	return 0;
//}