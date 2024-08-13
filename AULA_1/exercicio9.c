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