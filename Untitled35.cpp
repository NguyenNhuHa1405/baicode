#include<iostream.h>

int main()
{
	int a, b, c, max, min;
	cout<<"Nhap so thu nhat: ";cin>>a;
	cout<<"Nhap so thu hai: ";cin>>b;
	cout<<"Nhap so thu ba: ";cin>>c;
	if(a>b)
	{
		if(b>c)
		{
			max=a;min=c;
		}else
		{
            if(a>c)
            {
            	max=a;min=b;
            }else
            {
            	max=c;min=b;
            }
		}
	}else
	{
		if(a>c)
		{
			max=b;min=c;
		}else
		{
		    if(b>c)
			{
				max=b;min=a;
			}else
			{
				max=c;min=a;
			}	
		}
	}
	cout<<"So lon nhat: "<<max<<endl;
	cout<<"So nho nhat: "<<min<<endl;
    return 0;	
}