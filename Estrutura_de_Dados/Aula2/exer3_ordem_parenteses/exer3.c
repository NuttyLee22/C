#include <stdio.h>
#include "pilha.h"
int main(void){
	int contador;
	int balcd=1;
	Pilha P= pilha(255);
	char s[255];
	printf("Digite a sequencia: ");
	gets(s);
	for(int i=0;s[i]; i++){
		if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
			empilha(s[i],P);
		}else{
			char fecha;
			fecha=desempilha(P);
			if((s[i]==']' && fecha!='[') || (s[i]==')' && fecha!='(') || (s[i]=='}' && fecha!='{')){
				balcd=0;
			}
		}
	}	

	if(balcd){
		printf("Balanceado\n");
	}else{
		printf("Nao balanceado\n");
	}
}
