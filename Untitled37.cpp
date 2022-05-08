#include<iostream.h>

int main()
{
	int thang, nam;
	cout<<"Thang: ";cin>>thang;
	cout<<"Nam: ";cin>>nam;
	switch(thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
	    cout<<"Thang nay co 31 ngay"<<endl;
	    break;
	    case 4:
	    case 6:
	    case 9:
	    case 11:
	    cout<<"Thang nay co 30 ngay"<<endl;
	    break;
	    case 2:
	    if(nam%4==0&&nam%100!=0||nam%400==0)
	    {
    		cout<<"Thang nay co 29 ngay"<<endl;
    	}else
    	{
	    	cout<<"Thang nay co 28 ngay"<<endl;
	    }break;
	}
	return 0;
}