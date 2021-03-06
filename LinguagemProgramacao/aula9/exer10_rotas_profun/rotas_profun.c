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

void exibe(int r[],int n,int p){
	for(int j=0;j<n;j++) {
		printf("%d,",r[j]);
		p+=1;
	}
	printf("\b.\n");
	printf("Profundidade: %d\n",p-1);
}

void rotas(int x,int y,Caminho v[],int n){
	static int r[100],i=0;
	r[i++]=x;
	int profundidade=0;
	if(x==y){
		exibe(r,i,profundidade);
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

	rotas(1,5,v,10);
	return 0;
}
