#include<iostream>
#include"mytemperature.h"
using namespace std;
double celsius_to_fah(double cel)
{
	cin >> cel;
	double fah;
	fah = (cel - 32) / 1.8;
	cout << fah << endl;
	return fah;
}
double fahrenheit_to_cels(double fah)
{
	cin >> fah;
	double cel;
	cel = 1.8 * fah + 32;
	cout << cel << endl;
	return cel;
}