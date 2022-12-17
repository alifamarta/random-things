#include <iostream>
using namespace std;

int main (){
	
	cout<<"	 Alif Nur Fathlii Amarta\n";
	cout<<"		312210326\n";
	cout<<"		TI 22 A3\n";
	cout<<"======================================="<<endl;
	int nilai[10]; 
	int i,j;
	cout<<"Masukkan nilai: ";
	cin>>j;
	for (i=0;i<j;i++){
		cout<<"Masukkan nilai ke-"<<i<< " = ";
		cin>>nilai[i];
	}
	cout<<"======================================="<<endl;
	
	for (i=0;i<j;i++){
		cout<<"data nilai ke-"<<i<<" = "<<nilai[i]<<endl;
	}
	return 0;
}
