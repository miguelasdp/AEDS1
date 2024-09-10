/* A conversão de graus Farenheit para Centígrados é obtida por  

C = 5/9 ( F - 32 ) .

Utilizando a estrutura de repetição FOR, implemente um programa que calcule e escreva uma tabela
de graus Centígrados em função de graus Farenheit, que variam de 50 a 100, de 5 em 5. */

#include <stdio.h>
#include <stdlib.h>

int main() {
int farenheit;
float centigrados;

for(farenheit = 50; farenheit <= 100; farenheit+=5){
centigrados = (farenheit - 32) * 5/9;
printf("|%d Farenheit = %.1f° Centigrados|\n", farenheit, centigrados);
}
}

 