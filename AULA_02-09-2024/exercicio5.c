#include <stdio.h>
#include <stdlib.h>

int main() {
  int secreto = rand() % 100, num=0;

  while (num!=secreto) {
    printf("Digite um numero qualquer: ");
    scanf("%d", &num);

    if (num > secreto) {
      printf("O numero secreto e menor que %d\n", num);
    } else if (num < secreto) {
      printf("O numero secreto e maior que %d\n", num);
    } else {
      printf("Parabens! Voce acertou o numero secreto!\n");
    }
  }
}