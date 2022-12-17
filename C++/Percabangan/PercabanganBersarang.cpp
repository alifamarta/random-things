#include <iostream>
using namespace std;

int main (){
	int nilai_uas,absensi_siswa;
	
	cout<<"Masukkan Nilai UAS: ";
	cin>>nilai_uas;
	cout<<"Masukkan Nilai Absensi Siswa: ";
	cin>>absensi_siswa;
	
	if(nilai_uas >= 65){
		cout<<"Siswa dinyatakan lulus";
	}
	else if(absensi_siswa >= 80){
		cout<<"Siswa dinyatakan lulus";
	}
	else {
		cout<<"Siswa dinyatakan tidak lulus";
	}
}
