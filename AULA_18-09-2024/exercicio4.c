/* Escreva uma função que receba como parâmetro um valor n inteiro positivo,
calcule e mostre o valor da soma S, definida pela equação abaixo:

 

S = ( 1 + 1/2 + 1/3 + 1/4 +…+ 1/n ) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void somaFrac(int n) {
    float soma=0;

    for(int i=1; i <= n; i++) {
        soma = soma + (1.0/i);
    }

    printf("A soma é %.1f", soma);
}

int main() {
    int n;
    printf("Digite o valor de N : ");
    scanf("%d", &n);
    somaFrac(n);
}