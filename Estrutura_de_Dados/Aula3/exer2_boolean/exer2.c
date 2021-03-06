#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include "pilha.h"

char *posfixa(char *e) {
	static char s[256];
	int j = 0;
	Pilha P = pilha(256);
	for(int i=0; e[i]; i++)
		if( isalpha(e[i])) s[j++] = e[i];
		else if( strchr("||&!", e[i])) empilha(e[i],P);
		else if( e[i]==')') s[j++] = desempilha(P);
	s[j] = '\0';
	destroip(&P);
	return s;
}

int valor(char *e) {
	Pilha P = pilha(256);
	for(int i=0; e[i]; i++){
		bool x = true;
		bool y = false;
		
		if(x){
			e[i]=y;
			empilha(e[i],P);
		}
		if(!y){
			e[i]=x;
			empilha(e[i],P);
		}
	}
		
	int z = desempilha(P);
	destroip(&P);
	return z;
}

int main(void){
	char e[256];
	printf("Infixa? ");
	gets(e);
	printf("Posfixa: %s\n", posfixa(e));
	printf("Resultado: %d\n", valor(posfixa(e)));
	return 0;
}
