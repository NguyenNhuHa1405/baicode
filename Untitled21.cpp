#include<iostream.h>

int main(){
	int n, s=0;
	do{
		cout<<"Nhap N:";cin>>n;
		
	}while(n<0);
	int  a[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i+1<<"]:";cin>>a[i];
	}cout<<"In Ra Ngoai Man Hinh"<<endl;
		for(int i=0;i<n;i++){
		cout<<"a["<<i+1<<"]:"<<a[i]<<endl;
		s+=a[i];
	}cout<<"Tong s="<<s<<endl;
		

}