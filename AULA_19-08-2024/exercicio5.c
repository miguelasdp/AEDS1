/* Faça um programa que funcione como uma calculadora entre dois 
números quaisquer, que permita escolher calcular a soma, subtração,
divisão ou multiplicação entre eles. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2, operacao;

  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  printf("Digite o segundo número: ");
  scanf("%d", &num2);

  printf("Qual operação deseja realizar?\n");
  printf("[1] Soma\n");
  printf("[2] Subtracao\n");
  printf("[3] Divisao\n");
  printf("[4] Multiplicacao\n");
  scanf("%d", &operacao);

  switch(operacao) {
    case 1:
      printf("Resultado: %d\n", num1 + num2);
    break;
    case 2:
      printf("Resultado: %d\n", num1 - num2);
    break;
    case 3:
      printf("Resultado: %d\n", num1 / num2);
    break;
    case 4:
      printf("Resultado: %d\n", num1 * num2);
    break;
    default:
      printf("Operacao invalida!\n");
    break;
  }
}