#include<iostream>
using namespace std;
int main()
{
	char ch;
	int zimu = 0, shuzi = 0, kongge = 0, qita = 0;
	//ch = getchar();���Ǵ����
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
	printf("��ĸ��%d\n���֣�%d\n�ո�%d\n������%d\n", zimu, shuzi, kongge, qita);
	system("pause");
	return 0;
}