/* Faça um programa que calcule e mostre a velocidade
 de deslocamento de um móvel, onde  v = d/t . */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float velocidade, tempo, distancia;

    printf("Digite o Tempo: ");
    scanf("%f", &tempo);

    printf("Digite a Distancia: ");
    scanf("%f", &distancia);

    velocidade = distancia / tempo;
    printf("%.1f", velocidade);
}