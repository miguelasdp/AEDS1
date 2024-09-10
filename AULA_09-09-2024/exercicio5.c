/* Utilizando a estrutura de repetição FOR, faça um programa que leia um número inteiro qualquer e após a leitura,
mostre os 20 primeiros múltiplos deste número.

Exemplo:   

N=2

Múltiplo 1 = 2        Múltiplo 2 = 4     ................................     Múltiplo 20 = 40 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, cont_mult=1;

  printf("Digite um numero : ");
  scanf("%d", &num);

  for(int i=0; i<20; i++){
    printf("\n%d° multiplo = %d ", i+1, num*cont_mult);
    cont_mult++;
  }
}