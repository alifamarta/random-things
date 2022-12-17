#include <iostream>
using namespace std;

int main(){
	int bil;
	cout<<"Input angka yang akan dicek: ";
	cin>>bil;
	
	if (bil > 0){
		cout<<bil<<" adalah bilangan positif";
	}
	else if (bil < 0){
		cout<<bil<<" adalah bilangan negatif";
	}
	else {
		cout<<"Anda menginputkan bilangan nol";
	}
}
