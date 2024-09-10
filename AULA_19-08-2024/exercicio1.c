/* Faça um programa para ler 2 números diferentes quaisquer e 
após mostre o valor do maior e o valor do menor entre os dois. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2;

  printf("Escreva um numero inteiro qualquer: ");
  scanf("%d", &num1);
  printf("\nEscreva outro numero inteiro qualquer: ");
  scanf("%d", &num2);

  if(num1 > num2) {
    printf("\nO primeiro numero e maior que o segundo");
    printf("\nMaior numero: %d", num1);
  } else if (num1 < num2) {
    printf("\nO segundo numero e maior que o primeiro");
    printf("\nMaior numero: %d", num2);
  }
}