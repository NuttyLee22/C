#include <stdio.h>
#define maiuscula(c) c==toupper(c)

int main(void){
	char x;
	printf("carctere? ");
	scanf("%c",&x);
	printf("Maiuscula: %s\n", maiuscula(x) ? "sim" : "nao");
	return 0;
}
