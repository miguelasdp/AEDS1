#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float velocidade, tempo, distancia;

    printf("Digite o Tempo: ");
    scanf("%f", &tempo);

    printf("Digite a velocidade: ");
    scanf("%f", &velocidade);

    distancia = velocidade * tempo;
    printf("%.1f", distancia);
}