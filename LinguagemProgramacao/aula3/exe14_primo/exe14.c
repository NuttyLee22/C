#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(void){
	int n, cont, raiz2, resto;
	float raiz;

	printf("Digite o numero: ");
	scanf("%d", &n);
	raiz = sqrt(n);
	raiz2 = ceil(raiz);
	if(n==2) {puts("Eh primo"); exit(1);}
	else
		for(cont=2; cont<=n-1; cont++)
			if(n%cont==0) break; 
			if(cont>raiz2)puts("Eh primo");
			else puts("Nao eh primo");

	return 0;
}
