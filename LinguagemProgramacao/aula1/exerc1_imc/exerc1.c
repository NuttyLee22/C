#include <stdio.h>
#include <math.h>

int main(void){
	float peso, altura, imc;
	printf("Digite seu peso e depois a altura: ");
	scanf("%f %f", &peso, &altura, "\n");
	imc = peso/pow(altura,2);
	if( imc<=30 ) printf("Nao esta obeso \n");
	else printf("Esta obeso \n");
	return 0;
}
