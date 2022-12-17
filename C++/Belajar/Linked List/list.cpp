#include <iostream>
using namespace std;
struct book{
    string title;
    int year;
    book *next;
};

int main(){
    book *model1, *model2;
    model1 = new book();
    model2 = new book();

    model1->title = "10 Dosa Besar Kominfo";
    model1->year = 2021;
    model1->next = model2;

    model2->title = "Dalang Dibalik Pembunuhan Munir";
    model2->year = 2022;
    model2->next = NULL;

    book *temp;
    temp = model1;
    while(temp != NULL){
        cout<<"------------------------------------------"<<endl;
        cout<<"Title : "<<temp->title<<endl;
        cout<<"Year  : "<<temp->year<<endl;
        cout<<"------------------------------------------"<<endl;
        temp = temp->next;

    }

    return 0;
}