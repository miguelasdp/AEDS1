/* Faça um programa para ler e armazenar em vetores,
o gênero (masc=1 / fem=2) e a idade de um grupo de 6 pessoas.

Após a leitura dos dados do grupo, mostre:

- as idades de todas as mulheres;

- a média das idades dos homens;

- as idades de todo o grupo. */

#include<stdio.h>
#include<stdlib.h>

int main() {
  int genero[6], idade[6], contFem=0, contMasc=0, somaIdadeMasc=0, i;
  float media;

  for(i=0; i < 6; i++) {
    printf("Digite a Idade : ");
    scanf("%d", &idade[i]);
    printf("Digite o gênero\n(1)Masc (2)Fem : ");
    scanf("%d", &genero[i]);
  }

  for(i=0; i<6; i++) {
    if(genero[i]==1) {
      contMasc++;
      somaIdadeMasc += idade[i];
    }
  }

  for(i=0; i<6; i++) {
    printf("\n%d° Pessoa idade = %d\n", i+1, idade[i]);
    if(genero[i]==2) {
      contFem++;
      printf("\n%d° Mulher idade = %d\n", contFem, idade[i]);
    }
  }
  media = (float)somaIdadeMasc / contMasc;
  printf("\nMédia idade dos homens = %.1f", media);
}