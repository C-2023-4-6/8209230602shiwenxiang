#include<iostream>
#include"mytemperature.h"
using namespace std;

int main()
{
	cout << "����1�������϶����϶�ת��������0���л��϶������϶�ת��" << endl;
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