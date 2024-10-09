/* Faça um programa que leia e armazene em um vetor, 10 valores lidos em reais.

Após a leitura, gere um segundo vetor que contenha estes valores convertidos
em dólar e um terceiro  que contenha os valores em euro.

Mostre o conteúdo dos três vetores.

Obs: pergunte pela cotação do dólar e do euro do dia. */

#include<stdio.h>
#include<stdlib.h>

int main() {
  int valor[10], i;
  float dolar, euro, convDolar, convEuro;

  for(i=0; i<10; i++) {
    printf("\nDigite o valor que deseja converter : ");
    scanf("%d", &valor[i]);
  }

  printf("\nDigite a cotação do dolar do dia : ");
  scanf("%f", &dolar);

  for(i=0; i<10; i++) {
    if(i==0) {
      printf("\nValor em dolar: ");
    }
    convDolar = valor[i] / dolar;
    printf("\n\t%.1f", convDolar);
  }
  
  printf("\nDigite a cotação do euro do dia : ");
  scanf("%f", &euro);

  for(i=0; i<10; i++) {
    if(i==0) {
      printf("\nValor em Euro: ");
    }
    convEuro = valor[i] / euro;
    printf("\n\t%.1f", convEuro);
  }
}