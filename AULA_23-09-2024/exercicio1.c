/* Escreva um procedimento que recebe 3 valores reais X, Y e Z e que
verifique se esses valores podem ser os comprimentos dos lados de um triângulo e,
neste caso, exibe qual é o tipo de triângulo formado. Para que X, Y e Z formem um
triângulo é necessário que a seguinte propriedade seja satisfeita: o comprimento de
cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados.
O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições: 

-Triângulo Equilátero: os comprimentos dos 3 lados são iguais;
-Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais. 
-Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.

Faça um programa que leia um número indeterminado de triângulos (valores dos 3 lados)
e para cada triângulo, acione o procedimento. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void tipoTriang(int x, int y, int z) {
    if(x == y && y==z) {
        printf("Triângulo Equilátero");
    } else if(x==y || y==z || x==z) {
        printf("Triângulo  Isósceles");
    } else {
        printf("Triângulo Escaleno");
    }
}

int main() {
   int x, y, z;

    printf("Digite o 1° lado : ");
    scanf("%d", &x);
    printf("Digite o 2° lado : ");
    scanf("%d", &y);
    printf("Digite o 3° lado : ");
    scanf("%d", &z);

    tipoTriang(x, y, z);
}