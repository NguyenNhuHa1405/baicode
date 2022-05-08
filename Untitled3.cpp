// diem bai kiem ta: a, diem giua ky: b, diem cuoi ky: c
	// diem trung binh: d
#include<iostream.h>
#include<math.h>
int main(){
   float a, b, c;
	do{
		cout<<" Nhap diem bai kiem tra cua ban: ";
	cin>>a;
	}while(a<0,a>10);
	
	do{
		cout<<"\n Nhap diem giua ky cua ban: ";
	cin>>b;
	}while(b<0,b>10);
	 
	do{
		cout<<"\n Nhap diem cuoi ky cua ban: ";
	cin>>c;
	}while(c<0,c>10);
	float d=(a+b+c)/3;
	cout<<"\n Diem trung binh cua ban: "<<d<<endl;
	
	if(d>=9.0){
		cout<<"\n Ban dat hang A \n"<<endl;
	}else if(d>=7.0){
		cout<<"\n Ban dat hang B \n"<<endl;
	}else if(d>=5.0){
		cout<<"\n Ban dat hang C \n"<<endl;;
	}else{
		cout<<"\n Ban dat hang F \n"<<endl;
	}	
}
