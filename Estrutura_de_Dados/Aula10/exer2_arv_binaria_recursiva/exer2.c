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

int nos(Arv A){
	if(A == NULL){
		return 0;
	}
	return 1+nos(A->dir)+nos(A->esq);
}

int main(void){
	Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,4,NULL)));
	printf("Quantidade de nos: %d\n", nos(I));

	return 0;
}
