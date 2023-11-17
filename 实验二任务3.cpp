#include<iostream>
using namespace std;
int main()
{
	//任务3
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		double L = a + b + c;
		cout << "三角形周长:" << L << endl;
		if (a == b)
		{
			cout << "是等腰三角形" << endl;
		}
		else if (a == c)
		{
			cout << "是等腰三角形" << endl;
		}
		else if (c == b)
		{
			cout << "是等腰三角形" << endl;
		}
		else
		{
			cout << "不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "不构成三角形" << endl;
	}
}