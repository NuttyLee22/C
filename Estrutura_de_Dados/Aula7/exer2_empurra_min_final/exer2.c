#include <stdio.h> 

void troca(int v[], int menor){
	int x=v[3];
	v[3]=v[4];
	v[4]=menor;
}

void empurra(int v[], int n){
	int menor = v[0];
	for(int i=0; i<n; i++)
		for(int j=1; j<=n; j++)
			if(menor > v[j]){
				menor = v[j];
			}else{
				menor = menor;
			}
	troca(v,menor);
}

void exibe(int v[],int n){
	for(int i=0;i<n;i++){
		printf("V[%d] = %d\n",i,v[i]);
	}
}

int main (void){
	int v[5] = {48,52,31,19,27};
	empurra(v,5);
	exibe(v,5);
	return 0;
}
