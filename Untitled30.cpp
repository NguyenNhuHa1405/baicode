#include<iostream.h>


/*void nhap(double a[],int n)
{
	cout<<"Nhap so phan tu:  ";
	do
	{
		cin>>n;
		if(n<=0)
		{
			cout<<"Nhap lai so phan tu"<<endl;
		}
	}while(n<=0);
	cout<<"Nhap cac phan tu: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void xuat(double a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int tg=a[i];
				a[i]=a[j];
				a[j]=tg;
			}
		}
	}
	cout<<"phan tu duoc sap xep giam dan: ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ; ";
	
	}
} 
int main()
{
	double a[100];	
	int n;
	nhap(a,n);
	xuat(a,n);
}*/



typedef struct
{
	int id;
	char ten[100];
	int soluong;
	int dongia;
}san_pham;

void nhap(san_pham sp[], int n)
{
	cout<<"Nhap so san pham: ";
	do
	{
		cin>>n;
		if(n<=0)
		{
			cout<<"nhap lai so luong san pham"<<endl;
		}
	}while(n<=0);
	for(int i=0;i<n;i++)
	{
		cout<<"======= SAN PHAM "<<i+1<<"========="<<endl;
		cout<<"ID san pham: ";cin>>sp[i].id;
		cout<<"Ten san pham: ";cin.ignore();cin.getline(sp[i].ten,100);
		cout<<"So luong san pham: ";cin>>sp[i].soluong;
		cout<<"Gia cua san pham: ";cin>>sp[i].dongia;
		
	}
}
void thamchieu(san_pham &a,san_pham &b)
{
	san_pham t=a;
	a=b;
	b=t;
}

void sapxep(san_pham sp[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(sp[i].soluong>sp[j].soluong)
			{
				thamchieu(sp[i],sp[j]);
			}
		}
	
	}
	for(int i=0;i<n;i++)
	{
		cout<<"ID san pham: "<<sp[i].id;
		cout<<"Ten san pham: "<<sp[i].ten;
		cout<<"So luong san pham: "<<sp[i].soluong;
		cout<<"Gia cua san pham: "<<sp[i].dongia<<endl;
	}
}
 
void in(san_pham sp[],int n)
{
		for(int i=0;i<n;i++)
	{
		cout<<"ID san pham: "<<sp[i].id;
		cout<<"Ten san pham: "<<sp[i].ten;
		cout<<"So luong san pham: "<<sp[i].soluong;
		cout<<"Gia cua san pham: "<<sp[i].dongia<<endl;
	}
}
int main()
{
	san_pham sp[100];
    int n;	
	nhap(sp,n);
	sapxep(sp,n);
	in(sp,n);
}