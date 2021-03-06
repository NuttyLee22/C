#include <stdio.h>
int quant = 3;
int count = 0; 


void hanoi(int orig, int dest, int aux, int quant){
  if( quant == 1 ){
    printf("Move de %d para %d\n", orig, dest);
    count+=1;
  }else{
    hanoi(orig, aux, dest, quant-1);
    hanoi(orig, dest, aux, 1);
    hanoi(aux, dest, orig, quant-1);
  }
}

int main(void){
  hanoi(0, 2, 1, quant);
  printf("\nQuantidade de Discos: %d\n", quant);
  printf("Nº minimo de movimentos: %d\n\n", count);
  return 0;
}
