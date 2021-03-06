#include <stdio.h>
#include <stdlib.h>
typedef int Item;
typedef struct arv{
    struct arv *esq;
    Item item;
    struct arv *dir;
} * Arv;

Arv arv(Arv e, Item x, Arv d){
    Arv n = malloc(sizeof(struct arv));
    n->esq = e;
    n->item = x;
    n->dir = d;
    return n;
}

void exibe(Arv A,int n) {
    if( A==NULL ) return;
    exibe(A->dir,n+1);
    printf("%*s%d\n",3*n,"",A->item);
    exibe(A->esq,n+1);
}


void posordem(Arv A){
    if(A!=NULL){
        posordem(A->esq);
        posordem(A->dir);
        printf("%d ",A->item);
    }else{
        return;
    }
}

int main(void){
    Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,4,arv(arv(NULL,6,NULL),5,arv(NULL,7,NULL)))));
    exibe(I,0);
    printf("\nSequencia em pos ordem:\n");
    posordem(I);
}
