/* Faça um programa para ler a idade, o gênero (masc=1/fem=2) e o peso de 5 pessoas.

Após as leituras dos dados mostre:

O número de homens e o número de mulheres;
A média dos pesos dos homens;
A média das idades das mulheres;
A média do peso e das idades do grupo; */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int contador=0, idade, genero;
  float peso, cont_homens=0, cont_mulheres=0, media_idades=0, media_pesos, media_peso_homem=0, media_idade_mulher=0;

  while(contador < 5){
    printf("Idade : ");
    scanf("%d", &idade);
    printf("Genero (1).Masculino  (2).Feminino : ");
    scanf("%d", &genero);
    printf("Peso : ");
    scanf("%f", &peso);

    if(genero == 1) {
      cont_homens++;
      media_peso_homem = media_peso_homem + peso;
    } else if(genero == 2){
      cont_mulheres++;
      media_idade_mulher = media_idade_mulher + idade;
    }

    media_idades = media_idades + idade;
    media_pesos = media_pesos + peso;

    contador++;
  }
  media_idades = media_idades / 5;
  media_pesos = media_pesos / 5;

  media_peso_homem = media_peso_homem / cont_homens;
  media_idade_mulher = media_idade_mulher / cont_mulheres;

  printf("\n%.0f Homens\n%.0f Mulheres" , cont_homens, cont_mulheres);
  printf("\nMedia Peso dos Homens : %.2f\nMedia Idade das Mulheres : %.0f", media_peso_homem, media_idade_mulher);
  printf("\nMedia do Peso Geral : %.2f\nMedia da Idade Geral : %.2f", media_pesos, media_idades);
}