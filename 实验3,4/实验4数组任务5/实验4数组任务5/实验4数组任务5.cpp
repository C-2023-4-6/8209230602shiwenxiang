#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int length1 = strlen(s1);
	int length2 = strlen(s2);
	bool x = false;
	for (int i = 0; i < length2; i++)
	{
		for (int j = 0; j < length1; j++)
		{
			if (s2[i] == s1[j])
			{
				x = true;
			}
			else
			{
				x = false;
				break;
			}
			//����������ѭ��
		}
		if (x == true)
		{
			cout << " indexOf(��welcome��, ��We invite you!��) is" << " " << i + 1 << endl;
			goto mark;
		}
		//i+1��Ϊ���±꣬���i+1��������ѭ��
	}
	if (x == false)
		//���-1��������ѭ��
	{
		cout << " indexOf(��welcome��, ��We invite you!��) is" << " " << "-1" << endl;
	}

mark:
	return 0;
}

int main()
{
	const int size1 = 999;
	char s1[size1];
	char s2[size1];
	cout << "Enter the first string:";
	cin.getline(s1, size1);
	cout << "Enter the second string:";
	cin.getline(s2, size1);
	indexof(s1, s2);
		system("pause");
		return 0;
}
