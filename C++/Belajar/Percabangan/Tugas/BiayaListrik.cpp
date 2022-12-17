#include <iostream>
using namespace std;

int main(){
	int kwh,total;
	
	cout<<"Masukkan pemakaian listrik: ";
	cin>>kwh;
	
	if(kwh<=100){
		total=100000;
	}
	else if(kwh>500){
		total=700000+2000*(kwh-500);
	}
	else{
		total=100000+1500*(kwh-100);
	}
	cout<<"biaya pemakaiannya Rp."<<total;
	
	return 0;
}
