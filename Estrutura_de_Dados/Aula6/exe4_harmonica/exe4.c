#include <stdio.h>

float h(float n){
	if(n==1)
	{	
		return 1;
	}else{
		return ((1/n)+h(n-1));
	}
}

int main(void){
	float n;
	printf("Digite um numero: ");
	scanf("%f",&n);
	printf("Harmonica: %.2f\n", h(n));
	return 0;
}
