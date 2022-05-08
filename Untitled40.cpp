#include<iostream.h>

int main()
{
	float a, b;
	cout<<"Nhap so thu nhat: ";cin>>a;
	cout<<"Nhap so thu hai: ";cin>>b;
	if(a==0)
	{
		if(b==0)
		{
			cout<<"Phuong trinh vo so nghiem!"<<endl;
		}else
		{
			cout<<"Phuong trinh vo nghiem!"<<endl;
		}
	}else
	{
		cout<<"Nghiem cua phuong trinh la: "<<-b/a<<endl;
	}
	return 0;
}