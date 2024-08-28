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

 