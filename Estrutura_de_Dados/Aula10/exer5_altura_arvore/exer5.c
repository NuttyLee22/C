#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct arv{
	struct arv *esq;
	Item item;
	struct arv *dir;
} *Arv;

Arv arv(Arv e, Item x, Arv d){
	Arv n = malloc(sizeof(struct arv));
	n->esq = e;
	n->item = x;
	n->dir = d;
	return n;
}

int altura(Arv A){
	if(A == NULL){
		return 0;
	}
	return 1+altura(A->dir)+altura(A->esq);
}

int main(void){
	Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,4,NULL)));
	printf("Altura da arvore: %d\n", altura(I));

	return 0;
}
