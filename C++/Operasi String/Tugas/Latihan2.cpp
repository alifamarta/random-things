#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){

    char nama1[50];
    char nama2[50];

    cout<<"Masukkan nama depan : ";
    cin>>nama1;

    cout<<"Masukkan nama belakang : ";
    cin>>nama2;

    strcat(nama1,nama2);

    printf("Nama Anda : %s \n",nama1);
}