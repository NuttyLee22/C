#include <stdio.h>

int main(void){
	float n1, n2, media;
	printf("Digite a 1 nota: ");
	scanf("%f", &n1,"\n");
	printf("Digite a 2 nota: ");
	scanf("%f", &n2,"\n");
	media = (n1+n2)/2;
	printf("A media das notas eh: %.1f", media,"\n");
	return 0;
}
