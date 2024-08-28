#include <stdio.h>
#include <stdlib.h>

int main() {
  int contador=0, num=2, soma=0;

  while(contador < 15) {
    soma = soma+num;
    num = num + 2;
    contador++;
  }

  printf("A soma dos 15 primeiros números pares é: %d", soma);
}