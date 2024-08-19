#include <stdio.h>

int main() {
  int num1, num2, num3, maior, menor;

  printf("Escreva o primeiro numero: ");
  scanf("%d", &num1);
  printf("\nEscreva o segundo numero: ");
  scanf("%d", &num2);
  printf("\nEscreva o terceiro numero: ");
  scanf("%d", &num3);

  if ((num1 > num2) && (num1 > num3)) {
    maior = num1;
    if (num2 > num3) {
      menor = num3;
    } else {
      menor = num2;
    }
  } 
  if ((num2 > num1) && (num2 > num3)) {
    maior = num2;
    if (num1 > num3) {
      menor = num3;
    } else {
      menor = num1;
    }
  } 
  if ((num3 > num1) && (num3 > num2)) {
    maior = num3;
    if (num1 > num2) {
      menor = num2;
    } else {
      menor = num1;
    }
  }

  printf("\nO maior numero e: %d", maior);
  printf("\nO menor numero e: %d", menor);
}