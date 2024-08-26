#include <stdio.h>
#include <stdlib.h>

int main() {
  int contador = 0,soma = 0, num = 0;

  while (contador < 50) {
    num++;
    soma = soma + num;
    contador++;
  }

  printf("Resultado: %d", soma);
}