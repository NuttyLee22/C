#include <stdio.h>
#include <math.h>

int main(void){
	float x1, x2, y1, y2, d;
	printf("Digite as coordenadas do ponto A: \n");
	scanf("%f %f", &x1, &y1);
	printf("Digite as coordenadas do ponto B: \n");
	scanf("%f %f", &x2, &y2);
	x1 = x2 - x1;
	y1 = y2 - y1;
	d = sqrt(((pow(x1,2)) + (pow(y1,2))));
	printf("A distancia entre os pontos eh: %.3f",d);
	printf("\n");
	return 0;
}
