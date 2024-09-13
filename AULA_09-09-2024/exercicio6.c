/* Utilizando a estrutura de repetição  FOR, faça um programa para calcular a soma abaixo:

 S = ( 1! + 2! + 3! + 4! +  ............ + 8! ) */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int fat=1, soma=0;

  for(int i=1; i<=8; i++){
    fat *= i;
    soma += fat;
  }
  printf("A soma dos fatoriais de 8 a 1 é: %d",soma);
}
