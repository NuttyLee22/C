#include <stdio.h>

int main(void){
	int n, max=0, min=0;

	while(1){
		puts("Digite o numero:");
		scanf("%d", &n);

		if(n>max)
		{
			max =n;
			min = min;
		}else{
			min=n;
		}
		printf("Maximo:%d\n Minimo:%d", max, min);
		puts("\n");
	}
	
	return 0;
}
