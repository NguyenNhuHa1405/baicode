#include<iostream.h>
#include<math.h>
int main(){
	cout<<"Bai 1";                              
	int n1;
	double s=0, t=1;
	do{
		cout<<"\nNhap n: ";
	    cin>>n1;
	    if(n1<1){
    		cout<<"Vui long nhap lai n"<<endl;     //BAI 1
    	}
	}while(n1<1);
		for(int i=1;i<=n1;i++){
		s+=i;
	}cout<<"\nTong S= "<<s<<endl;
	
		cout<<"Bai 2";
	int  n2;
	s=0;
	do{
		cout<<"\nNhap n: ";
		cin>>n2;
		if(n2<1){
			cout<<"Vui long nhap lai n"<<endl;      //BAI 2
		}
	}while(n2<1);
	for(int i=1;i<=n2;i++){
		s+=pow(i,2);
	}cout<<"Tong S= "<<s<<endl;

     cout<<"\nBai 3";
	int n3;
	s=0;
	do{
		cout<<"\nNhap n: ";
		cin>>n3;
		if(n3<1){
			cout<<"Vui long nhap lai n"<<endl;      //BAI 3
		}
	}while(n3<1);
	for(float i=1;i<=n3;i++){
		s+= 1/i;
	}cout<<"Tong s= "<<s<<endl;
	
	cout<<"\nBai 4";
	int n4;
	s=0;
	do{
		cout<<" Nhap n: ";
		cin>>n4;
		if(n4<1){
			cout<<"Vui long nhap lai n"<<endl;      //Bai4
		}
	}while(n4<1);
	for(float i=1;i<=n4;i++){
		s+=1/(2*i);
	}cout<<"Tong S="<<s<<endl;
	
	cout<<"\nBai 5";
	int n5;
	s=0;
	do{
		cout<<"Nhap n: ";
		cin>>n5;
		if(n5<1){
			cout<<"Vui long nhap lai n ";    //Bai 5
		}
	}while(n5<1);
	for(float i=1;i<=n5;i++){
		s+=1/(2*i+1);
	}cout<<"Tong S= "<<s<<endl;
	
	cout<<"Bii 10";
	int n10, x;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap n: ";
	cin>>n10;
	for(int i=1;i<=n10;i++){
		t*=pow(x,i);
	}cout<<"T="<<t<<endl;


}