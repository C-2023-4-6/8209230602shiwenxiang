#include<iostream>
using namespace std;
void jisuan(int a,int b)
{
	int c, d;

	if (b > a)
	{
		c = a * b;
		d = a;
		a = b;
		b = d;
	}
	while (a % b)
	{
		d = b;
		b = a % b;
		a = d;
	}
	c = (c / b);
	cout << "最大公约数是" << b << endl;
	cout << "最小公倍数" << c << endl;
}
int main()
{
	cout << "请输入两个整数" << endl;
	int m;
	int n;
	cin >> m >> n;
	
	jisuan(m, n);
	system("pause");
	return 0;

}