#include <stdio.h>

typedef struct {
	char titulo[50];
	char autor[50];
	int ano;
} Livro;

void exibe(Livro v[],int n){
	for(int i=0;i<n;i++){
		printf("Titulo: %s\n",v[i].titulo);
		printf("Autor: %s\n",v[i].autor);
		printf("Ano: %d\n",v[i].ano);
	}
}

int main(void){
	Livro v[]={{"Frankenstein","Mary Shelley",1818},
			  {"Dracula","Bran stoker",1897},
			  {"Carmilla","Sheridan Le Fanu",1872},
			  {"Varney","Thomas Prest",1847}};
	exibe(v,4);
}
