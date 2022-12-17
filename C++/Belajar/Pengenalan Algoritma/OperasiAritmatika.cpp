#include <iostream>

using namespace std;

int main(){
	int a,b,c,d,e,f;
	
	cout << "Inputkan nilai a: ";
	cin >> a;
	
	cout << "INputkan nilai b: ";
	cin >> b;
	
	c = a + b;
	d = a * b;
	e = a / b;
	f = a % b;
	
	cout << "Hasil a + b = " << c << endl;
	cout << "Hasil a * b = " << d << endl;
	cout << "Hasil a / b = " << e << endl;
	cout << "Hasil a % b = " << f << endl;
	return 0;
}
