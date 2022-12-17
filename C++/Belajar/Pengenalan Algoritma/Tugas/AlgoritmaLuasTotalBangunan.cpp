#include <iostream>
using namespace std;

int main(){
	float panjang,lebar,tinggi,luasSegitiga,luasPP,luasSL,luasTotal;
	
	cout << "masukkan tinggi: ";
	cin >> tinggi;
	cout << "masukkan panjang: ";
	cin >> panjang;
	cout << "masukkan lebar: ";
	cin >> lebar; 
	
	luasPP = panjang * lebar;
	luasSL = 0.5 * 3.14 * (0.5 * lebar);
	luasSegitiga = 0.5 * panjang * tinggi;
	luasTotal = luasPP + luasSL + luasSegitiga;
	
	cout << "Luas dari Persegi Panjang adalah: " << luasPP << endl;
	cout << "Luas dari setengah lingkaran adalah: " << luasSL << endl;
	cout << "Luas dari segitiga adalah: " << luasSegitiga << endl;
	cout << "Luas dari total bangun nya adalah: " << luasTotal << endl;
	
	return 0;
}
