/* Faça um programa para ler 3 temperaturas medidas ao longo
 de um dia e após as leituras, mostre a média entre elas e 
 uma das mensagens abaixo:

 - se a média for <= 10 graus, diga “Muito Frio!”;

 - se a média estiver > 10 e <= 20, diga “Frio !”;

 - se a média estiver > 20 e <= 30, diga “Quente!”;

 - se a média estiver > 30, diga “Muito Quente!”; */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int temp1, temp2, temp3, media;

  printf("Escreva a Temperatura 1: ");
  scanf("%d", &temp1);
  printf("Escreva a Temperatura 2: ");
  scanf("%d", &temp2);
  printf("Escreva a Temperatura 3: ");
  scanf("%d", &temp3);

  media = (temp1 + temp2 + temp3) / 3;

  if(media <= 10) {
    printf("\nMuito Frio!");
  } else if((media > 10) && (media <= 20)){
    printf("\nFrio!");
  } else if((media > 20) && (media <= 30)){
    printf("\nQuente!");
  } else if(media > 30){
    printf("\nMuito Quente!");
  }
}