#include <stdio.h>
#include <math.h>

int main(void){
	int dia, mes, ano, calc, passo1, passo2, passo3;
	printf("Digite seu aniversario.\nDia: ");
	scanf("%d", &dia);
	printf("Mes: ");
	scanf("%d", &mes);
	printf("Ano: ");
	scanf("%d", &ano);
	calc = (dia * 100) + mes;
	passo1 = calc + ano;
	passo2 = (passo1/100)+(passo1%100);
	passo3 = passo2%5;
	
	switch(passo3){
		case 0: puts("Timido(a)"); break;
		case 1: puts("Sonhador(a)"); break;
		case 2: puts("Paquerador(a)"); break;
		case 3: puts("atraente"); break;
		default: puts("Irresistivel"); break;
	}
	return 0;
}
