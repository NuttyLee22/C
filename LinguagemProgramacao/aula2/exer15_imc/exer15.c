#include <stdio.h>
#include <math.h>

int main(void){
	float peso, altura, imc;
	printf("Digite seu peso: ");
	scanf("%f", &peso, "\n");
	printf("Digite sua altura: ");
	scanf("%f", &altura, "\n");
	imc = peso/pow(altura,2);
	if(imc<18.5){
		puts("Magra");
	}else
	if(imc>=18.5 && imc<=30){
		puts("Normal");
	}else{
		puts("Obesa");
	}
	return 0;
}
