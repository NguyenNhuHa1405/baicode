#include<iostream.h>
#include<stdio.h>
#include<string.h>
int main(){
	int n,m,s=0;
	int a[100][100];
	cout<<"Nhap so hang:";cin>>n;
	cout<<"Nhap so cot:";cin>>m;
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++){
		cout<<"a["<<i<<"]["<<j<<"]";
		cin>>a[i][j];
	}cout<<"\nIn ra ngoai man hinh"<<endl;
	for(int i=0;i<n;i++){
	for(int j=0;j<m;j++)
	cout<<a[i][j]<<"\t";
	cout<<endl;		
	}int t=0;
     for(int i=0;i<n;i++)
     	for(int j=0;j<m;j++)
	     	s+=a[i][j];
			 cout<<"\nTong tat ca cac so="<<s<<endl;
 
     for(int i=0;i<n;i++)
     for(int j=0;j<m;j++)
	 	if(a[i][j]%2==0){
     	t+=a[i][j];
     }cout<<"\nTong cac so chan="<<t<<endl;
     
     cout<<"\nIn ra nguoc lai"<<endl;
     for(int i=n-1;i>=0;i--){
     	for(int j=m-1;j>=0;j--)
     	cout<<a[i][j]<<"\t";
     cout<<endl;
     }
       
}