#include <stdio.h>
#include <ctype.h>

void upr(char v[]){
	for(int i=0; i<10; i++){
		v[i]=toupper(v[i]);
	}
}

int main(void){
	char v[10]="Teste";
	upr(v);
	puts(v);
	return 0;
}
