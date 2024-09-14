/* Faça um programa para mostrar todos os números entre 1 e 200 que são divisíveis 
por 5 e por 7 simultaneamente.

Utilize de método sem passagem de parâmetro(s) e sem retorno. */

#include <stdio.h>
#include <stdlib.h>

void divisiveis() {
  for(int i=1; i<=200; i++) {
    if((i%5==0) && (i%7==0)) {
      printf("\n%d", i);
    }
  }
}

int main() {
  divisiveis();
}