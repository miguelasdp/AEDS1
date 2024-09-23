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