#include <stdio.h>
#include <ctype.h>

void minuscula(char x){
	char c;
	c = tolower(x);
	printf("%c", c);
}

int main(void){
	char x;
	printf("carctere? ");
	scanf("%c",&x);
	minuscula(x);
	puts("\n");
	return 0;
}
