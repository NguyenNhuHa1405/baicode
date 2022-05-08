#include<iostream.h>
int main(){
	 int a[10];
	 int s=0, n, x, t=0;
	 cout<<"Nhap n: ";
	 cin>>n;
	 cout<<"Nhap x: ";
	 cin>>x;
	 for(int i=0;i<n;i++){
 		cout<<"a["<<i<<"]=";
 		cin>>a[i];
 		if(a[i]%2==0){
		 	s+=a[i];
		 }if(a[i]==x){
 			t++;
 		}
 	}cout<<"Tong so chan="<<s<<endl;
 	cout<<"cac so trung voi x "<<t<<endl;
 
	 
}