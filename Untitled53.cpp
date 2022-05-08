#include<iostream.h>
using namespace std;
long long gcd(long long a,long long b){
	if(b==0)return a;
	return gcd(b, a%b);
}
long long lcd(long long a, long long b){
	return a/gcd(a,b)*b;
}
class PhanSo{
	private:
	long long tu, mau;
	public:
	PhanSo(long long tu,long long mau);
	friend ostream &operator << (ostream& , PhanSo);
	friend istream &operator >>(istream& ,PhanSo&);
	void rutgon();
	friend PhanSo operator + (PhanSo a, PhanSo b);
};
PhanSo operator + (PhanSo a, PhanSo b){
	PhanSo tong(1,1);
	long long mc=lcd(a.mau,b.mau);
	tong.tu=mc/a.mau*a.tu+mc/b.mau*b.tu;
	tong.mau=mc;
	long long g=gcd(tong.tu, tong.mau);
	tong.tu/=g;
	tong.mau/=g;
	return tong;
}
PhanSo::PhanSo(long long tu, long long mau)
{
	this->tu=tu;
	this->mau=mau;
}
ostream &operator << (ostream& out, PhanSo a){
	out<<a.tu<<"/"<<a.mau<<endl;
	return out;
}
istream &operator >>(istream& in,PhanSo& a){
	in>>a.tu>>a.mau;
	return in;
}
void PhanSo::rutgon(){
	long long g=gcd(this->tu,this->mau);
	this->tu/=g;
	this->mau/=g;
}
int main()
{
	PhanSo p(1,1),q(1,1);
	cin>>p>>q;
	cout<<p+q;
	return 0;
}