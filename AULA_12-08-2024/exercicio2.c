/* Faça um programa que calcule e mostre a idade em anos de uma pessoa. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int nasc, ano_atual, idade;

    printf("Digite o Ano em que Nasceu: ");
    scanf("%d", &nasc);

    printf("Digite o Ano Atual: ");
    scanf("%d", &ano_atual);

    idade = ano_atual - nasc;

    printf("Voce tem %d anos", idade);
}