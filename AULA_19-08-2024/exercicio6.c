/* Faça um programa que permita calcular qualquer uma das áreas escolhidas abaixo:

- área do quadrado;

- área do retângulo;

- área do cubo;

- área do triangulo retângulo; */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int b, h, escolha;
  float cubo;

  printf("Digite a Base: ");
  scanf("%d", &b);
  printf("Digite a Altura: ");
  scanf("%d", &h);

  printf("Qual operação deseja realizar?\n");
  printf("[1] área do quadrado\n");
  printf("[2] área do retângulo\n");
  printf("[3] área do cubo\n");
  printf("[4] área do triangulo retângulo;\n");
  scanf("%d", &escolha);

  cubo = 6*pow(b, 2);
  
  switch(escolha) {
    case 1:
      printf("Resultado: %d\n", b * h);
    break;
    case 2:
      printf("Resultado: %d\n", b * h);
    break;
    case 3:
      printf("Resultado: %.0f\n", cubo);
    break;
    case 4:
      printf("Resultado: %d\n", b * h / 2);
    break;
    default:
      printf("Operacao invalida!\n");
    break;
  }
}