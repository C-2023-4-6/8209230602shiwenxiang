#include<iostream>
using namespace std;
int main()
{
	//实验2
	//任务1
	char a;
	cin >> a;
	if (a >= 'a' && a <= 'z')
	{
		a = a + 32;
		cout << (int)a << endl;
	}
	else if (a >= 'A' && a <= 'Z')
	{
		cout << a << endl;
	}
	char b;
	cin >> b;
	if (b >= 'a' && a <= 'z')
	{
		b = b + 32;
		cout << (int)b << endl;
	}
	else if (b >= 'A' && b <= 'Z')
	{
		cout << b << endl;
	}
}