#include<iostream>
using namespace std;
int main()
{
	//ÈÎÎñ8
	double a;
	cout << "ÊäÈëa£º" << endl;
	cin >> a;
	double x = a;
	double b;
	do
	{
		b = x;
		x = (b + a / b) / 2;
	} while (-1e-5 < (x - b) < 1e-5);
	cout << x << endl;
}