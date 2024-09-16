/* Faça um programa para ler um conjunto de temperaturas em graus Celsius
e mostre cada temperatura lida graus Fahrenheit.

Use um flag para encerrar a repetição.

Utilize de método com passagem de parâmetro(s) e sem retorno. */

#include <stdio.h>
#include <stdlib.h>

void convertTemp(int flag) {
  float celsius, fahrenheit;

  while(flag==1){
    printf("\nDigite a temperatura em Graus Celsius : ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 1.8 + 32;

    printf("\nGraus Celsius = %.1f | Fahrenheit = %.1f", celsius, fahrenheit);

    printf("\nDeseja Continuar?\n(1)Sim (2)Não : ");
    scanf("%d", &flag);
  }
}

int main() {
    int flag=1;
  convertTemp(flag);
}