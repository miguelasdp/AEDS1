/* Faça um programa para ler e armazenar em vetores,
7 leituras de temperaturas em graus Celsius e o dia do mês (1 a 31),
em que cada temperatura foi lida.

Após a leitura dos dados mostre:

- a média das temperaturas lidas;

- as temperaturas abaixo da média e os dias em que elas ocorreram;

- a menor temperatura verificada;

- a maior temperatura verificada. */

#include<stdio.h>
#include<stdlib.h>

int main() {
  int temp[7], dia[7], somaTemp=0, menorTemp, maiorTemp, i;
  float mediaTemp;

  for(i=0; i<7; i++) {
    printf("\nDigite a temperatura : ");
    scanf("%d", &temp[i]);
    printf("\nDigite o dia\n1 a 31 : ");
    scanf("%d", &dia[i]);
    
    if(dia[i] < 1 && dia[i] > 31) {
      printf("\nValor inválido");
      dia[i] = 1;
    }
  }

  for(i=0; i<7; i++) {
    somaTemp += temp[i];

    if(i==0) {
      menorTemp = temp[i];
      maiorTemp = temp[i];
    }
    if(temp[i] > maiorTemp) {
      maiorTemp = temp[i];
    }
    if(temp[i] < menorTemp) {
      menorTemp = temp[i];
    }
  }
  mediaTemp = somaTemp / 7.0;

  for(i=0; i<7; i++) {
    if(i==0) {
      printf("\nTemperatura(s) Abaixo da média : ");
    }
    if(temp[i] < mediaTemp) {
      printf("\n\t%d°", temp[i]);
      printf("\nDia = %d", dia[i]);
    }
  }
  printf("\n\nMédia das Temperaturas = %.1f", mediaTemp);
  printf("\nMenor Temperatura = %d", menorTemp);
  printf("\nMaior Temperatura = %d", maiorTemp);
}