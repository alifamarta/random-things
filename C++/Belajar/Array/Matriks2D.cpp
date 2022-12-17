#include <iostream>
using namespace std;

int main(){
	int matriks[3][3];
	int a,b;
	char opr;
	
	for(a=1;a<=2;a++){
		for(b=1;b<=2;b++){
			cout<<"Masukkan nilai baris ke-"<<a<<" kolom ke-"<<b<<" : ";
			cin>>matriks[a][b];
		}
		cout<<endl;
	}
	
	for(a=1;a<=2;a++){
		for(b=1;b<=2;b++){
			cout<<matriks[a][b]<<"\t";
		}
		cout <<endl;
	}
	return 0;
}
