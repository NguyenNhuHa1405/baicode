#include<iostream.h>
int main(){
	/*int a=1;
	int *ptr_e=NULL;
    ptr_e=&a;
    cout<<ptr_e<<endl;
    *ptr_e=100;
    cout<<*ptr_e<<endl;
    //lam v?i kieu float
    
    float d=7.5;
    float *ptr_d=NULL;
    ptr_d=&d;
    cout<<"Dia Chi Cua D "<<ptr_d<<endl;
    *ptr_d=*ptr_d*9;
    cout<<"gia tri cua d "<<d<<endl;*/
    
    float x=9.5, y=2.5;
    float *ptr=NULL;
    ptr=&x;
    cout<<"Dia Chi Cua X:"<<ptr<<endl;
    x*=2;
    *ptr*=2;
    cout<<"Gia Tri Cua X:"<<x<<endl;
    ptr=&y;
    cout<<"Dia Chi Cua Y:"<<ptr<<endl;
    y*=2;
    *ptr*=2;
    cout<<"Gia Tri Cua Y:"<<y<<endl;

}
