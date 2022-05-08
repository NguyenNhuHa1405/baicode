#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

/*typedef struct{
	char ten[225];
	char diachi[100];
	int diem;
}SinhVien;
void svthunhat(SinhVien &sv1){
	cout<<"Nhap Ten SV1:";cin.getline(sv1.ten,225);
	cout<<"Nhap Dia Chi SV1:";cin.getline(sv1.diachi,100);
	cout<<"Nhap Diem SV1:";cin>>sv1.diem;
	cin.ignore();
}
void svthuhai(SinhVien &sv2){
	cout<<"\nNhap Ten SV2:";cin.getline(sv2.ten,225);
	cout<<"Dia Chi SV2:";cin.getline(sv2.diachi,100);
	cout<<"Nhap Diem SV2:";cin>>sv2.diem;
	
}void Xuat(SinhVien sv1,SinhVien sv2){
	int max=sv1.diem;
	if(sv1.diem > sv2.diem){
		cout<<"\nTen Sinh Vien Co Diem Lon Hon:"<<sv1.ten<<endl;
	}else{
		cout<<"\nTen Sinh Vien Co Diem Lon Hon:"<<sv2.ten<<endl;
	}
}int main(){
	SinhVien sv1, sv2;
	svthunhat(sv1);
	svthuhai(sv2);
	Xuat(sv1,sv2);
	
}*/


struct sanpham{
	int id;
	char ten[100];
	int soluong;
	float dongia;
};
void Nhap(sanpham &sp1, sanpham &sp2){
	cout<<"Nhap ID sp1:";cin>>sp1.id;
	cin.ignore();
	cout<<"Nhap Ten sp1:";cin.getline(sp1.ten,100);
	cout<<"Nhap So Luong sp1:";cin>>sp1.soluong;
	cout<<"Don Gia sp1:";cin>>sp1.dongia;
	
	cout<<"\nNhap ID sp2:";cin>>sp2.id;
	cin.ignore();
	cout<<"Nhap Ten sp2:";cin.getline(sp2.ten,100);
	cout<<"Nhap So Luong sp2:";cin>>sp2.soluong;
	cout<<"Don Gia sp2:";cin>>sp2.dongia;
}
void Xuat(sanpham sp1,sanpham sp2, int s1=0, int s2=0){
	s1=sp1.soluong*sp1.dongia;
	s2=sp2.soluong*sp2.dongia;
	cout<<"Thanh Tien Cua 2 San Pham:"<<s1+s2<<endl;
	cout<<"Thanh Tien Cua San Pham 2:"<<s2<<endl;
}int main(){
	sanpham sp1, sp2;
	int s1, s2;
	Nhap(sp1,sp2);
	Xuat(sp1,sp2,s1,s2);
}

