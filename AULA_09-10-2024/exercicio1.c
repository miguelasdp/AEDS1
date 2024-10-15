/* Ler 10 números inteiros positivos que deverão ser armazenados em um vetor de tamanho 10.\
Preencha um segundo vetor apenas com os números ímpares do primeiro vetor, completando as demais posições com o valor 0.
Imprimir o vetor resultante.

Exemplo:

supondo o vetor A mostrado abaixo,

24 43 15 36 11 22 12 31 17 19

o vetor B  teria os seguintes valores:

0 43 15 0 11 0 0 31 17 19  */

#include<stdio.h>
#include<stdlib.h>

int main() {
  int num[10], impar[10], i;

  for(i=0; i<10; i++) {
    printf("Digite o %d número : ", i+1);
    scanf("%d", &num[i]);
  }

  for(i=0; i<10; i++) {
    if(num[i]%2==0) {
      impar[i] = 0;
    } else {
      impar[i] = num[i];
    }
  }

  for(i=0; i<10; i++) {
    if(i==0) {
      printf("\nVETOR IMPAR PREENCHIDO: \n\n");
    }

    printf("%d\t", impar[i]);
  }
  return 0;
}