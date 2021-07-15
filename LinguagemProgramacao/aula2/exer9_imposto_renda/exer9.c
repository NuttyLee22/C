#include <stdio.h>

int main(void){
	float salario, renda;

	printf("Digite o valor do seu salario: R$ ");
	scanf("%f", &salario,"\n");
	if(salario<=1903.98)
	{
		puts("Isento\n");
		renda = 0;
	}
	else

	if(salario>1903.98 && salario<=2826.65)
	{
		renda = (salario*7.5)/100;
	}
	else

	if(salario>2826.65 && salario<=3751.05)
	{
		renda = (salario*15)/100;
	}
	else

	if(salario>3751.05 && salario<=4664.68)
	{
		renda = (salario*22.5)/100;
	}
	else

	if(salario>4664.68)
	{
		renda = (salario*27.5)/100;
	}

	printf("O valor do imposto de renda eh: R$ %.3f", renda);
	printf("\n");
	return 0;
}
