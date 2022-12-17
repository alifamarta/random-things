#include <iostream>
using namespace std;

int main(){
	int bil[5];
	int sum;
	int count;
	
	cout<<"Masukkan lima bilangan: ";
	
	sum = 0;
	
	for (count=0;count < 5;count++){
		cin>>bil[count];
		sum = sum + bil[count];
	}
	
	cout<<endl;
	
	cout <<"Penjumlahan bilangan = "<<sum<<endl;
	cout <<"Bilangan dalam urutan terbalik adalah: ";
	
	for(count=4; count>=0; count--){
		cout<<bil[count]<<" ";
		
	}
	
	cout << endl;
	
	return 0;
}
