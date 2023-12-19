#include<iostream>
using namespace std;
class 长方体
{
private:
	int* length=new int[num];
	int* width = new int[num];
	int* height = new int[num];
	int num;
	int* volume = new int[num];
public:
	void setput()
	{
		cout << "输入长方体个数:";
		cin >> num;
		for (int i = 0; i < num; i++)
		{
			cout << "输入第" << i + 1 << "个长方体的长:";
			cin >> length[i];
			cout << "输入第" << i + 1 << "个长方体的高:";
			cin >> height[i];
			cout << "输入第" << i + 1 << "个长方体的宽:";
			cin >> width[i];
		}
	}
	void tiji(){
		for (int i = 0; i < num; i++)
		{
			volume[i] = ((length[i] *height[i]) * width[i]);
		}
	}
	void getvolume(){
		for (int i = 0; i < num; i++)
		{
			cout << "第" << i + 1 << "个长方体的体积为：";
			cout << volume[i] << endl;
		}
	}

};
int main(){
	长方体 shujuzu;
	shujuzu.setput();
	shujuzu.tiji();
	shujuzu.getvolume();
	system("pause");
	return 0;
}