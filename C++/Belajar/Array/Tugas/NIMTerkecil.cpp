#include <iostream>
using namespace std;

int main(){
	cout<<"	 Alif Nur Fathlii Amarta\n";
	cout<<"		312210326\n";
	cout<<"		TI 22 A3\n";
	cout<<"======================================="<<endl;
	
	int nilai[9];
	int a, b;
	
	for (a=0;a<9;a++){
		cout<<"Masukkan Nilai ke-" << (a+1)  <<":";
		cin>>nilai[a];
	}
	
	cout << "================================"<<endl;
	
	b=nilai[0];
	for (a=0;a<9;a++){
		if (nilai[a] < b){
			b = nilai[a];
		}	
	}
	cout<<"Nilai terkecil adalah:"<<b;
	
	return 0;
}
