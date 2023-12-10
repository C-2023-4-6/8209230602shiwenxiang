#include<iostream>
#include"mytemperature.h"
using namespace std;

int main()
{
	cout << "输入1进行摄氏度向华氏度转换，输入0进行华氏度向摄氏度转换" << endl;
	int m;
	double F=0;
	double C=0;
	cin >> m;
	if(m==1)
	{
	
		 celsius_to_fah(F);
	}
         fahrenheit_to_cels(C);
	system("pause");
	return 0;
}