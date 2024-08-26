#include <stdio.h>
#include <stdlib.h>

int main() {
  int contador = 0;
  int num;

  while(contador < 5) {
    printf("Digite um número: ");
    scanf("%d", &num);

    if(num % 3 == 0) {
      printf("É divisível por 3.\n\n");
    } else {
      printf("Não é divisível por 3.\n\n");
    }
  }
}