#include <stdio.h>
#include <string.h>
#include <ctype.h>

void exibe(char v[][8],int n){
	for(int i=0;i<n;i++){
		puts(v[i]);
	}

}

void bsort(char v[][8],int n){
	for(int i=1;i<=n-1;i++){
		for(int j=0;j<n-i;j++){
			if(v[j][0]>v[j+1][0]){
				char x[n];
				strcpy(x,v[j]);
				strcpy(v[j],v[j+1]);
				strcpy(v[j+1],x);
			}
		}
	}
}

int main(void){
	char v[][8]={"Eduardo",
				 "Catia",
				 "Ana",
				 "Denise",
				 "Beatriz"};

	bsort(v,5);
	exibe(v,5);
	return 0;
}
