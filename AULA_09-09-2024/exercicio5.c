#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, cont_mult=1;

  printf("Digite um numero : ");
  scanf("%d", &num);

  for(int i=0; i<20; i++){
    printf("\n%d° multiplo = %d ", i+1, num*cont_mult);
    cont_mult++;
  }
}