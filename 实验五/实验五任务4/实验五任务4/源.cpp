#include<iostream>
using namespace std;
class Student
{
	friend void max(Student*);
public:
     Student(int i, int s) :id(i), score(s) {}

private:
	int id;
	int score;

};
void max(Student* p)
{
	Student* x = new Student(0, 0);
	int temp;
	temp = (p->score);
	for (int i = 0; i < 5; i++)
	{
		if (temp < (p + i)->score)
		{
			temp = (p + i)->score;
			x = (p + i);
		}
	}
	cout << "成绩最高者的学号为： " << x->id << endl;
}
int main()
{
	Student stu[5] = { Student(1001,96),Student(1002,82),Student(1003,69),Student(1004,98),Student(1005,100) };
	Student* p = stu;
	max(p);
	return 0;
}
