/* Implemente um programa que leia números inteiros do usuário até 
que a soma dos números digitados seja maior que 50. A cada leitura 
realizada mostre a soma atual dos números digitados.

Use um flag para parar o loop quando essa condição for atendida. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int soma=0, num;

  while(soma<=50) {
    printf("Digite um numero: ");
    scanf("%d", &num);

    soma = soma + num;
    printf("Soma atual: %d\n", soma);
  }
}