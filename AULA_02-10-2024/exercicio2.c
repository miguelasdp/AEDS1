/* Faça um programa para ler e armazenar em um vetor,
uma série de 7 números diferentes.

Após a leitura da série mostre:

- a média dos números da série;

- o maior número lido e sua posição no vetor;

- o menor número lido e sua posição no vetor;

- todos os números da série. */

#include<stdio.h>
#include<stdlib.h>

int main() {
  int num[7], i, soma=0, maiorNum, maiorPos, menorNum, menorPos;
  float media;

  for(i=0;i<7;i++) {
    printf("\nDigite o %d número : ", i+1);
    scanf("%d", &num[i]);
  }

  for(i=0;i<7;i++) {
    if(i==0){
      menorNum = num[i];
      maiorNum = num[i];
      menorPos = i;
      maiorPos = i;
    }
    if(num[i] > maiorNum) {
      maiorNum = num[i];
      maiorPos = i;
    }
    if(num[i] < menorNum) {
      menorNum = num[i];
      menorPos = i;
    }
  }

  for(i=0;i<7;i++) {
    printf("\n%d° número digitado = %d", i+1, num[i]);
    soma += num[i];
  }
  media = soma / 7;
  printf("\n\nMaior número = %d\nPosição = %d\n", maiorNum, maiorPos);
  printf("\nMenor número = %d\nPosição = %d\n", menorNum, menorPos);
  
}