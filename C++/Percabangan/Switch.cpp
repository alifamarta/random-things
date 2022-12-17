#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Masukkan bilangan (1-7): ";
	cin>>a;
	
	cout<<endl;
	
	switch(a){
		case 1 :
			cout<<"Hari ke "<<a<<" adalah Minggu"<<endl;
			break;
		case 2:
			cout<<"Hari ke "<<a<<" adalah Senin"<<endl;
			break;
		case 3:
			cout<<"Hari ke "<<a<<" adalah Selasa"<<endl;
			break;
		case 4:
			cout<<"Hari ke "<<a<<" adalah Rabu"<<endl;
			break;
		case 5:
			cout<<"Hari ke "<<a<<" adalah Kamis"<<endl;
			break;
		case 6:
			cout<<"Hari ke "<<a<<" adalah Jumat"<<endl;
			break;
		case 7:
			cout<<"Hari ke "<<a<<" adalah Sabtu"<<endl;
			break;
	}
	return 0;
}
