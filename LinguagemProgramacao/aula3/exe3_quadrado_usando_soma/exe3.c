#include <stdio.h>

int main(void){
	int n,i=1,soma=0;
	printf("Digite um numero: ");
	scanf("%d", &n);

	for( int cont = 1; cont<=n; cont ++){
		printf("%d\n",i);

		soma=i+soma;

		i=i+2;
	}
	printf("Quadrado: %d\n",soma);
	return 0;
}
