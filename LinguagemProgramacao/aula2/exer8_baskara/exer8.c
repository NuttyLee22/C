#include <stdio.h>
#include <math.h>

int main(void){
	float a, b, c, delta, x1, x2;
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	if(a<0) puts("Valor de a invalido.");
	else
	printf("Digite o valor de b: ");
	scanf("%f", &b,"\n");
	printf("Digite o valor de c: ");
	scanf("%f", &c,"\n");
	delta= sqrt(pow(b,2)-4*a*c);
	if(delta>0){
		if(delta==0){
			x1= (-b + delta)/2*a;
			x2= x1;
		}
		else{
			x1= (-b + delta)/2*a;
			x2= (-b - delta)/2*a;
		}
	printf("x1 = %.0f", x1);
	printf("\n");
	printf("x2 = %.0f", x2);
	printf("\n");
	}
	else puts("Nao existe raiz\n");

	return 0;
}
