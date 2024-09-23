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