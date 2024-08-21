#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, resultado;

    printf("Digite o Primeiro Numero: ");
    scanf("%d", &num1);

    printf("Digite o Segundo Numero: ");
    scanf("%d", &num2);

    printf("Digite o Terceiro Numero: ");
    scanf("%d", &num3);

    resultado = num1+num2+num3;
    printf("A soma dos numeros e %d", resultado);
}