/* Faça um programa que leia um valor em real e permita converter para 
qualquer uma das três moedas: dólar, euro ou libra.

Após a escolha da moeda a ser convertida, pergunte pela cotação do dia
dessa moeda e mostre a conversão.

Use procedimentos para as conversões e use Flag para encerrar as leituras dos valores em real. */

#include <stdio.h>
#include <stdlib.h>

float converteMoeda(float moeda) {
  float conv, real;
  
  printf("\nDigite o Valor em Real : ");
  scanf("%f", &real);

  return real / moeda;
}

int main() {
  int escolha, flag=1;
  float moeda, conv;

  while(flag==1){
    system("clear");
    printf("Digite a Moeda que deseja converter\n(1)Dólar\t(2)Euro\n(3)Libra\t: ");
    scanf("%d", &escolha);
  
    switch(escolha) {
      case 1:
        printf("\nDigite a Cotação em Dólar : ");
        scanf("%f", &moeda);
        conv = converteMoeda(moeda);
        printf("\nConvertendo para Dólar $%.1f", conv);
        break;
      case 2:
        printf("\nDigite a Cotação em Euro : ");
        scanf("%f", &moeda);
        conv = converteMoeda(moeda);
        printf("\nConvertendo para Euro €%.1f", conv);
        break;
      case 3:
        printf("\nDigite a Cotação em Libra : ");
        scanf("%f", &moeda);
        conv = converteMoeda(moeda);
        printf("\nConvertendo para Libra £%.1f", conv);
        break;
      default:
        printf("Inválido");
        break;
    }
    printf("\n\nDeseja Continuar?\n(1)Sim(2)Não : ");
    scanf("%d", &flag);
  }
}