#include <stdio.h>

int main(void){
	char s[256];
	printf("Senha: ");
	gets(s);
	if(strcmp(s,"abracadabra")==0) puts("Ok!");
	else puts("Senha invalida");
	return 0;
}
