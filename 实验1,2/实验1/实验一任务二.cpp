#include<iostream>
using namespace std;
int main()
{
	//����2
	cout << "ʹ�ñ�ʶ����������Բ���ʲ���Բ׶���" << endl;
	double r;
	double h;
	cout << "Բ׶�׵İ뾶:" << endl;
	cin >> r;
	cout << "Բ׶�ĸ�:" << endl;
	cin >> h;
	cout << "Բ׶������ǣ�" << endl;
	double V;
	V = r * r * acos(-1) * h / 6;
	cout << V << endl;
	system("pause");
	return 0;
}