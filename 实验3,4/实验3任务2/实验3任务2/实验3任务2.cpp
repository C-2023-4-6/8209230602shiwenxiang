#include<iostream>
using namespace std;
extern bool x=true;
bool is_prime(int num)
{
	int arr[200];
	for (int i = 0; i < 200;){
		
		for (int q = 0; q < num - 2; q++){
			int p = 2;
			if ((num % p) != 0){
				p++;
			}
			else{
				x = false;
				num += 1;
			}
		}
		if (x = true){
			arr[i] = num;
			num += 1;
			i++;
		}
	}
	for (int i = 0; i < 200; i++){
		cout << i << " ";
		if (((i + 1) % 10) == 0){
			cout << endl;
		}
	}
	return true;
}
int main(){
	int num = 2;
	is_prime(num);
	system("pause");
	return 0;
}