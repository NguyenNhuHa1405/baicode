#include<iostream.h>
int main(){
	int a[10];
	int n, s=0;
	cout<<"Nhap so phan n: ";
	cin>>n;
    cout<<"Nhap cac phan tu cho mang "<<endl;  
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}cout<<"In ra cac phan tu vua nhap"<<endl;
    for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
		s+=a[i];
		
	}cout<<"\nTong="<<s<<endl;
    for(int i = 0; i < n; i++){
    	if(a[i]%2==0){
	    	cout<<"so chan "<<a[i]<<endl;
	    if(a[i]%2==1){
    		cout<<"so le " <<a[i]<<endl;                		
    }                  
		}
	}
}