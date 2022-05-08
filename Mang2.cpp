#include<iostream.h>

int main(){
	double d[10];
	double n;
	cout<<"Nhap n ";
	cin>>n;

	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>d[i];
	}cout<<"In ra theo chieu nguoc lai "<<endl;
	for(int i=n-1;i>=0;i--){
    cout<<"d["<<i<<"}"<<d[i]<<endl;;
	}cout<<"Cac so am la"<<endl;
	for(int i=0;i<n;i++){
		if(d[i]<0){
			cout<<"d["<<i<<"]"<<d[i]<<endl;
		}
	}

	
}