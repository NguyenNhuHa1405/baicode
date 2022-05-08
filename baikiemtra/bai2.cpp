#include<iostream.h>
#include<math.h>
void nhap(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << "x["<< i + 1 <<"] : ";
		cin >> a[i];
	}
}
void xuat(int a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << "  ";
	}
	cout << endl;
}
void sochinhphuong(int a[], int n){
	int x;
	int d = 0;
	for(int i = 0; i < n; i++){
		x = (int) sqrt(a[i]);
		if(x * x == a[i]){
		d++;
        }
	}
	cout << "\nCo tat ca " << d << " so chinh phuong !" << endl;
	cout << "\nCac so chinh phuong do la : ";
	for(int i = 0; i < n; i++){
		x = (int) sqrt(a[i]);
		if(x * x == a[i]){
		cout << a[i] << "  ";
        }
	}
	cout << endl;
}

void kiem_tra_so_chan(int a[], int n){
	for(int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if(a[i] % 2 == 0, a[i] > a[j]){
				int d =a[i];
				a[i] = a[j];
				a[j] = d;
			}
		}
	}
	cout << "\nSo chan tang dan : ";
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			cout << a[i] << "  ";
		}
	}
	cout << endl;
}
void kiem_tra_so_le(int a[], int n){
	for (int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] % 2 != 0, a[i] < a[j]){
				int d = a[i];
				a[i] = a[j];
				a[j] = d;
			}
		}
	}
	cout << "\nSo le giam dan : ";
	for(int i = 0; i < n; i++){
		if(a[i] % 2 != 0){
			cout << a[i] << "  ";
		}
	}
	cout << endl;
}
int main(){
	int n; cin >> n;
	int x[n];
	nhap(x, n);
	xuat(x, n);
	sochinhphuong(x, n);
	kiem_tra_so_chan(x, n);
	kiem_tra_so_le(x, n);
	return 0;
}