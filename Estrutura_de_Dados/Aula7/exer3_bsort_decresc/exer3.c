#include <stdio.h> 

void troca(int v[], int i, int j){
	int x = v[i];
	v[i] = v[j];
	v[j] = x;
}

void bsr(int v[], int n){
	for(int i=1; i<=n; i++)
		for(int j=0; j<n-1; j++)
			if(v[j]<v[j+1])
				troca(v,j,j+1);
}

void exibe(int v[],int n){
	for(int i=0;i<n;i++){
		printf("V[%d] = %d\n",i,v[i]);
	}
}

int main (void){
	int v[5] = {48,52,31,19,27};
	bsr(v,5);
	exibe(v,5);
	return 0;
}
