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