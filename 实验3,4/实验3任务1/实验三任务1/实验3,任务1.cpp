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
	cout << "���Լ����" << b << endl;
	cout << "��С������" << c << endl;
}
int main()
{
	cout << "��������������" << endl;
	int m;
	int n;
	cin >> m >> n;
	
	jisuan(m, n);
	system("pause");
	return 0;

}