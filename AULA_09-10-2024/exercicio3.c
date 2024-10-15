/* Em Belo Horizonte, sabe-se que não ocorre temperatura inferior a 5°C, nem superior a 40°C.
Faça um programa que utilize um vetor de 7 posições para armazenar as temperaturas de cada dia de uma semana. Calcule e imprima:

A menor e a maior temperatura ocorrida;
A temperatura média;
As temperaturas inferiores à temperatura média e a quantidade de dias que isso ocorreu;
As temperaturas superiores à temperatura média e a quantidade de dias que isso ocorreu; */

#include<stdio.h>
#include<stdlib.h>

int main() {
  int temp[7], menorTemp, maiorTemp, somaTemp=0, tempAbaixoMedia, contDiasAbaixoMedia=0, tempAcimaMedia, contDiasAcimaMedia=0, i;
  float mediaTemp;

  for(i=0; i<7; i++) {
     while (temp[i] < 5 || temp[i] > 40) {
        printf("Digite a temperatura: ");
        scanf("%d", &temp[i]);
        if (temp[i] < 5 || temp[i] > 40) {
            printf("\nTemperatura inválida. Por favor, digite uma temperatura entre 5 e 40.\n");
        }
    }
  }

  menorTemp = temp[0];
  maiorTemp = temp[0];

  for(i=0; i<7; i++) {
    if(temp[i] > maiorTemp) {
      maiorTemp = temp[i];
    }
    if(temp[i] < menorTemp) {
      menorTemp = temp[i];
    }

    somaTemp += temp[i];
  }

  mediaTemp = somaTemp / 7.0;

  for(i=0; i<7; i++) {
    if(temp[i] < mediaTemp) {
      printf("\nTemperatura Abaixo da Media = %d", temp[i]);
      contDiasAbaixoMedia++;
    }
  }
  
  printf("\nQuantidade de dias Abaixo da media = %d\n", contDiasAbaixoMedia);

  for(i=0; i<7; i++) {
    if(temp[i] > mediaTemp) {
      printf("\nTemperatura Acima da Media = %d", temp[i]);
      contDiasAcimaMedia++;
    }
  }
  
  printf("\nQuantidade de dias Acima da media = %d\n", contDiasAcimaMedia);
  printf("\nTemperatura Media = %.1f", mediaTemp);
  printf("\nMaior Temperatura = %d\nMenor Temperatura = %d", maiorTemp, menorTemp);

  return 0;
}