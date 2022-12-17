#include <iostream>
using namespace std;

int main(){
	int sum, i;
	int nilai[10];
	//mengisi data nilai dari input user
	cout<<"Isilah 10 data nilai dalam range 0-100:"<<endl;
	for (i=0; i<10; i++){
		cin>>nilai[i];
	}
	
	//menjumlahkan nilai dan menghitung rata-rata
	cout<<"Data input:"<<endl;
	sum=0;
	for (i=0; i<10; i++){
		cout<<nilai[i]<<endl;
		sum = sum + nilai[i];
	}
	cout<<"Rata-rata: ";
	cout<<sum/10.0<<endl;
	
	return 0;
}
