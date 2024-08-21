#include <stdio.h>
#include <math.h>

int main() {
  float diaria, diaria_prom, ocupacao, ocupacao_prom, diferenca, cap_max = 75, valor_prom, valor;

  ocupacao = (cap_max / 100) * 50;
  ocupacao_prom = (cap_max / 100) * 80;

  printf("Qual o valor da diária? ");
  scanf("%f", &diaria);

  diaria_prom = diaria - (diaria * 0.25);

  printf("Diária Promocional: R$%.0f", diaria_prom);

  valor_prom = diaria_prom * ocupacao_prom;

  printf("\no valor total arrecadado com 80%% de ocupação e diária promocional: R$%.0f", valor_prom);

  valor = diaria * ocupacao;
  printf("\no valor total arrecadado com 50%% de ocupação e diária normal: R$%0.f", valor);

  diferenca = valor_prom - valor;

  printf("\nDiferença de R$%.0f", diferenca);
}