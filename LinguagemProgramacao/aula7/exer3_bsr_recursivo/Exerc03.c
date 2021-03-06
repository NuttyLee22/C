#include <stdio.h>
void troca(int v[],int i,int j){
	int x=v[i];
	v[i]=v[j];
	v[j]=x;
}

int empurra(int v[],int n){
	if(n==1){
		return v[n];	
	}
	
	empurra(v,n-1);

	if(v[n-2]>v[n-1]){
		troca(v,n-1,n-2);
	}
}

void bsr(int v[], int n){
	if(n==0)
        return;

    for(int i=0;i<n-1;i++){
        empurra(v,n);
    }

    bsr(v,n-1);
}


void exibe(int v[],int n){
	for(int i=0;i<n;i++){
		printf("V[%d] = %d\n",i,v[i]);
	}
}

int main(void){
	int v[5]={48,19,61,52,27};
	bsr(v,5);
	exibe(v,5);
	return 0;
}
