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

void exibe(Arv A, int n){
	if(A == NULL) return;
	exibe(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibe(A->esq,n+1);
}

int pertence(int x,Arv A){
    if(A==NULL)return 0;
    if(A->item==x)return 1;
    if(pertence(x,A->esq)==1||pertence(x,A->dir)==1){
        return 1;
    }  
    return 0;
}


int main(void){
    Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,4,arv(arv(NULL,6,NULL),5,arv(NULL,7,NULL)))));
    exibe(I,0);
    printf("\n6  pertence a arvore I?:\n");
    if(pertence(6,I)==1){
        printf("Sim\n");
    }else{
        printf("Nao\n");
    }
    printf("\n10  pertence a arvore I?:\n");
    if(pertence(10,I)==1){
        printf("Sim\n");
    }else{
        printf("Nao\n");
    }
}
