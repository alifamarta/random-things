#include <iostream>
using namespace std;

int main(){
	int data[5];
	int a;
	
	for (a=0;a<=4;a++){
		cout<<"Masukkan nilai ke- "<<a<<": ";
		cin >> data[a];
	}
	cout<<endl;
	
	for (a=0;a<=4;a++){
		cout<<"Data ke -"<<a<<": "<< data[a]<<endl;
	}
	return 0;
}
