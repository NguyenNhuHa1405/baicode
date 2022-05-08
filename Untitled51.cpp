#include<iostream.h>
using namespace std;
int main(){
	float a;
	do{
		cin >> a;
		if(a <= 1 or a >= 2){
			cout << "Vui long nhap lai a!" << endl;
		}
	}while(a <= 1 or a >= 2);
	int i = 1;
	float s = 0;
	do{
		s += (float) 1 / i;
		i++;
	}while(s <= a);
	cout << "So n nho nhat la : " << i - 1 << endl;
	cout << "Tong s : " << s << endl;
	return 0;
}