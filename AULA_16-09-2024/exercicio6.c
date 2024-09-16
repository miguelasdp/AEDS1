/* Faça um programa para mostrar todos os números ímpares de 1 a 150 e
ao término informar quantos foram mostrados.

Utilize de método com passagem de parâmetro(s) e sem retorno. */

#include <stdio.h>
#include <stdlib.h>

void impar(int n) {
  int cont_impar=0;

  for(int i=1; i<=n; i++){
    if(i%2==1){
      cont_impar++;
    }
  }

  printf("Números ímpares de 1 a 150 = %d", cont_impar);
}

int main() {
    int n=150;
  impar(n);
}