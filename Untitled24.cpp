#include<iostream.h>
#include<iomanip.h>

struct nhanvien{
	int manhanvien;
	char tennhanvien[225];
	float hesoluong;
};


void caua(nhanvien nv[], int &n){
		cout<<"Nhap so nhan vien "	;cin>>n;
	for(int i=0;i<n;i++){
	
		
		cout<<"\n-------Nhan vien thu "<<i+1<<"-------"<<endl;
		cout<<"Nhap ma nhan vien:";cin>>nv[i].manhanvien;
			cin.ignore();
		cout<<"Nhap ten nhan vien:";cin.getline(nv[i].tennhanvien,25);
		    	
		cout<<"nhap he so luong:";cin>>nv[i].hesoluong;
		
			
	}
	
}
void caub(nhanvien nv[], int n,float &s, float &t){
	for(int i=0;i<n;i++)
	{  s=nv[i].hesoluong*27500;
	   t=(0.25)*s;
	   
		cout<<"\nLuong co ban cua nhan vien "<<i+1<<":"<<s;
		cout<<"\nPhu cap cua nhan vien "<<i+1<<":"<<t;
		cout<<"\nTong luong cua nhan vien "<<i+1<<":"<<s+t<<endl;
	
	
	} 
		
			cout<<"\nTen nhan vien co tong luong tren 10tr:"<<endl;
	for(int i=0;i<n;i++){
		 
		if((s+t)>10000000){
		cout<<nv[i].tennhanvien<<"  ";
		cout<<endl;
	
	}
		
	} for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((nv[i].hesoluong*27500)<(nv[j].hesoluong*27500)){
				nhanvien tp=nv[i];
				nv[i]=nv[j];
				nv[j]=tp;
			}
		}
	}for(int i=0;i<n;i++){
		cout<<nv[i].tennhanvien<<"  ";
	}
	
}
int main (){
	int n ;
	float s, t;
	nhanvien nv[100];
	caua(nv, n);
	caub(nv, n, s, t);
}