/* Faça uma função que recebe a idade de um nadador por parâmetro e mostra
a categoria desse nadador de acordo com a tabela abaixo.


Idade(anos)     Categoria

5 a 7           F
8 a 10          E
11 a 13         D
14 a 15         C
16 a 17         B
Acima de 18     A

 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void categoria(int idade) {
    if(idade >= 5 && idade <=7) {
        printf("Categoria F");
    } else if(idade >= 8 && idade <= 10) {
        printf("Categoria E");
    } else if(idade >= 11 && idade <= 13) {
        printf("Categoria D");
    } else if(idade >= 14 && idade <= 15) {
        printf("Categoria C");
    } else if(idade >= 16 && idade <= 17) {
        printf("Categoria B");
    } else if(idade >= 18) {
        printf("Categoria A");
    }
}

int main() {
    int idade;

    printf("Digite a idade do(a) nadador(a) : ");
    scanf("%d", &idade);
    categoria(idade);
}