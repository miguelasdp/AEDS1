#include <stdio.h>
#include <math.h>

int main() {
  int escolha;
  float salario_atual, novo_salario;

  printf("Digite o salário atual do funcionário: ");
  scanf("%f", &salario_atual);

  printf("\n(1). Aumento de 8%%\n");
  printf("\n(2). Aumento de 11%% no salário\n");
  printf("\n(3). Aumento fixo no salário\n\n");
  scanf("%d", &escolha);

  switch(escolha) {
    case 1: 
      novo_salario = salario_atual * 1.08;
      printf("\n Novo salário será de: R$%.2f", novo_salario);
    break;
    case 2:
      novo_salario = salario_atual * 1.11;
      printf("\n Novo salário será de: R$%.2f", novo_salario);
    break;
    case 3:
      if(salario_atual <= 1000) {
        novo_salario = salario_atual + 350;
      } else if(salario_atual > 1000) {
        novo_salario = salario_atual + 200;
      }
      printf("\n Novo salário será de: R$%.2f", novo_salario);
  }
}