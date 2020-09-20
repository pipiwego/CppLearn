#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

ifstream fin("data1.in");
ofstream fot("dwata1.out");
extern long i = 0;
long long q[MAX];
int front , rear;

char sa[101] , sb[101];
int la , lb , lc , jw , f , w , a[101] , b[101] , c[10200];

float slen(float a , float b)
{
	float c;
	c = sqrt(a * a + b * b);
	return c;
}

struct student {
	string name;
	char sex;
	int age;
	double weight;
};

void tower(int n , char a , char b , char c) {
	if (n == 1) cout << "Move " << a << "-->" << c << "  " << i++ << endl;
	else
	{
		tower(n - 1 , a , c , b);
		cout << "Move " << a << "-->" << c << "  " << i++ << endl;
		tower(n - 1 , b , a , c);
	}
}

float guangnian(float d1 , float d2) {
	float d3 = sqrt(d1 * d1 - d2 * d2);
	return d3;
}

int fun(int a) {
	if (a == 1)
	{
		return 1;
	}
	if (a == 2)
	{
		return 2;
	}
	return fun(a - 2) - fun(a - 1);
}
int fat(int n) {
	int z = 1;
	for (int i = 1; i <= n; i++)
	{
		z = z * i;
	}
	return z;
}

int swap(int a , int b) {
	int c;
	c = a; a = b; b = c;
	return a;
}

int main()
{
	/*
		string s;
	cin >> s;
	int Ssize;
	Ssize = s.size();
	for (int i = Ssize-1 ; i >= 0; i--)
	{
		cout << s[i];
	}

	int x,y;
	cin >> x >> y;
	y = y + x;
	x = y - x;
	y = y - x;
	cout << x << endl << y << endl;

	float a, b, s;
	cin >> a >> b;
	s = a * b;
	cout<< s << endl;

	int d;
	d = 0;
	cin >> d;
	d = d % 2;

	if (d==0)
	{
		cout << "鏄伓鏁?" << endl;
	}
	else
	{
		cout << "鏄鏁" << endl;
	}
	char w;
	w = 75;
	cout << w << endl;

	a = 3;
	cout << a << endl;
	a = 10;
	cout << a << endl;
	a = a * 5;
	cout << a << endl;

	int g, f, j, k, h, l;
	cin >> g;
	f = g % 10;
	j = g / 10 % 10;
	k = g / 100 % 10;
	h = g / 1000 % 10;
	l = f * 1000 + j * 100 + b * 10 + h* 5;
	cout << f- l << endl;
	return 0;

	int i;
	for (i = 1; i <= 10000000000000; i++)
	{
		if (i%2 == 0)
		{
			cout << i << endl;
		}
	}

	int sum;
	sum = 0;
	for ( int i = 0; i <= 100;  i++)
	{
		sum = sum + i;
	}
	cout << sum << endl;

	int i,sum1=0,sum2=0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)sum1 = sum1 + i;
		else sum2 = sum2 + i;
	}
	cout << sum1 << " " << sum2 << endl;
	return 0;

	int a, b, i,tot, c1, c2;
	cin >> a >> b;
	tot = 0;
	for (i = a; i <= b; i++)
	{
		c1 = i / 10;
		c2 = i % 10;
		if ((c1 + c2) % 3 == 0) {
			cout << i << endl;
			tot++;
		}
	}
	cout << tot << endl;

	int i;
	float s = 0.0;
	for (i = 1; i <= 99; i = i + 2)
	{
		s = s + (1.0 / i) -
	}

	int i=1, sum = 0;
	while (i<=100)
	{
		sum = sum+ i;
		i++;
	}
	cout << sum << endl;
	return 0;

	int a,b,c,d;
	cin>>a;5555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555
	b=a%10;
	c=a/10%10;
	d=a/100%10;
	cout<<b+c+d;

	int a;
	cin>>a;
	if (a>=90){
		cout<<"数学很棒";
	}
	else{
	cout<<"数学要加油";
	}

	float s=0;
	for (int i=1;i<=100;i=i+2)
	{
		s=s+1.0/i-1.0/(i+1);
	}
	cout<<s;

	float x=3.1415926535;
	cout<<x<<endl;

	float y=12345678.1;
	cout<<y<<endl;

	float x;
	cin>>x;
	if (x<0) x=-x;
	cout<<fixed<<setprecision(2)<<x<<endl;

	float x;
	x=float(3)/2;
	cout<<x<<endl;

	float x,y;
	int z;
	x=1.2;
	y=2.6;
	z=(int)(x+y);
	cout<<z<<endl;

	float x;
	cin>>x;
	cout<<int(x)<<endl;

	int a;
	cin>>a;
	cout<<a<<endl;
	cout<<a*a<<endl;

	int a,b,c;
	cin>>a>>b>>c;
	cout<<b<<endl;

	int a,b,c;
	cin>>a>>b>>c;
	c=(a+b)*c;
	cout<<c<<endl;

	int n;
	cin>>n;

	float o=0;
	for(int i=0;i<=n-1;++i){
		int m;
		cin>>m;
		o=m+o;
	}
	cout<<o<<" ";
	cout<<fixed<<setprecision(5)<<o/n;
	return 0;

	//_______________________________
	int n,number,sum=0;
	float average;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>number;
		sum=sum+number;
	}
	cout<<sum<<" ";

	average=float(sum)/n;
	cout<<fixed<<setprecision(5)<<average;
	return 0;
	//_______________________________

	int n;
	cin>>n;
	float o=0;
	for(int i=1;i<=n;++i){
		int m;
		cin>>m;
		o=m+o;
	}
	cout<<o<<" ";
	cout<<fixed<<setprecision(5)<<o/n;

	int n,number,sum=0;
	float average;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>number;
		sum=sum+number;
	}
	cout<<sum<<" ";

	average=float(sum)/n;
	cout<<fixed<<setprecision(5)<<average;

	cin >> c1;
	cout << int(c1) << endl;

	int n , x , y;

	cin >> n >> x >> y;
	if (y/x%2==0)
	{
	n = n - y / x;
	}
	else
	{
	n = n - (y / x + 1);
	}
	cout << n;

	int a[7] , c = 0;
	float b = 0.00;
	for (int i = 1; i <= 6; i++)
	{
		cin >> a[i];
		c = c + a[i];
	}

	b = float(c) / 6;
	cout << fixed << setprecision(2) << b << endl;

int a;
	cin >> a;
	if (a % 3 == 0)
	{
		cout << "3 ";
	}
	if (a % 5 == 0)
	{
		cout << "5 ";
	}
	if (a % 7 == 0)
	{
		cout << "7 ";
	}
	if (a % 3 != 0 && a % 5 != 0&& a % 7 != 0)
	{
		cout << "n ";
	}

	int a[11];
	int tall , sum = 0;
	for (int i = 1; i <= 10; i++)
	{
		cin >> a[i];
	}
	cin >> tall;
	for (int i = 1; i <= 10; i++)
	{
		if (tall + 30 >= a[i])
		{
			sum++;
		}
	}
	cout << sum;

int a[10];
cout << "Array size is:" << sizeof(a) << endl;
memset(a , 0 , sizeof(a));
for (int i = 0; i < 10; i++)
{
	cout << a[i];
}

int n;
cin >> n;
int a[1000];
for (int i = 0; i < n; i++)
{
	cin >> a[i];
}
for (int i = n-1; i >=0 ; i--)
{
	cout << a[i]<<" ";
}

	char id;
	float price , discount;
	scanf_s("%c\n" , &id);
	scanf_s("%f" , &price);
	switch (id)
	{
	case'P': discount = 0.7; break;
	case'G':discount = 0.8; break;
	case'S':discount = 0.9; break;

	default:discount = 0.95;
	}
	printf("%.2f\n" , price * discount);

int x , y , day;
cin>>x>>y;
switch (y)
{
case 1: case 3: case 5: case 7: case 8: case 10: case 12: day = 31; break;
case 4: case 6: case 9: case 11: day = 30; break;
case 2: {
	if ((x % 400 == 0) || (x % 4 == 0) && (x % 100 != 0))
	{
		day = 29;
	}
	else
	{
		day = 28;
	}
	break;
}
}
cout << day;

	int k , a = 1 , b = 1 , c = 1;
	cin >> k;
	for (int i = 3; i <= k; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	cout << c;

	if (x> y)
	{
		cout << x << endl;
	}
	else
	{
		cout << y << endl;
	}
	x = 8;
	y = 11;
	if (x > y)
	{
		cout << x << endl;
	}
	else
	{
		cout << y << endl;
	}

	for (int i = 0; i <= 100; i++)
	{
		cout << i << endl;
	}
	for (int i = 99; i >= 1; i = i - 2)
	{
		cout << i << endl;
	}

int data[16] = { 2590,2829,3235,3887,3694,3143,3399,2656,3062 ,2478 , 2015 , 15152 , 5090 , 2641 , 2009 , 2048 };
int num = 16;
int maxID = 0;
int maxValue = data[0];
for (int i = 1; i <= 15; i++)
{
	if (data[i] > maxValue)
	{
		maxValue = data[i];
		maxID = i;
	}
}
cout << maxID << " " << maxValue;
for (int i = 1; i <= 9; i++) {
	for (int j = 1; j <= 9; j++) {
		cout << i << "*" << j << "=" << i * j << " ";
	}
	cout << endl;
}

int n , ans = 0;
cin >> n;
for (int i = 1; i <= n; i++) {
	int flagl = 1 , flag2 = 1;
	if (i % 7 == 0) flagl = 0;
	int x = i;
	while (x && flag2) {
		if (x % 10 == 7) flag2 = 0;
		x = x / 10;
	}
	if (flagl && flag2) ans++;
}
cout << ans << endl;

char sl[100] , s2[100];
int len;
gets_s(sl);
len = strlen(sl);
printf("%d\n" , len);
for (int i = 0; i <= len - 1; i++) {
	s2[i] = sl[len - i - 1];
}
s2[len] = '\0';
printf("%s\n" , s2);

int a[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
for (int i = 0; i < 3; i++) {
	for (int j = 0; j < 3; j++) {
		cout << a[i][j] << " ";
	}
	cout << endl;

int n,ans=0;
cin >> n;
for (int i = 1; i <= n; i++)
{
	int flag1 = 1 , flag2 = 1;
	if (i % 7 == 0) flag1 = 0;
	int x = i;
	while (x && flag2)
	{
		if (i % 7 == 0) flag1 = 0;
		x = x / 10;
	}
	if (flag1 && flag2) ans++;
}
cout << ans << endl;

int a[3][3] = { {1,2,3},{1,5,6},{7,8,9} };
for (int i = 0; i <= 2; i++) {
	for (int s = 0; s <= 2; s++)
	{
		cout << a[i][s];
	}
	cout << endl;
}
cout << endl;
for (int i = 9; i >= 0; i--) cout << a[i] << " ";

int i , j;
char a[3];
a[2] = '\0';
for (i = 1; i <= 94; i++)
{
	cout << "第 " << i << " 区" << endl;
	a[0] = i + 0xA0;
	for (j = 1; j <= 94; j++)
	{
		a[1] = j + 0xA0;
		cout << a << '\t';
		if (j % 10 == 0)
			cout << endl;
	}
	cout << endl;

	string dayNAME[8] = { "","Mon.","Tue.","Wen.","Thur.","Fri.","Sat.","Sun." };
	int day;
	cin >> day;
	cout << dayNAME[day] << endl;
}

int x , y , z;
fin >> x;
fin >> y;
fot << x + y;
fin.close(); fot.close();

int c,x;
front = 0;
rear = 0;
cout << "操作代码:";
cin >> c;
while (c==1||c==0||c==3)
{
	if (c == 1)
	{
		cout << "手机号码：";
		cin >> x;
		rear++;
		q[rear] = x;
	}
	if (c == 0)
	{
		if (front=rear)
		{
			cont << "none" << endl;
		}
		cout << "手机号码：";
		cin >> x;
		rear++;
		q[rear] = x;
	}
}

char s[110];
int top = 0;
string str;
getline(cin,str);
for (int i = 0; i < str.size; i++)
{
	switch (str[i]) {
		case'#':top--; break;
		case'@':top = 0; break;
		default:top++; s[top] = str[i];
	}
}

for (int i = 1; i < top; i++)
{w
	cout << s[i];
}
cout << endl;

//////////////9月5日/////////////////
int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
for (int i = 0; i < 3; i++)
{
	for (int j = 0; j < 3; j++)
	{
		cout << a[i][j] << " ";
	}
	cout << endl;
}

//
int a[10][10];
int size;
cin >> size;
int ID = 1;
for (int i = 0; i < size; i++)
{
	for (int j = 0; j < size; j++)
	{
		a[i][j] = ID;
		ID++;
		printf("%4d" , a[i][j]);
	}

	cout << endl;
}

//冒泡排序
int n , i , j , temp , h[101];
cin >> n;
for ( i = 1; i <= n; i++)
{
	cin >> h[i];
}
for (int i = 1; i < n; i++)
{
	for (j = 1; j <= n - i; j++) {
		if (h[j] > h[j+1])
		{
			temp = h[j];
			h[j] = h[j + 1];
			h[j + 1] = temp;
		}
	}
}
for ( i = 1; i <=n; i++)
{
	cout << h[i] << " ";
}

//二分查找
int a[10] = { 1,2,6,8,10,19,88,99,188,666 };
int maxID = 9 , low , high , mid;
int target;
bool flag = false;

for (int i = 0; i <= maxID; i++)
{
	cout << a[i] << " ";
}
cout<<endl;
cin >> target;
low = 0; high = maxID;
while (low<=high)
{
	mid = (low + high) / 2;
	if (target==a[mid])
	{
		cout << "Found it!at:" << mid;
		flag = true;
		break;
	}
	else if (target > a[mid])
	{
		low = mid + 1;
	}
	else if (target < a[mid])
		high = mid - 1;
	{
	}
}
if (flag ==false)
{
	cout << "Not found!";
}
*/
//////////////9月20日/////////////////
	int a[100][100] , size;
	cin >> size;
	int ID = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			a[i][j] = ID;
			ID++;
			printf("%4d" , a[i][j]);
		}
		cout << endl;
	}
}