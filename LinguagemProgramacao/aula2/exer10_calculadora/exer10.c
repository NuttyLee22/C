#include <stdio.h>

int main(void){
	float x, y;
	char op;

	printf("Digite a expressao: ");
	scanf("%f %c %f", &x, &op, &y,"\n");

	switch(op){
		case '+': printf("Valor = %.2f\n", x+y); break;
		case '-': printf("Valor = %.2f\n", x-y); break;
		case '*': printf("Valor = %.2f\n", x*y); break;
		case '/': 
			if(y==0){
				printf("Divisao por 0. Fim da operacao\n"); break;
			}else{
				printf("Valor = %.2f\n", x/y); break;
			}
		default : printf("Operador invalido: %c\n",op);
	}
	return 0;
}
