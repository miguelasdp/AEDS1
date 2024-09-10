/* Faça um programa que calcule e mostre o tempo 
de deslocamento de um móvel, onde t = d/v . */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float velocidade, tempo, distancia;

    printf("Digite o Distancia: ");
    scanf("%f", &distancia);

    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);

    tempo = distancia / velocidade;
    printf("%.1f", tempo);
}