#include<iostream>
using namespace std;
int main()
{
	
	bool arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = false;
	}
	for (int day = 0; day < 100; day++)
	{

			for (int guizi = day; guizi < 100;)
			{
				if (arr[guizi])
					arr[guizi] = false;
				else
					arr[guizi] = true;
				guizi+= day+1;
			}
		
	}
	for (int i = 0; i < 100; i++)
	{
		if (arr[i])
		

			cout << i + 1 << " ";
	}
	system("pause");
	return 0;
}