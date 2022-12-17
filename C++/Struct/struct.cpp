#include <iostream>
using namespace std;

struct Mahasiswa{
    char Nim[9];
    char Nama[25];
    char Alamat[40];
    short Umur;
};

main(){
    Mahasiswa Mhs;
    cout<<"Masukkan NIM      : ";
    cin.getline(Mhs.Nim,9);
    cout<<"Masukkan Nama     : ";
    cin.getline(Mhs.Nama,25);
    cout<<"Masukkan Alamat   : ";
    cin.getline(Mhs.Alamat,40);
    cout<<"Masukkan Umur     : ";
    cin>>Mhs.Umur;

    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"NIM      : "<<Mhs.Nim<<endl;
    cout<<"Nama     : "<<Mhs.Nama<<endl;
    cout<<"Alamat   : "<<Mhs.Alamat<<endl;
    cout<<"Umur     : "<<Mhs.Umur<<endl;

    return 0;
}