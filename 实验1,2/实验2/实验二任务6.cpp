#include<iostream>
using namespace std;
int main()
{
	//任务6
	int a, b, c, d;
	cout << "请输入两个整数" << endl;
	cin >> a >> b;
	c = a * b;
	if (b > a)
	{
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
	c = c / b;
	cout << "最大公约数是" << b << endl;
	cout << "最小公倍数" << c << endl;
	system("pause");
	return 0;
}