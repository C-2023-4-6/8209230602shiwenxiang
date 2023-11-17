#include<iostream>
using namespace std;
int main()
{
	char ch;
	int zimu = 0, shuzi = 0, kongge = 0, qita = 0;
	//ch = getchar();这是错误的
	while ((ch = getchar()) != '\n') {
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			zimu++;
		else if (ch >= '0' && ch <= '9')
			shuzi++;
		else if (ch == ' ')
			kongge++;
		else
			qita++;
	}
	printf("字母：%d\n数字：%d\n空格：%d\n其他：%d\n", zimu, shuzi, kongge, qita);
	system("pause");
	return 0;
}