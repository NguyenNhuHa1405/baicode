#include<iostream.h>
using namespace std;
int main(){
	double x, y;
	do{
		cout<<"nhap x: ";
		cin>>x;
		if(x<0){
			cout<<"chua dung vui long nhap lai "<<endl;
		}
	}
	while(x<0);
	do{
		cout<<"nhap y: ";
		cin>>y;
	}
	while(y==0);
	cout<<"X : "<<x<<endl;
	cout<<"Y : "<<y<<endl;
	
	
	double tuoi;
	cout<<"nhap tuoi cua ban: ";
	cin>>tuoi;
	if(tuoi<6){
		cout<<"hoc sinh mam non"<<endl;
	}
	else if(tuoi<11){
		cout<<"hoc sinh tieu hoc"<<endl;
	}
	else if(tuoi<15){
		cout<<"hoc sinh trung hoc"<<endl;
	}
	else if(tuoi<18){
		cout<<"hoc sinh pho thong"<<endl;
	}
	else if(tuoi<23){
		cout<<"sinh vien"<<endl;
	}
	double a, b;
	cout<<"nhap a: ";
	cin>>a;
	cout<<"nhap b: ";
	cin>>b;
	cout<<"thuong a va b: "<<a/b<<endl;
}
		