#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	char letter[26];
	for(int i=0;i<26;i++)
	{
		letter[i] = static_cast<char>(i + 'a');
	}
	for (int p = 0; p < 99; p++)
	{
		for (int j = 0; j < 26; j++)
		{
				if (s[p] == letter[j])
				{
					counts[j] =counts[j]+ 1;
				}
		}
	}
}
int main()
{
	char s[99];
	cout << "Enter a string:";
	cin.getline(s, 99);
	int counts[26];
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if(counts[i]!=0)
		cout << static_cast<char>(i + 'a') << ":" << counts[i] <<"  "<<"times" << endl;
	}
	return 0;

}