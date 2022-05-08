#include<iostream.h>
#include<iomanip>
#include<math.h>
using namespace std;

class sophuc
{
	private:
	int thuc, ao;
	public:
	friend istream &operator >>(istream &in, sophuc &a);
	friend ostream &operator <<(ostream &out, sophuc a );
	friend sophuc operator +(sophuc a,sophuc b);
	friend sophuc operator -(sophuc a, sophuc b);
};
istream &operator >>(istream &in, sophuc &a)
{
	in>>a.thuc>>a.ao;
	return in;
}
ostream &operator <<(ostream &out, sophuc a )
{
	out<<a.thuc<<" "<<a.ao;
	return out;
}
sophuc operator + (sophuc a, sophuc b)
{
	sophuc tong;
	tong.thuc=a.thuc+b.thuc;
	tong.ao=a.ao+b.ao;
	return tong;
}
sophuc operator - (sophuc a, sophuc b)
{
	sophuc hieu;
	hieu.thuc=a.thuc-b.thuc;
	hieu.ao=a.ao-b.ao;
	return hieu;
}
int main()
{
	sophuc a,b;cin>>a>>b;
	sophuc tong=a+b;
	sophuc hieu=a-b;
	cout<<tong<<hieu;
	return 0;
}