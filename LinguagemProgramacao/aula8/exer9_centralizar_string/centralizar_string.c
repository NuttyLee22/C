#include <stdio.h>
#include <conio.h>

char centraliza(char s[80], int y){
	for(int i=0; i<y; i++){
		puts("");
	}

	printf("             %s\n\n\n",s);
}

int main(void){
	char v[80]="Apenas um teste";
	centraliza(v,13);
	return 0;
}
