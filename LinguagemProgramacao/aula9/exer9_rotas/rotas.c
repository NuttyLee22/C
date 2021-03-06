#include <stdio.h>

typedef struct {
	int orig;
	int dest;
} Caminho;

int pertence(int x,int r[],int n){
	for(int i=0;i<n;i++)
		if(x==r[i]) return 1;
	return 0;
}

void exibe(int r[],int n){
	for(int j=0;j<n;j++) printf("%d,",r[j]);
	printf("\b.\n");

}

void rotas(int x,int y,Caminho v[],int n){
	static int r[100],i=0;
	r[i++]=x;

	if(x==y){
		exibe(r,i);
	}else
		for(int j=0;j<n;j++)
			if(v[j].orig==x && !pertence(v[j].dest,r,i))
				rotas(v[j].dest,y,v,n);
	i--;
	
}

int main(void){
	int orig,dest;
	Caminho v[10]={{1,2},{1,3},
			 {2,1},{2,4},
			 {3,2},{3,4},{3,5},
			 {4,3},{4,5},
			 {5,3}};
	printf("Ponto de origem: ");
	scanf("%d",&orig);
	printf("Ponto de destino: ");
	scanf("%d",&dest);

	rotas(orig,dest,v,10);
	return 0;
}
