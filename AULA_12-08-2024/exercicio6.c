/* Faça um programa que leia as idades de 3 pessoas
    e ao término mostre a média das idades lidas. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float idade1, idade2, idade3, media;

    printf("Digite a Primeira Idade: ");
    scanf("%f", &idade1);

    printf("Digite a Segunda Idade: ");
    scanf("%f", &idade2);

    printf("Digite a Terceira Idade: ");
    scanf("%f", &idade3);

    media = (idade1+idade2+idade3)/3;
    printf("%.1f", media);
}