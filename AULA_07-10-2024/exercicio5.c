/* A Cemig classifica seus consumidores nos seguintes tipos 
(Residenciais=1 / Comerciais=2 / Industriais =3).

Faça um programa que leia e armazene em vetores, o consumo (Kwh)
e o tipo de 8 consumidores. Após fazer toda a leitura dos dados, mostre:

a) a quantidade de consumidores por tipo;

b) o maior e o menor consumo verificado e o tipo de consumidor
(o tipo do maior e o tipo do menor);

c) todos os consumos do tipo industrial;

d) a média dos consumos residenciais;

e) todos os consumos comerciais. */

#include<stdio.h>
#include<stdlib.h>

int main() {
  int tipo[8], consumo[8], contRes=0, contCom=0, contInd=0, tipoMaior, tipoMenor, maiorCons, menorCons, somaConsRes=0, i;
  float mediaConsRes;

  for(i=0; i<8; i++) {
    printf("\nDigite o consumo em Kwh : ");
    scanf("%d", &consumo[i]);
    printf("Digite o tipo do consumidor\n(1)Residenciais (2)Comerciais (3)Industriais : ");
    scanf("%d", &tipo[i]);
  }

  for(i=0; i<8; i++) {
    if(tipo[i] == 1) {
      contRes++;
      somaConsRes += consumo[i];
    } else if(tipo[i] == 2) {
      contCom++;
    } else if(tipo[i] == 3) {
      contInd++;
    }
  }

  maiorCons = consumo[0];
  menorCons = consumo[0];
  tipoMaior = tipo[0];
  tipoMenor = tipo[0];

  for(i=0; i<8; i++) {
    if(consumo[i] > maiorCons) {
      maiorCons = consumo[i];
      tipoMaior = tipo[i];
    }
    if(consumo[i] < menorCons) {
      menorCons = consumo[i];
      tipoMenor = tipo[i];
    }
  }

  mediaConsRes = somaConsRes / contRes;

  printf("\n\nConsumidores Residênciais = %d", contRes);
  printf("\nConsumidores Comerciais = %d", contCom);
  printf("\nConsumidores Industriais = %d", contInd);
  printf("\nMaior consumo = %d\nTipo = %d", maiorCons, tipoMaior);
  printf("\nMenor consumo = %d\nTipo = %d\n", menorCons, tipoMenor);

  for(i=0; i<8; i++) {
    if(i==0) {
      printf("\nTOTAL CONSUMO INDUSTRIAL:\n");
    }
    if(tipo[i] == 3) {
      printf("\n-> %d", consumo[i]);
    }
  }
  printf("\n\nMédia consumo residencial = %.1f\n", mediaConsRes);

  for(i=0; i<8; i++) {
    if(i==0) {
      printf("\nTOTAL CONSUMO COMERCIAL:\n");
    }
    if(tipo[i] == 2) {
      printf("\n-> %d", consumo[i]);
    }
  }
}