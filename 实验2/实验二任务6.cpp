#include<iostream>
using namespace std;
int main()
{
	//����6
	int a, b, c, d;
	cout << "��������������" << endl;
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
	cout << "���Լ����" << b << endl;
	cout << "��С������" << c << endl;
	system("pause");
	return 0;
}