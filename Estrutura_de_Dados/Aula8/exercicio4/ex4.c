#include <stdio.h>
#include <stdlib.h>

typedef int Item;

typedef struct no {
	Item item;
	struct no * prox;
} *Lista;


void exibe(Lista L){
	while(L != NULL){
			printf("%d",L->item);
			L = L->prox;	
	}
}

Lista no(Item x, Lista p){
	Lista n = malloc(sizeof(struct no));
	n->item = x;
	n->prox = p;
	return n;
}

int soma(Lista L){
 	int s = 0;
	for(int n=0; L = NULL; L->prox = n){

 	   soma += numero;
 	}
 	return soma;
}

int main(void){
	Lista I = no(3,no(1,no(5,NULL)));
	exibe(I);
	printf(" Soma dos itens da lista = %d\n\n",soma(9);
	return 0;
}
