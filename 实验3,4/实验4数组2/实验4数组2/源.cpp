#include<iostream>
using namespace std;
int main()
{
	double arr[10];
	cout << "输入你的数组:";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	for (int n = 0; n <9 ; n++)
	{
		for (int i = 0; i < (9-n); i++)
		{
			if (arr[i] > arr[i+1])
			{
				double temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		
		}
	}
	cout << "数组排完顺序：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}