#include <stdio.h>

int main (void) {
	float n1, n2, media;
	printf("Digite a 1 nota: ");
	scanf("%f", &n1,"\n");
	printf("Digite a 2 nota: ");
	scanf("%f", &n2,"\n");
	media=(n1+n2)/2;
	if(media<6) puts("Reprovado");
	else puts("Aprovado");
	
	return 0;
}
