/* Faça um programa que calcule o Fatorial de um número inteiro e positivo,

onde  n ! = n  x  (n-1) x (n-2) x ...... x 2 x 1       

Exemplo:  4! = 4 x 3 x 2 x 1             4! = 24 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  float fatorial=1, num;

  printf("Digite um numero: ");
  scanf("%f", &num);

  while(num > 1) {
    fatorial = fatorial * num;
    num--;
  }

  printf("Resultado: %.0f", fatorial);
}

 