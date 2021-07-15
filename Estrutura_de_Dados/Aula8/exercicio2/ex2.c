#include <stdio.h>
#include <stdlib.h>

typedef int Item;

typedef struct no {
	Item item;
	struct no * prox;
} *Lista;

void exibe(Lista L){
	printf("[");
	while(L != NULL){
			printf("%d",L->item);
			L = L->prox;
			if(L == NULL){
				printf("]\n");
		}else{
			printf(",");
		}
	}
}

Lista no(Item x, Lista p){
	Lista n = malloc(sizeof(struct no));
	n->item = x;
	n->prox = p;
	return n;
}

int main(void){
	Lista I = no(3,no(1,no(5,NULL)));
	exibe(I);
	return 0;
}
