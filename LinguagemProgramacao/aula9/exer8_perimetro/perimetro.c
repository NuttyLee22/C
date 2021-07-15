#include <stdio.h>
#include <math.h>

typedef struct{
	int x;
	int y;
}Ponto;

float perimetro(Ponto v[],int n){
	int soma=0;
	for(int i=0;i<n;i++){
		soma+=v[i].x+v[i].y;
	}
	return soma;
}

int main(void){
	Ponto v[4]={{0,2},{2,2},{2,0},{0,0}};
	printf("Perimetro: %.1f\n",perimetro(v,4));
	return 0;
}
