#include <stdio.h>
#include <stdlib.h>

int main() {
  int peso, genero, cont_h=0, cont_m=0, soma_peso=0, contador = 0;
  float media_peso;

  while (contador < 10) {
    printf("Qual Genero? \n\t(1 - Masculino, 2 - Feminino): ");
    scanf("%d", &genero);
    printf("Qual Peso? ");
    scanf("%d", &peso);

    if(genero == 1) {
      cont_h++;
    } else if(genero == 2) {
      cont_m++;
    } else {
      printf("Genero Invalido!\n");
    }
    soma_peso += peso;
    contador ++;
  }

  media_peso = soma_peso / 10;

  printf("O numero de Homens e: %d\n", cont_h);
  printf("O numero de Mulheres e: %d\n", cont_m);

  printf("A media de peso e: %.1f\n", media_peso);

  if(cont_h > cont_m) {
    printf("Existem mais homens do que mulheres\n");
  } else if (cont_h < cont_m) {
    printf("Existem mais mulheres do que homens\n");
  } else {
    printf("Existem a mesma quantidade de homens e mulheres\n");
  }
}