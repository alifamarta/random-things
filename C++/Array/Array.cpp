#include <iostream>
using namespace std;

int main(){


	int nilai[10];
	
	//pengisian array
	nilai[0] = 1;
	nilai[1] = 2;
	nilai[2] = 4;
	nilai[3] = -1;
	nilai[4] = 100;
	nilai[5] = 2;
	nilai[6] = 0;
	nilai[7] = -1;
	nilai[8] = 3;
	nilai[9] = 9;
	
	cout<<nilai[4]<<endl;
	
	int x = nilai[0] + nilai[5];
	cout<<x<<endl;
	
	//berubah menjadi 8
	nilai[9]=8;
	cout<<nilai[9];
	
	return 0;
}
