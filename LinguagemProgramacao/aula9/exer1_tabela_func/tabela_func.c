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

void exibe(Func v[],int n){
	for(int i=0;i<n;i++){
		printf("Codigo: %d\n",v[i].codigo);
		printf("Nome: %s\n",v[i].nome);
		printf("Salario: %.2f\n",v[i].salario);
		printf("Data de admissão: %d/%d/%d\n\n",v[i].admissao.dia,v[i].admissao.mes,v[i].admissao.ano);
	}
}

int main(void){
	Func v[]={{379,"Iasmin Souza",9200.00,{2,6,2000}},
			  {437,"William Belo",6100.00,{27,11,2001}},
			  {980,"Yuji Yoshime",8500.00,{18,11,1999}},
		      {007,"Ana Laura Almeida",7300.00,{8,11,2001}}};
	exibe(v,4);
}
