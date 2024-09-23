/* Faça um programa que permita calcular qualquer uma das três operações combinatórias:
arranjo simples, combinação ou permutação.

Crie um procedimento para cada cálculo escolhido e utilize de Flag para encerrar o programa. */

#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
  int fat=1;

  for(int i=n; i>1; i--){
    fat *= i;
  }

  return fat;
}

int main() {
    int escolha, flag=1;
    float n, p, result;

    while(flag==1){
        printf("\nQual operação deseja fazer\n(1)Arranjos Simples\n(2)Combinações Simples\n(3)Permutações : ");
        scanf("%d", &escolha);
        switch(escolha) {
            case 1:
                printf("\nDigite o valor de n : ");
                scanf("%f", &n);
                printf("\nDigite o valor de p : ");
                scanf("%f", &p);
                result = fatorial(n)/fatorial(n-p);
                printf("\nArranjo Simples = %.1f\n", result);
                break;
            case 2:
                printf("\nDigite o valor de n : ");
                scanf("%f", &n);
                printf("\nDigite o valor de p : ");
                scanf("%f", &p);
                result = fatorial(n)/(fatorial(p)*fatorial(n-p));
                printf("\nCombinação Simples = %.1f\n", result);
                break;
            case 3:
                printf("\nDigite o valor de n : ");
                scanf("%f", &n);
                result = fatorial(n);
                printf("\nPermutação = %.1f\n", result);
                break;
            default:
                printf("\nValor Inválido!\n");
                break;
        }
        printf("\nDeseja Continuar?\n(1)Sim (2)Não : ");
        scanf("%d", &flag);
    }
}