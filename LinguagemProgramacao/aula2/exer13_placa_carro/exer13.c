#include <stdio.h>

int main(void){
	int placa;
	puts("Digite o numero da placa: ");
	scanf("%d", &placa);
	placa = placa%10;
	if(placa==1 || placa==2){
		puts("Segunda-Feira");
	}else

	if(placa==3 || placa==4){
		puts("Terça-Feira");
	}else
	if(placa==5 || placa==6){
		puts("Quarta-Feira");
	}else
	if(placa==7 || placa==8){
		puts("Quinta-Feira");
	}else
	if(placa==9 || placa==0){
		puts("Sexta-Feira");
	}
	return 0;
}
