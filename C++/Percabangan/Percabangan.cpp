#include <iostream>
using namespace std;

int main(){
	
	int nilai;
	cout<<"Masukkan Nilai: ";
	cin>>nilai;
	
	if(nilai % 2 == 0){
		cout<<nilai<<" adalah bilangan genap";
	}
	else{
		cout<<nilai<<" adalah bilangan ganjil";
	}
}
