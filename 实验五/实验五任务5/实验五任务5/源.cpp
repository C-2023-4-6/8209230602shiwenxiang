#include<iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
	
public:
	point()
	{
		int x_ = 60;
		int y_ = 80;
		x = x_;
		y = y_;
	}
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	point duide;
	int i;
	int j;
	cout << "����i��";
	cin >> i;
	cout << "����j��";
	cin >> j;
	duide.setPoint(i,j);
	duide.display();
	return 0;
}