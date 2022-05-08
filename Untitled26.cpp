#include<iostream.h>

void nhap(float a[],int &n)
{
	cout<<"Nhap so phan tu cua mang:";cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"a["<<i<<"]:";
		cin>>a[i];
		
	}
}void xuat(float a[],int n,int d=0)
{
	for(int i=1;i<=n;i++)
	{for(int j=i+1;j<=n;j++)
	{
		if(a[i]<a[j])
		{
			float tg=a[i];
			a[i]=a[j];
			a[j]=tg;
		}
	}
		
	}cout<<"Sap xep giam gian"<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<"  ";
	
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]<0)
		{
			d++;
		}
	}cout<<"\nso phan tu am la:"<<d<<endl;

}
int main()
{
	float a[100];
	int n;
	nhap(a,n);
	xuat(a,n);
}