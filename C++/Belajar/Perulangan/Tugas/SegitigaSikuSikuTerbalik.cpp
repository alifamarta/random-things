#include <iostream>
using namespace std;

int main(){
	
	int a,b,c;
	
	cout << "Masukkan angka: ";
	cin >> c;
	
	cout << endl;
	
	for(a = 0;a<c;a++) {
		for(b=1;b<=c-a;b++) {
			cout << " *";
		}
		cout << endl;
	}
	return 0;
}
