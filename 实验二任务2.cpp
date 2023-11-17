#include<iostream>
using namespace std;
int main()
{
	//任务2
	double x;
	cin >> x;
	if (0 < x < 1)
	{
		double y = 3 - 2 * x;
		cout << y << endl;
	}

	else if (1 <= x < 5) {
		double y = 2 / (4 * x) + 1;
		cout << y << endl;
	}
	else if (5 <= x < 10)
	{

		double y = x * x;
		cout << y << endl;
	}
	else
	{
		cout << "你输入的值有误" << endl;
	}
}