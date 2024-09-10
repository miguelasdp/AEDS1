/* Faça um programa que calcule e mostre a área 
de um triângulo retangulo, onde at = (b x h) /2 . */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura, at;

    printf("Digite a Base: ");
    scanf("%f", &base);

    printf("Digite a Altura: ");
    scanf("%f", &altura);

    at = (base*altura)/2;
    printf("%.1f", at);
}