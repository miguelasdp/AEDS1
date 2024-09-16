/* Faça um programa que permita executar qualquer um dos cálculos combinatórios abaixo:

arranjos simples;
combinações simples;
permutações.
Onde:

A(n,p) = n ! / ( n-p ) !

C(n,p) =  n ! / p ! ( n-p ) !

P(n) = n !

Utilize de método com passagem de parâmetro(s) e sem retorno. */

#include <stdio.h>
#include <stdlib.h>

void arranjoSimples(int n, int p) {
    float A, fat, fat2, subtracao;

    fat = 1;
    fat2 = 1;
    subtracao = n - p;

    for (int i = n; i > 1; i--) {
        fat *= i;
    }
    for (int i = subtracao; i > 1; i--) {
        fat2 *= i;
    }

    A = fat / fat2;
    printf("\nArranjos Simples: %.1f\n", A);
}

void combSimples(int n, int p) {
    float C, fat, fat2, fat3, subtracao;

    
    if (p > n) {
        printf("\nO valor de p não pode ser maior que n!\n");
    } else {
        fat = 1;
        fat2 = 1;
        fat3 = 1;
        subtracao = n - p;

        for (int i = n; i > 1; i--) {
            fat *= i;
        }
        for (int i = p; i > 1; i--) {
            fat3 *= i;
        }
        for (int i = subtracao; i > 1; i--) {
            fat2 *= i;
        }

        C = fat / (fat3 * fat2);
        printf("\nCombinações Simples: %.1f\n", C);
    }
}

void permutacao(int n) {
    float P, fat;

    fat = 1;

    for (int i = n; i > 1; i--) {
        fat *= i;
    }

    printf("\nPermutações: %.1f\n", fat);
}

int main() {
    int escolha, flag=1;
    float n, p;

    while(flag==1){
        printf("\nQual operação deseja fazer\n(1)Arranjos Simples\n(2)Combinações Simples\n(3)Permutações : ");
        scanf("%d", &escolha);
        switch(escolha) {
            case 1:
                printf("\nDigite o valor de n : ");
                scanf("%f", &n);
                printf("\nDigite o valor de p : ");
                scanf("%f", &p);
                arranjoSimples(n, p);
                break;
            case 2:
                printf("\nDigite o valor de n: ");
                scanf("%f", &n);
                printf("\nDigite o valor de p: ");
                scanf("%f", &p);
                combSimples(n, p);
                break;
            case 3:
                printf("\nDigite o valor de n: ");
                scanf("%f", &n);
                permutacao(n);
                break;
            default:
                printf("\nValor Inválido!\n");
                break;
        }
        printf("\nDeseja Continuar?\n(1)Sim (2)Não : ");
        scanf("%d", &flag);
    }
}