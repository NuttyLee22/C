#include <stdio.h>

int main(void){
	float n1, n2;
	printf("Digite o 1 numero: ");
	scanf("%f", &n1,"\n");
	printf("Digite o 2 numero: ");
	scanf("%f", &n2,"\n");
	if(n1>n2) printf("O maior numero eh %0.f", n1);
	else printf("O maior numero eh %0.f", n2);
	printf("\n");
	return 0;
}
