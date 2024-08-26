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