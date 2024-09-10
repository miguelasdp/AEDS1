/* Utilizando uma estrutura de repetição, implemente um programa em C 
para ler uma sequência de 8 números inteiros positivos e verificar se 
cada um deles é par ou ímpar, escrevendo mensagem adequada.

Ex:  Digite um número: 4

“Número par !!! ”.

Digite um número: 5

“Número ímpar !!! ”.

Ao término indique quantos números pares e quantos ímpares foram digitados.

Total de pares = 

Total de ímpares =  */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int contador=0, num, cont_par=0, cont_impar=0;

  while(contador < 8) {
    printf("Digite um número: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
      printf("Numero Par !!!\n\n");
      cont_par++;
    } else {
      printf("Numero Impar !!!\n\n");
      cont_impar++;
    }
    contador++;
  }
  printf("Quantidade de números pares: %d\n", cont_par);
  printf("Quantidade de números impares: %d\n", cont_impar);
}