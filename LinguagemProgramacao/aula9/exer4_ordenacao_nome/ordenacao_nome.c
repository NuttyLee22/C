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

void troca(Func v[],int i,int j){
	Func x=v[i];
	v[i]=v[j];
	v[j]=x;
}

void ordenatab(Func v[],int n){
	for(int i=1;i<=n-1;i++){
		for(int j=0;j<n-i;j++){
			if(v[j].nome[0]>v[j+1].nome[0])
				troca(v,j,j+1);
		}	
	}
}

void exibe(Func v[],int n){
	for(int i=0;i<n;i++){
		printf("Codigo: %d\n",v[i].codigo);
		printf("Nome: %s\n",v[i].nome);
		printf("Salario: %.2f\n",v[i].salario);
		printf("Data de admissão: %d/%d/%d\n\n",v[i].admissao.dia,v[i].admissao.mes,v[i].admissao.ano);
	}
}

int main(void){
	Func v[]={{679,"Iasmin Souza",9200.00,{2,6,2000}},
			  {437,"William Belo",6100.00,{27,11,2001}},
			  {980,"Yuji Yoshime",8500.00,{18,11,1999}},
		      {107,"Ana Laura Almeida",7300.00,{8,11,2001}}};
	ordenatab(v,4);
	exibe(v,4);
}
