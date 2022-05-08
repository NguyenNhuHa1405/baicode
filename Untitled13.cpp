#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>


int main (){
	char hoten[30];
	char ngaysinh[30];
	cout<<"Nhap Ho Va Ten Cua Ban: ";
	cin.getline(hoten,30);
	cout<<"Ho Va Ten Cua Ban: "<<(hoten)<<endl;
	cout<<"In Hoa Ho Ten: "<<strupr(hoten)<<endl;
	int s=strlen(hoten);
	cout<<"Do Dai Ten Cua Ban: "<<s<<endl;
	cout<<"Nhap Vao Day Ngay Sinh Cua Ban: ";
	cin.getline(ngaysinh,30);
	cout<<"Ngay Sinh Cua Ban La: "<<(ngaysinh)<<endl;
	
	char s1[50];
	char s2[50];
	cout<<"Nhap Vao Xau Thu Nhat: ";
	cin.getline(s1,40);
	cout<<"Nhap Vao Xau Thu Hai: ";
	cin.getline(s2,40);
	cout<<"Noi Hai Xau: "<<strcat(s1,s2)<<endl;

}