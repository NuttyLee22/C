#include <stdio.h>

int termial(int n){
	if(n==0)
	{	
		return 0;
	}else{
		return n+termial(n-1);
	}
}

int main(void){
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	printf("Termial: %d\n", termial(n));
	return 0;
}
