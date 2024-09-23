/* Utilizando uma função, implemente o programa que calcule e escreva a  
soma das N primeiras frações da série abaixo. Leia o valor de N.

soma = (1/1 + 4/2 + 7/3 + 10/4 + ... )

Obs: utilize passagem de parâmetro e retorno.  */

#include <stdio.h>
#include <stdlib.h>

int calcFrac(int n) {
    int  num1=1, num2=1;
    float soma=0;

    for(int i=0; i < n; i++) {
        soma += (float)num1/(float)num2;
        num1 += 3;
        num2++; 
    }
    return soma;
}

int main() {
    int n;
    float result;

    printf("Digite o número de frações : ");
    scanf("%d", &n);

    result = calcFrac(n);

    printf("Resultado do somatório das Frações = %.1f", result);
}