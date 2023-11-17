#include<iostream>
using namespace std;
int main()
{
	//任务2
	cout << "使用标识符常量定义圆周率并求圆锥体积" << endl;
	double r;
	double h;
	cout << "圆锥底的半径:" << endl;
	cin >> r;
	cout << "圆锥的高:" << endl;
	cin >> h;
	cout << "圆锥的体积是：" << endl;
	double V;
	V = r * r * acos(-1) * h / 6;
	cout << V << endl;
	system("pause");
	return 0;
}