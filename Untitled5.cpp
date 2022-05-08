#include<iostream.h>

int main(){
	double a, b;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	double max, min;
	max=(a>=b)?a:b;
	min=(a>=b)?b:a;
	cout<<"Gia tri lon nhat la: "<<max<<endl;
	cout<<"Gia tri nho nhat la: "<<min<<endl;
	
}