#include<iostream.h>

int main()
{
	float a, b, c, max, min;
	int lua_chon;
	cout<<"A= ";cin>>a;
	cout<<"B= ";cin>>b;
	cout<<"C= ";cin>>c;
	cout<<"\n1. Tinh tong a+b+c"<<endl;
	cout<<"2. Tinh tich a*b*c"<<endl;
	cout<<"3. Tim MAX"<<endl;
	cout<<"4. Tim MIN"<<endl;
	cout<<"\nNhap lua chon: ";cin>>lua_chon;
	switch(lua_chon)
	{
		case 1:cout<<"Tong a+b+c= "<<a+b+c<<endl;
		break;
		case 2:cout<<"Tich a*b*c= "<<a*b*c<<endl;
		break;
		case 3:max=a;
		if(max<b)
		{
			max=b;
		} if(max<c)
		{
			max=c;
		}cout<<"MAX= "<<max<<endl;
		break;
		case 4:min=a;
		if(min>b)
		{
			min=b;
		}if(min>c)
		{
			min=c;
		}cout<<"MIN= "<<min<<endl;
		break;
	}
	return 0;
}