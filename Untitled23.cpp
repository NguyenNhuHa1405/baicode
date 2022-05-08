#include <iostream>
using namespace std;

//Funtion: Ham


void input(int array[], int &n)
{
	cout<<"\nNhap so luong phan tu: ";
	do{	
		cin>>n;
		if(n < 0)
		{
			cout<<"\nNhap lai n!!" << endl;
		}	
	}while(n < 0);
	for(int index = 0; index < n; index++)
	{
		cout<<"Array "<< index + 1 << ": " ;
		cin >> array[index];
	}
}


void output(int array[], int n)
{
	for(int index = 0; index < n; index++)
	{
		cout<<"Array "<< index + 1 << ": " << array[index]<<endl;
	}
}

int main(int argc, char *argv[])
{
	int n;
	int array[100];
	cout<<"\nNhap mang: ";
	input(array, n);
	cout<<"\nXuat mang: ";
	output(array, n);
	return 0;
}