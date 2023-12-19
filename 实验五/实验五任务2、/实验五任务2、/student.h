#pragma once
#include<iostream>
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_vaule()
	{
		cout << "输入编号：";
		cin >> num;
		cout << "输入姓名：";
		cin >> name;
		cout << "输入性别：";
		cin >> sex;
	
	}
private:
	int num;
	char name[20];
	char sex;
};