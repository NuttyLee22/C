#include <stdio.h>
#include <ctype.h>
#include "pilha.h"
#include "fila.h"

int main(void){
	char s[356];
	Fila F = fila(356);
	Pilha P = pilha(256);
	printf("\nFrase? ");
	gets(s);
	for(int i=0; s[i]; i++)
		if(isalpha(s[i])){
			enfileira(toupper(s[i]),F);
			empilha(toupper(s[i]),P);
		}
	while(!vaziaf(F) && desenfileira(F)==desempilha(P));
	if(vaziaf(F)) puts("A frase eh palindroma");
	else puts("A frase nao eh palindroma");
	destroif(&F);
	destroip(&P);
	return 0;
}
