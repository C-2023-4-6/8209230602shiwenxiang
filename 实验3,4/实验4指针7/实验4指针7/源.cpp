#include<iostream>
using namespace std;
void y(int *list, int a)
{
	for (int n = 0; n < (a-1); n++)
	{
		for (int i = 0; i < (a-1- n); i++)
		{
			if (list[i] > list[i + 1])
			{
				int temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
			}

		}
	}
	for (int i = 0; i < a; i++)
	{
		cout << list[i] << " ";
	}
}
int main() 
{
	int a;
	cin >> a;
	int* list = new int[a];
	cout << "输入你的数组:";
	for (int i = 0; i < a; i++)
	{
		cin >> list[i];
	}
	y(list, a);
	return 0;
}

