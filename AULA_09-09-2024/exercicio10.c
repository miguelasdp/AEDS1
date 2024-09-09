#include <stdio.h>
#include <stdlib.h>

int main() {
  int residencias;
  float consumo, media_consumo, maior_consumo, menor_consumo, soma_consumo=0;

  printf("Digite o número de residencias: ");
  scanf("%d", &residencias);

  for(int i=0; i<residencias; i++){
    printf("Digite o consumo da residencia %d: ", i+1);
    scanf("%f", &consumo);

    soma_consumo += consumo;

    if(i==0) {
      maior_consumo = consumo;
      menor_consumo = consumo;
    }

    if(consumo > maior_consumo) {
      maior_consumo = consumo;
    }
    if(consumo < menor_consumo) {
      menor_consumo = consumo;
    }
  }

  media_consumo = soma_consumo / residencias;
  printf("\nA media do consumo das residencias é: %.1f\n", media_consumo);
  printf("O maior consumo é: %.1f\n", maior_consumo);
  printf("O menor consumo é: %.1f\n", menor_consumo);
}