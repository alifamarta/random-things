#include <iostream>
using namespace std;

int maks = 5;
string buku[5];
int top = 0;

bool isFull(){
    if(top == maks){
        return true;
    }
    else{
        return false;
    }
}

bool isEmpty(){
    if(top == 0){
        return true;
    }
    else{
        return false;
    }
}

void pushArray(string data){
    if(isFull()){
        cout<<"Data penuh"<<endl;
    }
    else{
        buku[top] = data;
        top++;
    }
}

void popArray(){
    if(isEmpty()){
        cout<<"Data kosong hehe"<<endl;
    }
    else{
        buku[top-1] = "";
        top--;
    }
}

void displayArray(){
    if(isEmpty()){
        cout<<"Data kosong hehe"<<endl;
    }
    else{
        cout<<"Data Stack : "<<endl;
        for(int a = maks - 1;a>=0;a--){
            if(buku[a] != ""){
                cout<<"Data : "<<buku[a]<<endl;
            }
        }
        cout<<"\n"<<endl;
    }
}

int main(){
    pushArray("10 Dosa Besar Soeharto");
    pushArray("How To Make A Car");
    pushArray("Konspirasi Dalang Dibalik Pembunuhan Munir");
    pushArray("Konspirasi G30S PKI");
    pushArray("Meme Dibaca Mim");
    pushArray("Dokumen Asli Supersemar");
    pushArray("Da Vinci Code");
    displayArray();

    popArray();
}