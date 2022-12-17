#include <iostream>
using namespace std;

void Makanan(void);
void Minuman(void);

main(){
    char menu;
    do{
        cout<<endl;
        cout<<"------------------------------------"<<endl;
        cout<<"      WARUNG BAPAK KAU SLAMET       "<<endl;
        cout<<"------------------------------------"<<endl;
        cout<<"[A] Menu Makanan [B] Menu Minuman [X] Keluar"<<endl;
        cout<<"Silahkan pilih menu : "; cin >> menu;
        switch(menu){
            case 'A':
            Makanan();
            break;
            case 'B':
            Minuman();
            break;
        }
    }
    while(menu != 'X');
}
void Makanan(){
    cout<<"-----------------------------------"<<endl;
    cout<<"[1] Nasi Bakar - 15000"<<endl;
    cout<<"[2] Nasi Goreng  - 6700 "<<endl;
    cout<<"[3] Bakso Goreng- 4000 "<<endl;
    cout<<"-----------------------------------"<<endl;
}

void Minuman(){
    cout<<"-----------------------------------"<<endl;
    cout<<"[1] Es Jeruk - 6900 "<<endl;
    cout<<"[2] Es Teh Manis  - 7500 "<<endl;
    cout<<"-----------------------------------"<<endl;

}