/* Escreva um programa que leia e armazene um número secreto.

Após a leitura desse número, faça um programa para que o usuário tente adivinhar esse número secreto até acertar.

Durante as tentativas, dê as dicas se o número digitado atual é maior ou menor que o número secreto.

No final mostre quantas tentativas foram necessárias para acertar. */

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