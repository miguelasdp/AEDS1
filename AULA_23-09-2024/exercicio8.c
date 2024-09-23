/* Faça um programa que calcule a conversão de graus centígrados para fahrenheit e vice versa.

Pergunte qual a opção desejada (centígrado para fahrenheit) ou (fahrenheit para centígrado) e 
o valor da temperatura a ser convertida.

Use flag.

Obs: utilize passagem de parâmetro e retorno. */

#include<stdio.h>
#include<stdlib.h>

float convTemp(float temp, int escolha) {
  if(escolha==1) {
    return (temp * 1.8) + 32.0;
  } else if(escolha==2) {
    return (temp - 32) * 5.0 / 9.0;
  }
  return 0;
}

int main() {
  int escolha, flag=1;
  float temp, conv;

  while(flag==1) {
    printf("\nA temperatura que deseja converter : ");
    scanf("%f", &temp);
    printf("\nQual a opção desejada?\n(1)Centígrado para Fahrenheit\n(2)Fahrenheit para Centígrado : ");
    scanf("%d", &escolha);

    conv = convTemp(temp, escolha);

    printf("\nTemperatura convertida = %.1f\n", conv);

    printf("\nDeseja continuar?\n(1)Sim (2)Não : ");
    scanf("%d", &flag);
  }
}