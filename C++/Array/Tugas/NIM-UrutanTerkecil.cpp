#include <iostream>

using namespace std;

int main(){
	cout<<"	 Alif Nur Fathlii Amarta\n";
	cout<<"		312210326\n";
	cout<<"		TI 22 A3\n";
	cout<<"======================================="<<endl;
	
	int nilai[9];
	int urut;
	
	for(int a=0; a<9; a++){
		cout<<"Masukkan Nilai ke- "<<(a+1)<<" : ";
		cin >> nilai[a];
	}
	
	for(int c=1;c<9;c++)
	{
		for(int d=0;d<9-c;d++)
		{
			if(nilai[d] > nilai[d+1])
			{
				urut=nilai[d];
				nilai[d]=nilai[d+1];
				nilai[d+1]=urut;
			}
		}
	}
	
	cout<<"====================================="<<endl;
	
	cout<<"hasil pengurutannya dari yang terkecil: ";
	for(int a=0;a<9;a++)
	{
		cout<< " " << nilai[a];
	}
	return 0;
}
