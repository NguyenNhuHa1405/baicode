#include<iostream.h>

int main(){
	char n;
	cout<<"Con cho di chuyen bang may chan?"<<endl;
	cout<<"A. 1\nB. 2\nC. 3\nD. 4";
	cout<<"\nLua chon cua ban: ";
	cin>>n;
	switch(n){
		case'a':
		case'A':
		case'b':
		case'B':
		case'c':
		case'C':{
			cout<<"Rat tiec ban tra loi sai!"<<endl;break;
		}
		case'd':
		case'D':{
			cout<<"Chuc mung ban da tra loi dung!"<<endl;break;
		}
		default:cout<<"Lua chon cua ban khong hop le!"<<endl;break;
	}
}