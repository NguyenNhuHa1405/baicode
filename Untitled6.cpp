#include<iostream.h>
#include<math.h> 
int main(){
	int n, m=0,s=0;
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			
		
			m+=i;
		}else{
			
			s+=i;
		}
}		cout<<"Tong tat ca so chan: "<<m<<endl;
	cout<<"Tong tat ca so le: "<<s<<endl;
}