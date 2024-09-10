/* 4) Utilizando a estrutura de repetição DO-WHILE, 
implemente um programa em C que calcule e escreva a seguinte soma:

soma = (1/1 + 1/2 + 1/3 + 1/4 + ... + 1/40) */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int contador = 0;
  float soma = 0, num1=1, num2=1;

   do {
    soma = soma + (num1/num2);
    num2 = num2 +1;
    contador ++;
  } while(contador<40);
  printf("A soma e: %.1f", soma);
}