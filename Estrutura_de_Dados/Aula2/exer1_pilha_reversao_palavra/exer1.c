#include <stdio.h>
#include <string.h>
#include "pilha.h"

int main(void){
	char c[81];
	Pilha P = pilha(81);
	printf("Digite uma frase: ");
	gets(c);

	for(int i=0;c[i];i++){
		if(c[i]==' '){
			while(!vaziap(P))
				printf("%c",desempilha(P));
			printf(" ");
		}else{
			empilha(c[i],P);
		}
	}	
	while(!vaziap(P))
		printf("%c",desempilha(P));
	destroip(&P);
	puts("");
	return 0;
}
