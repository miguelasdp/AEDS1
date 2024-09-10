/* Faça um programa que leia os 5 resultados do lançamento sucessivos de uma moeda,
 onde temos para cada resultado (Cara=1 / Coroa=2).

Ao final da leitura dos resultados dos lançamentos, mostre a ocorrência do número de Caras 
e o número de Coroas e informe qual dos dois resultados foi o que teve o maior número de ocorrências.

Exemplo: 

Resultado:  Cara=3    Coroa=2

Maior ocorrência: Cara */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int contador = 0, lado, cont_cara = 0, cont_coroa = 0;

  while (contador < 5) {
    printf("Qual Lado a Moeda Caiu?\n(Cara=1 / Coroa=2)");
    scanf("%d", &lado);
  
    if(lado == 1) {
      cont_cara++;
    } else {
      cont_coroa++;
    }
    contador++;
  }

  printf("Resulado: %d Cara e %d Coroa\n", cont_cara, cont_coroa);
  if(cont_cara > cont_coroa) {
    printf("Cara Ganhou!");
  } else if(cont_cara < cont_coroa) {
    printf("Coroa Ganhou!");
  } else {
    printf("Empate!");
  }
}