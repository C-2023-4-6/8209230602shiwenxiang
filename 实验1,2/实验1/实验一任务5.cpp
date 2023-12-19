#include<iostream>
using namespace std;
int main()
{
	//任务5
	cout << "换算℉成℃" << endl;
	double F;
	cout << "输入华氏温度" << endl;
	cin >> F;
	double C = (F - 32) / 1.8;
	cout << "摄氏度：" << C << endl;
}