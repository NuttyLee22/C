#include <stdio.h>

void cp(int n){
	if (n==0){
		printf("");
	}else{
		cp(n-1);
		printf("%d\n", n);
	}
}

int main(void){
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	cp(n);
	return 0;
}
