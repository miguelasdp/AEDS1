/* Utilizando a estrutura de repetição  FOR, faça um programa para calcular a soma abaixo:

 S = ( 1! + 2! + 3! + 4! +  ............ + 8! ) */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num=8, fat=1;

  for(int i=0; i<8; i++){
    fat *= num;
    num--;
  }
  printf("%d",fat);
}