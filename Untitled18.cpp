#include<iostream.h>
int main(){
	int m, n ,p;
	cout<<"Nhap So Tien Ban Dau (VND):";cin>>m;
	cout<<"Lai Suat(%):";cin>>n;
	cout<<"Thoi Gian Gui Tien(Ngay):";cin>>p;
	cout<<"\nSo Tien Ban Dau:"<<m<<" VND"<<endl;
	cout<<"Lai Suat:"<<n<<" %"<<endl;
	cout<<"Thoi Gian Gui Tien:"<<p<<" Ngay"<<endl;

	int s=(n*(m/100)*p);
	cout<<"\nSo tien lai ma ngan hang phai tra la="<<s<<" VND"<<endl;
}