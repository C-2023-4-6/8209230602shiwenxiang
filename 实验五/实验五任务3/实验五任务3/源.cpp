#include<iostream>
using namespace std;
class ������
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
		cout << "���볤�������:";
		cin >> num;
		for (int i = 0; i < num; i++)
		{
			cout << "�����" << i + 1 << "��������ĳ�:";
			cin >> length[i];
			cout << "�����" << i + 1 << "��������ĸ�:";
			cin >> height[i];
			cout << "�����" << i + 1 << "��������Ŀ�:";
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
			cout << "��" << i + 1 << "������������Ϊ��";
			cout << volume[i] << endl;
		}
	}

};
int main(){
	������ shujuzu;
	shujuzu.setput();
	shujuzu.tiji();
	shujuzu.getvolume();
	system("pause");
	return 0;
}