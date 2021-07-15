#include <stdio.h>

typedef struct {
	int dia;
	int mes;
	int ano;
} Data;

typedef struct {
	int codigo;
	char nome[21];
	float salario;
	Data admissao;
} Func;

float total_salarios(Func v[],int n){
	float soma=0;
	for(int i=0;i<n;i++){
		soma= soma + (v[i].salario);
	}

	return soma;
}

int main(void){
	Func v[]={{379,"Iasmin Souza",9200.00,{2,6,2000}},
			  {437,"William Belo",6100.00,{27,11,2001}},
			  {980,"Yuji Yoshime",8500.00,{18,11,1999}},
		      {007,"Ana Laura Almeida",7300.00,{8,11,2001}}};
	printf("Soma dos Salarios: %.2f\n",total_salarios(v,4));
}
