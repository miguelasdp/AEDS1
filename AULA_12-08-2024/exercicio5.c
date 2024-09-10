/* Faça um programa que calcule e mostre a área de um cubo. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float base, area;

    printf("Digite a Base: ");
    scanf("%f", &base);

    area = 6*(pow(base,2));
    printf("%.1f", area);
}