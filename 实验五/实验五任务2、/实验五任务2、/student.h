#pragma once
#include<iostream>
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_vaule()
	{
		cout << "�����ţ�";
		cin >> num;
		cout << "����������";
		cin >> name;
		cout << "�����Ա�";
		cin >> sex;
	
	}
private:
	int num;
	char name[20];
	char sex;
};