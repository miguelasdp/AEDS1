/* Utilizando a estrutura de repetição, implemente um programa que calcule
 e escreva a  soma das 15 primeiras frações da série abaixo.

soma = (1/1 + 3/2 + 5/3 + 7/4 + ... )

Utilize de método com passagem de parâmetro(s) e sem retorno. */

#include <stdio.h>
#include <stdlib.h>

void calcFracao(int n) {
  float soma=0, num1=1, num2=1;

  for(int i=0; i < n; i++) {
    soma += num1/num2;
    num1 += 2;
    num2++;
  }
  printf("Resultado da soma = %.1f", soma);
}

int main() {
    int n=15;
    calcFracao(n);
}