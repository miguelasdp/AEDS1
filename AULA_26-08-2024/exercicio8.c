/* Faça um programa para calcular e mostrar a soma da série abaixo: 

S = (1 +  1/2 + 1/3 +  1/4 + .............1/10) */

#include <stdio.h>
#include <stdlib.h>

int main() {
int contador = 0;
float soma = 0, num1=1, num2=1;

while(contador<10) {
soma = soma + (num1/num2);
num2 = num2 +1;
contador ++;
}
printf("A soma e: %.1f", soma);
}