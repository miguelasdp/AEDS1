/* Faça um programa para ler e armazenar 20 números em um vetor.

Após, leia um número inteiro N.

Analise o vetor e mostre todos os múltiplos de N que existirem  e suas posições no vetor. */

#include<stdio.h>
#include<stdlib.h>

int main() {
  int num[20], n, i;

  for(i=0; i<20; i++) {
    printf("Digite o número %d : ", i+1);
    scanf("%d", &num[i]);
  }
  printf("\nDigite o número N : ");
  scanf("%d", &n);
  for(i=0; i<20; i++) {
    if(i==0) {
      printf("\nMULTÍPLOS DE N: \n");
    }
    if(num[i]%n==0) {
      printf("\n-> %d", num[i]);
      printf("\nPosição = %d\n", i);
    }
  }
  return 0;
}