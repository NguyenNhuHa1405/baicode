#include<iostream.h>
int main(){
	int n, a[10];
	float s=0, t=0;
	cout<<"Nhap n=";
	cin>>n;
	for(int i=1;i<n;i++){
		cout<<"d["<<i<<"]";
		cin>>a[i];
	}for(double i=2;i<n;i+=2){
		if(a[i]%2==1){
			t++;
			s=(s+a[i])/t;
		}
	}cout<<"tong="<<s<<endl;
}