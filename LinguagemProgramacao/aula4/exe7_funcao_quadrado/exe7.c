#include <stdio.h>

int fat(int n){
	int soma=0, i=1;
	for( int cont = 1; cont<=n; cont ++){
		printf("%d\n",i);

		soma=i+soma;

		i=i+2;
	}
	return soma;
}

int main(void){
	int n,i=1,soma=0;
	printf("Digite um numero: ");
	scanf("%d", &n);

	soma=fat(n);
	printf("Quadrado: %d\n",soma);
	return 0;
}
