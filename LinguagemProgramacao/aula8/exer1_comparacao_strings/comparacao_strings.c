#include <stdio.h>
#include <string.h>


int main(void){
	char s[513];
	char a[513]="Abracadabra";
	do{
		printf("Senha? ");
		gets(s);
		if (strcmp (s,a) !=0) puts("Senha incorreta");
		else puts("Senha correta");
	}while(strcmp(s,a) !=0);
	return 0;
}
