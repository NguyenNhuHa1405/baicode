#include<iostream.h>

int main()
{
	float x,y;
	char phep_tinh;
	cout<<"X= ";cin>>x;
	cout<<"Y= ";cin>>y;
	cout<<"Phep tinh can tinh: ";cin>>phep_tinh;
	switch(phep_tinh)
	{
		case '+':cout<<"Tong cua x va y: "<<x+y<<endl;
		break;
		case '-':cout<<"Hieu cua x va y: "<<x+y<<endl;
		break;
		case '*':cout<<"Tich cua x va y: "<<x*y<<endl;
		break;
		case '/':cout<<"Thuong cua x va y: "<<x/y<<endl;
		break;
	}
	return 0;
}