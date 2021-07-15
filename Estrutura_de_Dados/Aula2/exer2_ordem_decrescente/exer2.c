#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(void){
	int n,m;
	Pilha A = pilha(10);
	Pilha B = pilha(10);
	
	do{
		printf("1 Numero: ");
		scanf("%d", &n);
		empilha(n,A);

	}while(n<0);

	for(int i=0;i<9;i++){
		printf("Numero: ");
		scanf("%d", &m);

		if(topo(A)<m){
			empilha(m,B);
		}else{
			empilha(m,A);
		}
	}
	printf("Pilha A desempilhada:\n");
	
	while(!vaziap(A))
		printf("%d\n",desempilha(A));

	destroip(&A);
	destroip(&B);
	return 0;
}
