#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura, area;

    printf("Digite a Base: ");
    scanf("%f", &base);

    printf("Digite a Altura: ");
    scanf("%f", &altura);

    area = (base*altura);
    printf("%.1f", area);
}