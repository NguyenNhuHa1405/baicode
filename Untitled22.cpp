#include <iostream.h>
#include <conio.h> 
using namespace std;	
int main()

{ 	int 	n, s=0;
  	int 	*ptr;
	cout<<"Nhap so phan tu: ";cin>>n;
  	ptr = new	int;  
	if (ptr != NULL) 
  	{ 	for(int i = 0 ; i<n ; i++){
	  	cout<<"*(ptr+"<<i+1<<") =";
	  	cin>>*(ptr+i);
	  cout<<"Dia Chi :"<<(ptr+i)<<endl;
	  }for(int i=0; i<n;i++){
  	   s+=*(ptr+i);
  	}cout<<"Tong="<<s<<endl;
  	
  	}
  
  	int dem=0;
  	for(int i=0;i<n;i++){
	  	if(*(ptr+i)>0){
	  	
	  	dem++;
	  	}
	  }cout<<"SO Phan TU Duong:"<<dem<<endl;
	  
	  bool timthay=false;
	  int x;
	  cout<<"Nhap X:";cin>>x;
	  for(int i=0;i<n;i++){
  		if(*(ptr+i)==x){
		  	timthay=true;
		  	break;
		  }
		  	if(timthay){
  			cout<<"Tong day vua nhap co so trung voi X"<<endl;
  		}else{
		  	cout<<"Trong day khong co so nao trung voi X"<<endl;
		  }
  	}
}
