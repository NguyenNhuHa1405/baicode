#include<iostream.h>

int main()
{
	int lua_chon;
	cout<<"1. Talk"<<endl;
	cout<<"2. Eat"<<endl;
	cout<<"3. Play"<<endl;
	cout<<"4. Sleep"<<endl;
	cout<<"Nhap lua chon cua ban: ";cin>>lua_chon;
	switch(lua_chon)
	{
		case 1:cout<<"ban da chon Talk"<<endl;
		break;
		case 2:cout<<"ban da chon Eat"<<endl;
		break;
		case 3:cout<<"Ban da chon Play"<<endl;
		break;
		case 4:cout<<"Ban da chon Sleep"<<endl;
		break;
		default:cout<<"Khong the thuc hien lua chhon!"<<endl;
		break;
	}
	return 0;
}