#include<iostream.h>
int main(){
	int n;
	
	do{
		cout<<"Nhap N tu 1 den 7:";
		cin>>n;
		if(n<1&&n>7){
			cout<<"Vui Long Nhap Lai"<<endl;
		}
	}while(n<1&&n>7);
		if(n==1){
			cout<<"Chu Nhat"<<endl;
		}else if(n==2){
			cout<<"Thu Hai"<<endl;
		}else if(n==3){
			cout<<"Thu Ba"<<endl;
		}else if(n==4){
			cout<<"Thu Tu"<<endl;
		}else if(n==5){
			cout<<"Thu Nam"<<endl;
		}else if(n==6){
			cout<<"Thu Sau"<<endl;
		}else{
			cout<<"Thu Bay"<<endl;
	}
	
}