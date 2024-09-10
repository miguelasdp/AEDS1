/* Faça um programa que leia um valor qualquer em reais (R$)
 e após converta este valor para dólar (US$) e também para o euro(E$).
    Para tal, pergunte as cotações do dia do dólar e do euro e mostre
 os valores convertidos para essas moedas. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float euro, dolar, real, conv1, conv2;

    printf("Digite a Cotacao do Euro: ");
    scanf("%f", &euro);

    printf("Digite a Cotacao do Dolar: ");
    scanf("%f", &dolar);

    printf("Digite o valor em Real que deseja Converter: ");
    scanf("%f", &real);

    conv1 = real / euro;
    conv2 = real / dolar;

    printf("Em Euro voce teria %.1f em Dolar teria %.1f", conv1, conv2);
}