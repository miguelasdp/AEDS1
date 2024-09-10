/* 3) Utilizando a estrutura de repetição WHILE, 
implemente um programa em C que calcule e escreva a seguinte soma:

soma = (1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50) */

#include <stdio.h>
#include <stdlib.h>

int main() {
int contador = 0;
float soma = 0, num1=1, num2=1;

while(contador<50) {
  soma = soma + (num1/num2);
  num1 = num1 +2;
  num2 = num2 +1;
  contador ++;
}
printf("A soma e: %.1f", soma);
}