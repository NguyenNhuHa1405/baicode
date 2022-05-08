#include<iostream.h>

void nhap(int a[][100], int &m, int &n)
{
	cout<<"Nhap so hang:";cin>>m;
	cout<<"Nhap so cot:";cin>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]:";
			cin>>a[i][j];
			
		}
	}for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++)
		{
			cout<<a[i][j]<<"  ";
		}cout<<"\n";
	}
}void xuat(int a[][100],int m, int n)
{
	int s=0;

	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++)
		{
			if(i==j)
			{
				s+=a[i][j];
			}
		}
	}cout<<"tong cac phan tu tren duong cheo chinh"<<s<<endl;
}
int main(){
	int a[100][100];
	int m,n;
	nhap(a,m,n);
	xuat(a,m,n);
}