#include <stdio.h>

int val(char v[]){
	int w;
	
	w= atoi(v);
}

int main(void){
	char v[10]="351";
	printf("Valor: %d\n",2*val(v));
	return 0;
}
