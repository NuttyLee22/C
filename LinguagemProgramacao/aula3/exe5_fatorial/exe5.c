#include <stdio.h>

int main(void){
	int fat=1,n;
	printf("Digite o numero: ");
	scanf("%d",&n);

	for( int cont = n; cont>=1; cont--){
		fat=fat*cont;
	}
	printf("Fatorial: %d\n",fat);
	return 0;
}
