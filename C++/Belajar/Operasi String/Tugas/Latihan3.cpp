#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){

    cout<<"	 Alif Nur Fathlii Amarta\n";
	cout<<"		312210326\n";
	cout<<"		TI 22 A3\n";
	cout<<"=============================================="<<endl;

    char pw[50];

    cout<<"Masukkan Password : ";
    cin>>pw;

    cout<<endl;

    if (strlen(pw) < 8){
        cout<<"Maaf Password anda tidak valid minimal 8 karakter";
    }

    else{
        cout<<"Selamat anda berhasil memasukkan password";
    }

    cout<<endl;

    return 0;
}