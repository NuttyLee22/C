#include <stdio.h>
#include <conio.h>

int main(void){
	float n1, n2, media, faltas;
	printf("Digite a 1 nota: ");
	scanf("%f", &n1,"\n");
	printf("Digite a 2 nota: ");
	scanf("%f", &n2,"\n");
	printf("Digite agora a quantidade de faltas: ");
	scanf("%f", &faltas,"\n");
	media = (n1+n2)/2;
	if(faltas<=5 && media>4)
		if(media>=6) {_textcolor(9); puts("Aprovado");}
		else {_textcolor(10); puts("Recuperacao");}
	else {_textcolor(12); puts("Reprovado");}
	return 0;
}
