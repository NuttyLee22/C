#include <stdio.h>
void preenche(float v[]){
	int cont=0;
	for(cont; cont<=6; cont++){
		printf("%da temperatura ",cont+1);
		scanf("%f", &v[cont]);
	}
}

float media(float v[]){
	int cont=0;
	float soma=0;
	for(cont; cont<=6; cont++){
		soma=soma+v[cont];
	}
	soma=soma/7;
	return soma;
}

int conta(float v[], float m){
	int cont, cont2=0;
	
	for(cont=0; cont<7; cont++){
		if(v[cont]>m){
			cont2++;
		}
	}
	return cont2;
}

int main(void)  {
	float v[7];
	preenche(v);
	float m = media(v);
	printf("media: %.1f %cC\n",m,248);
	printf("Dias acima da media: %d\n",conta(v,m));
	return 0;
}
