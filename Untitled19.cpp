#include<iostream.h>

int main(){
	int thuesuat;
	double luong, thuethunhap;
	cout<<"Nhap So Tien Luong(Trieu VND): ";cin>>luong;
	if(luong>15){
		thuethunhap=luong*30/100;
		thuesuat=30;
	}else if(luong>=7){
		thuethunhap=luong*20/100;
		thuesuat=20;
	}else{
		thuethunhap=luong*10/100;
		thuesuat=10;
	}
	double luongrong=luong-thuethunhap;
	cout<<"Luong La: "<<luong<<" Trieu VND"<<endl;
	cout<<"Thue Thu Nhap Cua "<<luong<<" Trieu VND Voi Muc Thue Suat "<<thuesuat<<"% La: "<<thuethunhap<<" Trieu VND"<<endl;
	cout<<"So Tien Luong Cua Ban Than La: "<<luongrong<<"Trieu VND"<<endl;
}