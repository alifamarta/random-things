#include <iostream>
#include <queue>
using namespace std;

main(){
    queue<int> orpos;

    orpos.push(1);
    orpos.push(2);
    orpos.push(3);
    orpos.push(4);

    orpos.pop();

    cout<<"Jumlah data : "<< orpos.size()<<endl;
    cout<<"Data pertama : "<< orpos.front()<<endl;
    cout<<"Data terakhir : "<< orpos.back()<<endl;

    return 0;
}