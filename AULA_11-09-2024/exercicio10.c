/* Faça um programa que permita executar qualquer um dos cálculos combinatórios abaixo:

arranjos simples;
combinações simples;
permutações.
Onde:

A(n,p) = n ! / ( n-p ) !

C(n,p) =  n ! / p ! ( n-p ) !

P(n) = n !

Utilize de método sem passagem de parâmetro(s) e sem retorno. */

#include <stdio.h>
#include <stdlib.h>

void calculoCombinatorio() {
  int escolha;
  float A, C, P, n, p, flag=1, fat, fat2, fat3, sub;

  while(flag==1) {
    printf("\nQual operação deseja fazer\n(1)Arranjos Simples\n(2)Combinações Simples\n(3)Permutações : ");
    scanf("%d", &escolha);

    switch(escolha) {
      case 1:
        printf("Digite o valor de n : ");
        scanf("%f", &n);
        printf("Digite o valor de p : ");
        scanf("%f", &p);
        fat = 1;
            fat2 = 1;
            sub = n - p;

            for (int i = n; i > 1; i--) {
                fat *= i;
            }
            for (int i = sub; i > 1; i--) {
                fat2 *= i;
            }

            A = fat / fat2;
            printf("\nArranjos Simples: %.1f\n", A);
            break;

        case 2:
            printf("Digite o valor de n: ");
            scanf("%f", &n);
            printf("Digite o valor de p: ");
            scanf("%f", &p);
            if (p > n) {
                printf("O valor de p não pode ser maior que n!\n");
                break;
            }
            fat = 1;
            fat2 = 1;
            fat3 = 1;
            sub = n - p;

            for (int i = n; i > 1; i--) {
                fat *= i;
            }
            for (int i = p; i > 1; i--) {
                fat3 *= i;
            }
            for (int i = sub; i > 1; i--) {
                fat2 *= i;
            }

            C = fat / (fat3 * fat2);
            printf("\nCombinações Simples: %.1f\n", C);
            break;

        case 3:
            printf("Digite o valor de n: ");
            scanf("%f", &n);
            fat = 1;

            for (int i = n; i > 1; i--) {
                fat *= i;
            }

            printf("\nPermutações: %f\n", fat);
            break;
      }
      printf("Deseja Continuar?\n(1)Sim (2)Não : ");
      scanf("%d", &flag);
    }
}

int main() {
  calculoCombinatorio();
}