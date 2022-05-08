#include<iostream.h>
#include<math.h>
void tong(int a[], int n, int k){
	float s = 0;
	s = sqrt(k);
	for(int i = 0; i < n - 1; i++){
		s = sqrt(k + s);
	}
	cout << s << endl;
}
int main(){
	int n;
	cout << "Nhap so can bac : ";
    cin >> n;
	int k;
	cout << "Nhap so can tinh : "; 
	cin >> k;
	int x[n];
	cout << "Ket qua : ";
	tong(x, n, k);
	return 0;
}