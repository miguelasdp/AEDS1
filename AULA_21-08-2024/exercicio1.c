#include <stdio.h>
#include <math.h>

int main() {
  int vel_max, vel_mot, multa;

  printf("Digite a velocidade máxima permitida: ");
  scanf("%d", &vel_max);
  printf("Digite a velocidade do motorista: ");
  scanf("%d", &vel_mot);

  if (vel_mot > vel_max) {
    if (vel_mot <= vel_max + 10) {
      multa = 50;
      printf("Você foi multado em R$%d,00", multa);
    } else if (vel_mot <= vel_max + 30) {
      multa = 100;
      printf("Você foi multado em R$%d,00", multa);
    } else if(vel_mot > vel_max + 30) {
      multa = 200;
      printf("Você foi multado em R$%d,00", multa);
    }
  }
}