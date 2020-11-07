//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch;
//   ch=getchar();
//	putchar(ch);
//	return 0;
//}



//假设税务部门征收个人所得税，规定如下：
//1）月收入在1000元以内（含1000），免征；
//2）月收入在1000~3000元以内（含3000），纳税额为收入的3%；
//3）月收入在3000~5000元以内（含5000），纳税为收入4%；
//4）当月收入超过5000元时，纳税为收入6%。
//请根据以上关系，输入收入m，输出应缴纳的税收tax。
//输入900 输出0
//输入2000 输出60
//输入3890 输出155.6
//输入4010.5 输出160.42
//输入6000 输出360
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
//3.1元 / 公斤，2.50元 / 公斤，4.10元 / 公斤，10.20元 / 公斤
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

//编写一个程序，输入某人的身高（cm）以及体重（kg），按照以下标准对他（她）的体型做测试：
//（1）标准体重 = 身高 - 110；（2）超过标准体重5kg（不含5kg）的为“过胖”；
//（3）低于标准体重5kg（不含5kg）的为“过瘦”（3）既不超过标准体重多于5kg，
//     也不低于标准体重多于5kg的为“标准”
//输入175 75 输出 fat
//输入175 60 输出 standard
//输入175 55 输出 thin
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

//编写一个程序来计算一个月的上网费用，计算方法如下：若上网时间<＝10小时，网费为30元；
//若10小时<上网时间<＝50小时，网费每小时3元；若上网时间>50小时，网费每小时2.5元。要求
//输入该月上网小时数，显示该月总的上网费用。
//	输入8输出30
//	输入30输出90
//	输入60输出150
//
//铁路托运行李规定：行李重不超过50公斤的，托运费按每公斤0.15元计费；如超50公斤，超过部分每公斤加收0.10元。
//输入行李重量，输出该行李的托运费。
//输入25输出3.75
//输入50输出7.5
//输入80输出15
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
//输入一元二次方程的系数a，b，c，计算方程的实数解。
//有一个根时输出一个根；有两个根时按照从小到大的顺序输出两个根，两个根之间用空格分隔；
//无根时输出“无解”。
//输入：4 4 1  输出： - 0.5
//输入：1 2 - 3 输出： - 3 1
//输入：1 2 3  输出：无解
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
//		cout << "无解"<< endl;
//	return 0;
//}

//n个西瓜，第一天卖一半多两个，以后每天卖剩下的一半多两个，问几天以后能卖完？
//说明：当西瓜个数为奇数时，卖一半为一半的整数，如当西瓜个数为5时，卖一半为卖2个。

//入：西瓜个数，输出：天数

//输入10输出2

//输入50输出4





//n个西瓜，第一天卖一半多两个，以后每天卖剩下的一半多两个，问几天以后能卖完？
//说明：当西瓜个数为奇数时，卖一半为一半的整数，如当西瓜个数为5时，卖一半为卖2个。
//输入：西瓜个数，输出：天数
//输入10输出2
//输入50输出4
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
//输入一个正整数repeat(假设0<repeat<10)，做repeat次下列运算：
//	输入一个学生的数学成绩，如果它低于60，输出“Fail”，否则，输出“Pass”。
//	输入5 35 68 49 94 88
//	输出（注意：输出数据分行显示）
//	Fail
//	Pass
//	Fail
//	Pass
//	Pass
//
//输入1 个正整数 n(n <= 100)，计算并输出1＋1 / 2＋1 / 3＋……＋1 / n 。
//输入5输出2.28333
//输入4输出2.08333
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
//打印出所有的 "水仙花数 "，所谓 "水仙花数 "是指一个三位数，其各位数字立方和等于该
//数本身。例如：153是一个 "水仙花数 "，因为153 = 1的三次方＋5的三次方＋3的三次方。
//输入 : 无
// 输出 : 153 370 371 407 （注意：每个值输出后有一个空格）
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


//税务部门征收所的税，规定如下：
//1）收入在1000元以内（含1000），免征；
//2）收入在1000~3000元以内（含3000），纳税额为收入的3%；
//3）收入超过3000~5000元以内（含5000），纳税为收入的4%；
//4）当收入超过5000元时，纳税为收入的6%。
//请根据以上关系，输入收入m，输出应缴纳的税收tax。
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

//判断斐波那契数列（Fibonacci sequence）第n项的值能否被3整除，设斐波那契数列为：F(0) = 0, F(1) = 1, F(n) = F(n - 1) + F(n - 2)(n >= 2), 
//编写一个程序，输入n(假设n >= 2)，如果F(n)的值能被3整除则输出“yes”，否则输出“no”。
//输入7，f(7)为13，则输出no
//输入8，f(8)为21，则输出yes
//提示：斐波那契数列的值依次为0，1，1，2，3，5，8，。。。
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
//求N（ <= 100）个数中奇数的平方和与偶数的立方和。
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
//对于输入的一个数字，请计算它的各个位上的数字为偶数的和。例如：1234，结果为6 = 2 + 4。
//输入4321输出6
//输入51289输出10
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
//对于一个正整数n，我们将它的各个位相加得到一个新的数字，如果这个数字是一位数，我们称之为n的数根，
//否则重复处理直到它成为一个一位数，这个一位数也算是n的数根。例如：考虑24，2 + 4 = 6，6就是24的数根。
//考虑39，3 + 9 = 12，1 + 2 = 3，3就是39的数根。请编写程序，计算n的数根。
//输入189输出9

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
//假设有一个班级，n名同学选修了C++语言程序设计，要求统计该门课的平均成绩。
//输入格式：第一个数位学生人数n，后面接着n个成绩，输出平均成绩。
//输入：5 80 90 88 96 70 输出84.8
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
//输入一个正整数repeat(假设0<repeat<10)，做repeat次下列运算：读入1 个正实数x和1个正整数 n(n <= 50)，计算并输出x的n次幂。
	//输入3 2 5 3 4 5 3输出32 81 125
//

//输入一组整数，以0结束，统计数据个数（不含0）及最大值。
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
//输入一个正整数n，输出[2, n]之间所有的素数及素数个数。
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