#include<iostream.h>

void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i+1<<"]:";cin>>a[i];
	}
}
void bai1(int a[],int n)
{
	int min=a[0],k=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<a[0])
		min=a[i];
		k=i;
	}cout<<"Gia tri nho nhat cua mang :"<<min<<" tai vi tri "<<k<<endl;
}
void bai2(int a[],int n)
{
	int s=0,  d=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			d++;
			s+=a[i];
		}
	}if(d==0)
	{
		cout<<"Mang khong co phan tu am"<<endl;
	}else{
		cout<<"Tong trung binh cong cac phan tu am cua mang la:"<<(float)s/d<<endl;
	}
}
void bai3(int a[],int n)
{
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			d++;
		}
		
	}cout<<"Mang co "<<d<<" phan tu am"<<endl;
}
void bai4(int a[],int n)
{   cout<<"Sap xep tang dan theo chan am :";
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++)
		{		
				if(a[i]>a[j])
				{
					int tg=a[i];
					a[i]=a[j];
					a[j]=tg;
				}
			
		}
	}for(int i=0;i<n;i++)
	{
		if(a[i]%2==0&&a[i]<0)
		{
			cout<<a[i]<<"  ";
		}
	}
	cout<<"\nSap xep giam dan theo chan am :";
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++)
		{		
				if(a[i]<a[j])
				{
					int tg=a[i];
					a[i]=a[j];
					a[j]=tg;
				}
			
		}
	}for(int i=0;i<n;i++)
	{
		if(a[i]%2==0&&a[i]<0)
		{
			cout<<a[i]<<"  ";
		}
	}
	cout<<"\nSap xep tang dan theo le duong :";
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++)
		{		
				if(a[i]>a[j])
				{
					int tg=a[i];
					a[i]=a[j];
					a[j]=tg;
				}
			
		}
	}for(int i=0;i<n;i++)
	{
		if(a[i]%2 !=0&&a[i]>0)
		{
			cout<<a[i]<<"  ";
		}
	}
	cout<<"\nSap xep giam dan theo le duong :";
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++)
		{		
				if(a[i]<a[j])
				{
					int tg=a[i];
					a[i]=a[j];
					a[j]=tg;
				}
			
		}
	}for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0&&a[i]>0)
		{
			cout<<a[i]<<"  ";
		}
	}
}
int main()
{
	int n;
	cout<<"Nhap so phan tu cua mang:";
	do
	{  
	cin>>n;
		if(n<0||n>100)
		{
			cout<<"Nhap lai "<<endl;
		}
	}while(n<0||n>100);
	int a[100];
	nhap(a,n);
	bai1(a,n);
	bai2(a,n);
	bai3(a,n);
	cout<<"\n";
	bai4(a,n);
}