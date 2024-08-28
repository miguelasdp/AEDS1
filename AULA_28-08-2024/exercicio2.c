#include <stdio.h>
#include <stdlib.h>

int main() {
  int contador=0, num=-7, soma=0;

  while(contador < 10) {
    soma = soma+num;
    num = num + 2;
    contador++;
  }

  printf("A soma dos 15 primeiros números a partir de -7 é: %d", soma);
}