#include <iostream>
using namespace std;
struct Mahasiswa
{
    char Nim[9];
    char Nama[25];
    char Alamat[4];
    int Umur;
};

main(){
    Mahasiswa Mhs[2];
    int x;
    for (x=0;x<2;x++){
        cout<<"Masukkan NIM     : ";
        cin>>Mhs[x].Nim;
        cout<<"Masukkan Nama    : ";
        cin>>Mhs[x].Nama;
        cout<<"Masukkan Alamat  : ";
        cin>>Mhs[x].Alamat;
        cout<<"Masukkan Umur    : ";
        cin>>Mhs[x].Umur;

        cout<<endl;
    }

    for(x=0; x<2; x++){
        cout<<endl;
        cout<<endl;
        cout<<"NIM      : "<<Mhs[x].Nim<<endl;
        cout<<"Nama     : "<<Mhs[x].Nama<<endl;
        cout<<"Alamat   : "<<Mhs[x].Alamat<<endl;
        cout<<"Umur     : "<<Mhs[x].Umur;
    }
}