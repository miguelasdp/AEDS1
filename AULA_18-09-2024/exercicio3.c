/* Faça um programa que calcule qualquer uma das áreas abaixo:

- quadrado; - retângulo; - cubo; - triângulo retângulo. 

Utilize de procedimentos para os cálculos realizados e utilize Flag para encerrar o programa. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadrado() {
  float l, area;

  printf("\nDigite o valor da Base ou Altura : ");
  scanf("%f", &l);

  area = pow(l,2);

  printf("\nAréa do Quadrado = %.1f", area);
}

void retangulo() {
    float b, h, area;

    printf("\nDigite o valor da Base : ");
    scanf("%f", &b);
    printf("\nDigite o valor da Altura : ");
    scanf("%f", &h);

    area = b * h;

    printf("\nÁrea do Retângulo = %.1f", area);
}

void cubo() {
    float a, area;

    printf("\nDigite o valor da Aresta : ");
    scanf("%f", &a);

    area = pow((6*a),2);

    printf("\nÁrea total do cubo = %.1f", area);
}

void triRetang() {
    float b, h, area;

    printf("\nDigite o valor da Base : ");
    scanf("%f", &b);
    printf("\nDigite o valor da Altura : ");
    scanf("%f", &h);

    area = (b*h) / 2;

    printf("\nÁrea do Triângulo Retângulo = %.1f", area);
}

int main() {
    int escolha, flag=1;;

    while(flag==1){
        printf("\nQual Área deseja calcular?\n(1)Quadrado\n(2)Retângulo\n(3)Cubo\n(4)Triângulo Retângulo : ");
        scanf("%d", &escolha);
        switch(escolha) {
            case 1:
                quadrado();
                break;
            case 2:
                retangulo();
                break;
            case 3:
                cubo();
                break;
            case 4:
                triRetang();
                break;
            default:
                  printf("\nValor Inválido!\n");
                break;
        }
        printf("\n\nDeseja Continuar?\n(1)Sim (2)Não : ");
        scanf("%d", &flag);
    }
}