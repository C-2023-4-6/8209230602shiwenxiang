#include<iostream>
using namespace std;
class Time           
{
	private:           
		int hour;
	int minute;
	int sec;
	public:
		void setHour()
		{
			cin >> hour;
		}
		int getHour()
		{
			return hour;
		}
		void setMinute()
		{
			cin >> minute;
		}
		int getMinute()
		{
			return minute;
		}
		void setSec()
		{
			cin >> sec;
		}
		int getSec()
		{
			return sec;
		}
};
int main()
{
	Time t1;
	t1.setHour();
	t1.setMinute();
	t1.setSec();
	cout << t1.getHour() << ":" << t1.getMinute() << ":" << t1.getSec() << endl;
	return 0;
}