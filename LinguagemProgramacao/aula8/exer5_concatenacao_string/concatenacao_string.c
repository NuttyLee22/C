#include <stdio.h>

void cat(char v[], char w[]){
	for(int i=0; i<10; i++){
		v[i+3]=w[i];
	}
}

int main(void){
	char v[10]="aba";
	char w[10]="cate";
	cat(v,w);
	puts(v);
	return 0;
}
