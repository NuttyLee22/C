#include <stdio.h>

int main(void){
	float saldo=1000,n;
	int escolha;

	do{
		puts("Digite o numero da operacao desejada:\n 1-Deposito\n 2-Saque\n 3-Saldo\n 4-Sair\n");
		scanf("%d", &escolha);

		switch(escolha){
			case 1: 
				printf("Deposito: R$ "); 
				scanf("%f", &n); 
				saldo=saldo+n;

				break;
			case 2: 
				printf("Saque: R$ ");
				scanf("%f", &n); 

				if(n<=saldo){
					puts("Aguarde para retirar as notas\n");
					saldo=saldo-n; 
				}else{
					puts("Nao e possivel realizar a operacao");
				}
				break;
			case 3: 
				printf("Saldo: R$ %.3f\n", saldo); 
				break;
			case 4: 
				exit(1); 
				break;
			default: 
				puts("Opcao invalida"); break;
		}
	}
	while(escolha<4);


	return 0;
}
