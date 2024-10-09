/* Faça um programa para apurar uma pesquisa sobre as eleições onde 
concorrem os candidatos (João = 1 / Ana = 2). 

Após ler o voto, a idade e o gênero (Masc=1 / Fem=2) de todos os 5
eleitores e armazenar estes dados em vetores, mostre:

a) a média das idades dos eleitores;

b) o número de votos de cada candidato;

c) as idades das mulheres que votaram na Ana;

d) as idades dos homens que votaram no José;

e) o candidato vencedor e a quantidade de votos que ele teve de cada gênero; */

#include<stdio.h>
#include<stdlib.h>

int main() {
  int voto[5], idade[5], genero[5], contJose=0, votosJoseFem=0, votosJoseMasc=0, votosAnaFem=0, votosAnaMasc=0, contAna=0, somaIdade=0, i;
  float mediaIdade;

  for(i=0; i<5; i++) {
    printf("\nDigite seu voto\n(1)José (2)Ana : ");
    scanf("%d", &voto[i]);
    printf("\nDigite sua idade : ");
    scanf("%d", &idade[i]);
    printf("\nDigite seu gênero\n(1)Masc (2)Fem : ");
    scanf("%d", &genero[i]);
  }

  for(i=0; i<5; i++) {
    if(voto[i]==1) {
      contJose++;
      if(genero[i]==1){
        votosJoseMasc++;
      } else if(genero[i]==2) {
        votosJoseFem++;
      }
    } else if(voto[i]==2) {
      contAna++;
      if(genero[i]==1){
        votosAnaMasc++;
      } else if(genero[i]==2) {
        votosAnaFem++;
      }
    }
    somaIdade += idade[i];
  }

  for(i=0; i<5; i++) {
    if((genero[i]==1) && (voto[i]==1)) {
      printf("\nVotou no José e é homem\nIdade = %d", idade[i]);
    } else if((genero[i]==2) && (voto[i]==2)) {
      printf("\nVoto na Ana e é mulher\nIdade = %d", idade[i]);
    }
    
  }
  mediaIdade = somaIdade / 5;

  printf("\n\nMédia da idade dos eleitores = %.1f", mediaIdade);
  printf("\nVotos José = %d", contJose);
  printf("\nVotos Ana = %d", contAna);

  if(contJose > contAna) {
    printf("\nJosé Ganhou\nVotos Fem = %d\tVotos Masc = %d", votosJoseFem, votosJoseMasc);
  } else if(contJose < contAna) {
    printf("\nAna Ganhou\nVotos Fem = %d\tVotos Masc = %d", votosAnaFem, votosAnaMasc);
  }
}