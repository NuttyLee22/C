#include <stdio.h>

void cr(int n){
	if (n==0){
		printf("");
	}else{
		printf("%d\n", n);
		cr(n-1);
	}
}

int main(void){
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	cr(n);
	return 0;
}
