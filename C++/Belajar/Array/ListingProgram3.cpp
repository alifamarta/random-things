#include <iostream>
using namespace std;

int main(){
	int data[10]= {4,1,0,-9,8,5,-1,2,3,-7};
	int elemen, max;
	max = data[0];
	
	for (elemen=0;elemen<=9;elemen++){
		if (data[elemen]>max) max=data[elemen];
		else max = max;
	}
	cout<<"Nilai maksimum adalah:"<<max;
	
	return 0;
}
