#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* rev(char v[]){
	int i=0,j=0;
	char x[10];
	j=strlen(v)-1;

	for(i=0; v[i] != '\0'; i++){
		x[j] = v[i];
		j--;
	}
	x[i]='\0';
	strcpy(v,x);
	return v;
}

int main(void){
	char v[10]="ROMA";
	rev(v);
	puts(v);
	return 0;
}
