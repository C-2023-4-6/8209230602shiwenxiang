#include<iostream>
using namespace std;
int main()
{
	//����3
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		double L = a + b + c;
		cout << "�������ܳ�:" << L << endl;
		if (a == b)
		{
			cout << "�ǵ���������" << endl;
		}
		else if (a == c)
		{
			cout << "�ǵ���������" << endl;
		}
		else if (c == b)
		{
			cout << "�ǵ���������" << endl;
		}
		else
		{
			cout << "���ǵ���������" << endl;
		}
	}
	else
	{
		cout << "������������" << endl;
	}
}