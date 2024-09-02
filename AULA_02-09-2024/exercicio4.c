#include <stdio.h>
#include <stdlib.h>

int main() {
  int soma=0, num;

  while(soma<=50) {
    printf("Digite um numero: ");
    scanf("%d", &num);

    soma = soma + num;
    printf("Soma atual: %d\n", soma);
  }
}