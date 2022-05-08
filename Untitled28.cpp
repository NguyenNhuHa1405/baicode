#include<iostream.h>

void giaithua(int &n,float &h)
{
	cout<<"Nhap so phan tu n:";cin>>n;
	for(int i=1;i<=n;i++)
	{
		h*=i;
	}cout<<"Giai thua cua "<<n<<" la:"<<h<<endl;
}
int tong(float h,float s)
{
   s+=1/(h);
   cout<<"tong:"<<s<<endl;
}
int main()
{
	int n;
	
	float s=0,h=1;
	giaithua(n,h);
	tong(s,h);
}