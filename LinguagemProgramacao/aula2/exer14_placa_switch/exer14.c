#include <stdio.h>

int main(void){
	int placa;
	puts("Digite o numero da placa: ");
	scanf("%d", &placa);
	placa = placa%10;

	switch(placa){
		case 1:
		case 2: puts("Segunda-Feira"); break;
		case 3:
		case 4: puts("Terça-Feira"); break;
		case 5:
		case 6: puts("Quarta-Feira"); break;
		case 7:
		case 8: puts("Quinta-Feira"); break;
		default: puts("Sexta-Feira"); break;
	}

	return 0;
}

