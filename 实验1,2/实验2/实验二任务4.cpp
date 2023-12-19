#include<iostream>
using namespace std;
int main()
{
    //任务4
    char option;
    float num1, num2;
    cout << "请输入一个数字：" << endl;
    cin >> num1;
    cout << "请输入运算符：+、-、*、/、%：" << endl;
    cin >> option;
    cout << "请输入另一个数字：" << endl;
    cin >> num2;
    switch (option) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            cout << "错误：除数不能为零！" << endl;
        }
        else {
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        }
        break;
    case '%':
        if (num2 == 0) {
            cout << "错误：除数不能为零！" << endl;
        }
        else {
            cout << num1 << " % " << num2 << " = " << ((int)num1 % (int)num2);
        }
        break;
    default:
        cout << "错误：无效的运算符！" << endl;
        break;
    }
    return 0;
}