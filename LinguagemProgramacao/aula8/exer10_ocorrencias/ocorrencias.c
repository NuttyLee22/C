#include <stdio.h>

int ocor(char c, char s[]){
	int x=0;
	for(int i=0; s[++i] != '\0'; i++){
		if(s[i]==c) x=x+1;
	}
	return x;
}

int main(void){
	char v[]="banana";
	printf("Ocorrencias: %d\n", ocor('a',v));
	return 0;
}
