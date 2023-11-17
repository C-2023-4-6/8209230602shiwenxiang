#include<iostream>
using namespace std;
int main()
{
	//хннЯ9
	double one = 0.8;
	int tian = 0;
	int shu2 = 0;
	double zhong = 0;
	for (int shu = 2; shu <= 100; tian++)
	{
		shu = shu * 2;
		shu2 = shu2 + shu;
	}
	zhong = shu2 * one / tian;
	cout << zhong << endl;
}