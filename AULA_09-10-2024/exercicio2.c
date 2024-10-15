/* Faça um programa para ler os valores de dois vetores A e B, ambos com N elementos numéricos cada (0<=N<=20).
Gere e mostre o vetor C com os valores de  A e B, intercalados, conforme o exemplo abaixo.

Exemplo:

Supondo que os vetores A e B tenham, cada um, 5 elementos, temos:

A   5 8 3 1 9

B   6 2 7 4 6

C   5 6 8 2 3 7 1 4 9 6 */

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, i;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    if(n<0 || n>20) {
        printf("\nValor inválido\n(Válido entre 0 e 20)");
        return 0;
    }

    int a[n], b[n], c[n+n];

    for(i=0; i<n; i++) {
        printf("\nDigite o numero %d do vetor A: ", i + 1);
        scanf("%d", &a[i]);
        printf("\nDigite o numero %d do vetor B: ", i + 1);
        scanf("%d", &b[i]);
    }

    for(i=0; i<(n*2); i++) {
        if(i % 2 == 0) {
            c[i] = a[i/2];
        } else {
            c[i] = b[i/2];
        }
    }

    printf("\nVETOR C:\n\n");
    for(i=0; i<(n*2); i++) {
        printf("%d\t", c[i]);
    }
    return 0;
}