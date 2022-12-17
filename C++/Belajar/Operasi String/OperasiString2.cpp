#include <stdio.h>

int main(){
	
	char daftarkota[5][10];
	int i;
	
	for (i=0; i<5; i++){
		printf("Masukkan string ke-%d ", i);
		gets(daftarkota[i]);
		
	}
	
	for (i=0;i<5;i++){
		puts(daftarkota[i]);
	}
	
	return 0;
}
