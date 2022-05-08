#include<bits/stdc++.h>
using namespace std;
class giaovien;
class sinhvien;
class giaovien
{
	private:
	string khoa;
	public:
	void update(sinhvien&);
};
class sinhvien
{
	friend class giaovien;
	private:
    string ha,ten,ns;
	double gpa;
	static int dem;
	public:
	sinhvien();
	sinhvien(string, string, string, double);
	void nhap();
	void in();
	void tangdem();
	int getdem();
	friend void inthongtin(sinhvien);
	friend void chuanhoa(sinhvien&);
	friend istream& operator >> (istream& in, sinhvien& a);
	friend ostream& operator << (ostream &out, sinhvien a);
	bool operator <(sinhvien a);
	friend bool operator < (sinhvien a, sinhvien b);
};
bool operator < (sinhvien a, sinhvien b)
{
	return a.gpa< b.gpa;
}

istream& operator >> (istream& in, sinhvien& a)
{
	cout<<"Nhap id: ";
	in>>a.ha;
	in.ignore();
	cout<<"Nhap ten: ";getline(in, a.ten);
	cout<<"Nhap ns: ";
	in>>a.ns;
	cout<<"Nhap diem: ";
	in>>a.gpa;
	return in;
}
ostream &operator <<(ostream &out, sinhvien a)
{
	cout<<a.ha<<" "<<a.ten<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
	return out;
}
void giaovien::update(sinhvien &x)
{
	x.gpa=3.20;
}
void inthongtin(sinhvien a)
{
	cout<<a.ha<<" "<<a.ten<<endl;
}
int sinhvien::dem=0;
void sinhvien::tangdem()
{
	++dem;
}
int sinhvien::getdem()
{
	return this->dem;
}
sinhvien::sinhvien()
{
	this->ha=this->ten=this->ns="";
	this->gpa=0;
}
sinhvien::sinhvien(string ha, string ten, string ns, double gpa)
{
	this->ha=ha;
	this->ten=ten;
	this->ns=ns;
	this->gpa=gpa;
}
void sinhvien::nhap()
{
    cout<<"Nhap id: ";cin>>this->ha;
    cin.ignore();
	cout<<"Nhap ten: ";getline(cin, this->ten);
	cout<<"Nhap ns: ";cin>>this->ns;
	cout<<"Nhap diem: ";cin>>this->gpa;
}
void sinhvien::in()
{
	cout<<this->ha<<" "<<this->ten<<" "<<this->ns<<" "<<fixed<<setprecision(2)<<this->gpa<<endl;
}
int main()
{
	int n; cin>>n;
	sinhvien a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(sinhvien x:a)
	{
		cout<<x;
	}
	
	
	return 0;
}
