/* Escreva um programa que leia números inteiros do usuário e utilize de um flag 
para parar quando um número negativo for inserido.

O programa deve calcular e exibir a média dos números positivos digitados. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num=0, cont=0;

  while(num >= 0){
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num >= 0){
      cont++;
    }
  }
  printf("Foram digitados %d numeros positivos", cont);
}