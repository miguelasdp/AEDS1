/* Utilizando a estrutura de repetição FOR, 
implemente um programa que calcule e escreva a soma dos 15 primeiros termos da sequencia abaixo:

soma = (1/1 + 3/2 + 5/3 + 7/4 + .......) */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1=1, num2=1;
  float soma=0;

  for(int i = 0; i < 15; i++){
    num1+=2;
    num2++;

    soma = soma + num1/num2;
  }

  printf("Soma: %.2f", soma);
}