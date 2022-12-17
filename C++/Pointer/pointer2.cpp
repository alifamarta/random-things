#include <iostream>
using namespace std;

main(){
    int a = 5;
    int *b;
    b = &a;

    cout<<"Nilai variabel a adalah "<<a<<endl;
    cout<<"Alamat variabel a adalah "<<&a<<endl;
    cout<<"Isi dari variabel a adalah "<<a<<endl;
    cout<<"Nilai yang tertampung variabel b adalah "<<*b<<endl;

    return 0;

}