/* Implemente uma função para calcular o somatório de todos números ímpares de 1 a N 
(onde N deve ser fornecido pelo usuário). A função deve ler como parâmetro de entrada
o valor de N e mostrar o resultado do somatório.

            S = (1 + 5 + 9 + ... + N)

Obs: utilize passagem de parâmetro e retorno.  */

#include <stdio.h>
#include <stdlib.h>

int calcSom(int n) {
    int soma=0;

    for(int i=0; i < n; i++){
        if(i%2==0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int n, result;

    printf("Digite o número limite : ");
    scanf("%d", &n);

    result = calcSom(n);

    printf("Resultado do somatório dos números ímpares = %d", result);
}