#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void nhap(int a[],int &n,int &d,int &s, int &x){
	
	
	do{
		cout<<"Nhap n:";cin>>n;
		if(n<1||n>=100){
		
			
			cout<<"Vui Long Nhap Lai N"<<endl;
		}
	}while(n<1||n>=100);
	
	for(int i=1;i<=n;i++){
		cout<<"a["<<i<<"]:";cin>>a[i];}
}
    void Bai1(int a[],int n,int d,int s,int x){

		//Bai 1
	cout<<"Bai 1"<<endl;
    cout<<"A."<<endl;
    cout<<"Xuat Mang ra ngoai man hinh"<<endl;
	  for(int i=1;i<=n;i++){
		cout<<"a["<<i<<"]:"<<a[i]<<"  ";}
		cout<<"\nB."<<endl;
for(int i=1;i<=n;i++){

		if(a[i]%2==0||a[i]>0){
		
			s+=a[i];
			d++;
		}
	
}
cout<<"Trug Binh cong cua cac so chan trong mang:"<<(float)s/d<<endl;
	cout<<"C."<<endl;
	for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]<a[j]){
					int ha=a[i];
					a[i]=a[j];
					a[j]=ha;
				}
			}
		}cout<<"Mang Khi Sap Xep Giam Dan:"<<endl;
		for(int i=1;i<=n;i++){
			cout<<a[i]<<"   ";
		}cin.ignore();
    }
void Bai2(int a[],int n,int d,int s,int x){
	//Bai 2
	cout<<"\nBai 2"<<endl;
	cout<<"A."<<endl;
	cout<<"Xuat Mang Ra Ngoai Man Hinh:"<<endl;
	for(int i=1;i<=n;i++){
		cout<<"a["<<i<<"]:"<<a[i]<<"  ";
	}cout<<"\nB."<<endl;
	cout<<"Cac Phan Tu Am Trong Mang:"<<endl;
	d=0;
	for(int i=1;i<=n;i++){
		if(a[i]<0){
			cout<<"a["<<i<<"]:"<<a[i]<<"  ";
			
		d++;
		}
			
		
	}	cout<<"\nMang Co "<<d<<" Gia Tri Am"<<endl;
	cout<<"C."<<endl;
	for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]>a[j]){
					int ha=a[i];
					a[i]=a[j];
					a[j]=ha;
				}
			}
		}cout<<"Mang Khi Sap Xep Tang Dan:"<<endl;
		for(int i=1;i<=n;i++){
			cout<<a[i]<<"   ";
		}
}
    void Bai3(int a[],int n,int d,int s,int x){
    	//Bai 3
	cout<<"\nBai 3"<<endl;
	cout<<"A."<<endl;
    cout<<"Xuat Mang ra ngoai man hinh"<<endl;
	  for(int i=1;i<=n;i++){
		cout<<"a["<<i<<"]:"<<a[i]<<"  ";}
		cout<<"\nB."<<endl;
		cout<<"Cac so chinh phuong la:"<<endl;
		for(int i=1;i<=n;i++){
			if(int (sqrt(a[i]))==sqrt(a[i])){
			cout<<"a["<<i<<"]:"<<a[i]<<"  ";
			}
		}cout<<"\nC."<<endl;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]>a[j]){
					int ha=a[i];
					a[i]=a[j];
					a[j]=ha;
				}
			}
		}cout<<"Mang Khi Sap Xep Tang Dan:"<<endl;
		for(int i=1;i<=n;i++){
			cout<<a[i]<<"   ";
		}
    }
	
void Bai4(int a[],int n,int d,int s,int x){
	cout<<"\nBai 4"<<endl;
      cout<<"A."<<endl;
      cout<<"Xuat Mang ra ngoai man hinh"<<endl;
	  for(int i=1;i<=n;i++){
		cout<<"a["<<i<<"]:"<<a[i]<<"  ";}
		cout<<"\nB."<<endl;
			for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]<a[j]){
					int ha=a[i];
					a[i]=a[j];
					a[j]=ha;
				}
			}
		}cout<<"Mang Khi Sap Xep Giam Dan:"<<endl;
		for(int i=1;i<=n;i++){
			cout<<a[i]<<"   ";
		}cout<<"\nC."<<endl;
		d=0;
		cout<<"Nhap x:";cin>>x;
			
		for(int i=1;i<=n;i++){
			if(a[i]<x){
				for(int j=n+1;j>=i;j--){
					a[j]=a[j-1];
				}a[i]=x;
				break;
			}else{
				a[n+1]=x;
			}if(a[i]==x){
				d++;
			}
			
			}for(int i=1;i<=n+1;i++){
				cout<<a[i]<<"  ";
		
			}
		
		if(d>0){
			cout<<"\nTim Thay "<<d<<" Phan Tu"<<endl;
		}	else{
			cout<<"\nKhong Tim Thay Phan Tu Nao Trung Voi x "<<endl;
		}
			
    
}
 


int main(){
	int n,d=0,s=0,x;
	int a[100];

	nhap(a,n,d,s,x);
	Bai1(a,n,d,s,x);
	Bai2(a,n,d,s,x);
	Bai3(a,n,d,s,x);
	Bai4(a,n,d,s,x);
}