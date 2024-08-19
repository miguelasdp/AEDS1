#include <stdio.h>
#include <math.h>

int main() {
  int distancia, tempo, velocidade, escolha;
  
  printf("Qual operação deseja realizar?\n");
  printf("[1] Distancia\n");
  printf("[2] Tempo\n");
  printf("[3] Velocidade\n");
  scanf("%d", &escolha);
  
  switch(escolha) {
    case 1:
      printf("\nDigite a Velocidade: ");
      scanf("%d", &velocidade);
      printf("\nDigite o Tempo: ");
      scanf("%d", &tempo);

      distancia = velocidade * tempo;
      printf("\nA distancia e: %d", distancia);
    break;
    case 2:
      printf("\nDigite a Velocidade: ");
      scanf("%d", &velocidade);
      printf("\nDigite a Distancia: ");
      scanf("%d", &distancia);

      tempo = distancia / velocidade;
      printf("\nO tempo e: %d", tempo);
    break;
    case 3:
      printf("\nDigite a Distancia: ");
      scanf("%d", &distancia);
      printf("\nDigite o Tempo: ");
      scanf("%d", &tempo);

      velocidade = distancia / tempo;
      printf("\nA velocidade é: %d", velocidade);
    break;
    default:
      printf("Operacao invalida!\n");
    break;
  }
}