#include<iostream>
using namespace std;
int* f()
{
	int x = 4;
	int* list=new int[x];
	for (int i = 0; i < x;i++)
	{
		list[i] = i + 1;
	}

	return list;
	delete[]list;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;

}