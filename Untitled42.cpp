#include<iostream.h>

int main()
{
	int a, b, c;
	cout<<"Nhap canh thu nhat: ";cin>>a;
	cout<<"Nhap canh; thu hai: ";cin>>b;
	cout<<"Nhap canh thu ba: ";cin>>c;
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	{
		if((a=b)&&(b=c))
		{
			cout<<"La canh cua tam giac deu!"<<endl;
		}else
		{
			if((a=b)||(a=c)||(b=c))
			{
				cout<<"la canh cua tam giac can!"<<endl;
			}else
			{
				if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b))
				{
					cout<<"La tam giac vuong!"<<endl;
				}else
				{
					cout<<"La tam giac thuong!"<<endl;
				}
			}
		}
		
	}else
	{
		cout<<"Khong phai la 3 canh cua tam giac!"<<endl;
	}
}