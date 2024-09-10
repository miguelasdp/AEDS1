/* 5) Utilizando uma estrutura de repetição, implemente um programa em C 
para ler uma sequência de 5 números inteiros positivos e verificar se cada
um deles é divisível por 3, escrevendo mensagem adequada.

Ex:  

Digite um número: 3

“É divisível por 3”.

Digite um número: 5

“Não é divisível por 3”. */

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