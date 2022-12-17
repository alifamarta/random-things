#include <iostream>
using namespace std;

int main(){
	int A[10] = {12,24,14,25,10,13,21,20,15,18};
	int B,C,Bil; 
	
	for(int B=0; B<10; B++){
		cout<<A[B]<<endl;
	}
	cout<<endl;
	
	// Memasukkan nilai yang dicari
	cout<<"Masukkan nilai yang akan dicari: ";
	cin>>Bil;
	
	// Melakukan pencarinan data
	for (C=0;C<10;C++){
		if(A[C] == Bil){
			cout<<"Nilai yang dicari "
				<<"terdapat pada indeks ke-"<<C;
				break;
		}
	}
	return 0;
}
