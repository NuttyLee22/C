#include <stdio.h>
#include <math.h>

typedef struct{
	int x;
	int y;
}Ponto;

Ponto le_ponto(int n){
	Ponto a={0,0};
	printf("%d ponto? ",n);
	scanf("%d",&a.x);
	scanf("%d",&a.y);
	return a;
}

float distancia(Ponto a,Ponto b){
	float distancia=sqrt((pow(b.x-a.x,2))+(pow(b.y-a.y,2)));
	return distancia;
}

int main(void){
	Ponto a=le_ponto(1);
	Ponto b=le_ponto(2);
	printf("Distancia: %.1f\n",distancia(a,b));
}
