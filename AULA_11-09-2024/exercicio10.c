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

void arranjoSimples() {
    float A, n, p, fat, fat2, subtracao;

    printf("\nDigite o valor de n : ");
    scanf("%f", &n);
    printf("\nDigite o valor de p : ");
    scanf("%f", &p);
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

void combSimples() {
    float C, n, p, fat, fat2, fat3, subtracao;

    printf("\nDigite o valor de n: ");
    scanf("%f", &n);
    printf("\nDigite o valor de p: ");
    scanf("%f", &p);
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

void permutacao() {
    float P, n, fat;

    printf("\nDigite o valor de n: ");
    scanf("%f", &n);
    fat = 1;

    for (int i = n; i > 1; i--) {
        fat *= i;
    }

    printf("\nPermutações: %f\n", fat);
}

int main() {
    int escolha, flag=1;
    
    while(flag==1){
        printf("\nQual operação deseja fazer\n(1)Arranjos Simples\n(2)Combinações Simples\n(3)Permutações : ");
        scanf("%d", &escolha);
        switch(escolha) {
            case 1:
                arranjoSimples();
                break;
            case 2:
                combSimples();
                break;
            case 3:
                permutacao();
                break;
            default:
                printf("\nValor Inválido!\n");
                break;
        }
        printf("\nDeseja Continuar?\n(1)Sim (2)Não : ");
        scanf("%d", &flag);
    }
}
