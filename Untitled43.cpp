#include<iostream.h>

int main()
{
	char ky_tu;
	cout<<"Nhap ky tu: ";cin>>ky_tu;
	switch(ky_tu)
	{
		case 'a':
		case 'A':
		cout<<"Xin chao!"<<endl;
		break;
		case 'b':
		case 'B':
		cout<<"Hoan nghenh!"<<endl;
		break;
		default:
		cout<<"Xin loi!"<<endl;
		break;
	}
	return 0;
}