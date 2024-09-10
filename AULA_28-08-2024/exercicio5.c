/* Faça um programa para ler os votos (sim=1 / não=2) e o gênero (mas=1 / fem=2) de um grupo de 7 pessoas.

Ao final mostre:

A ocorrência de sim e de não nas respostas;
O número de mulheres e o número de homens;
O número de mulheres que responderam sim;
O número de homens que responderam não; */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int contador=0, cont_mulheres=0, cont_homens=0, cont_sim=0, cont_nao=0, cont_mulheres_sim=0, cont_homens_nao=0, voto, genero;

  while(contador < 7){
    printf("Vote Aqui\n(1)Sim \t(2)Não\t");
    scanf("%d",&voto);
    printf("Seu Gênero\n(1)Masculino \t(2)Feminino\t");
    scanf("%d",&genero);

    if(voto == 1){
      cont_sim++;
    } else if(voto == 2){
      cont_nao++;
    }

    if(genero == 1){
      cont_homens++;
    } else if(genero == 2){
      cont_mulheres++;
    }

    if(genero == 2 && voto == 1){
      cont_mulheres_sim++;
    } else if(genero == 1 && voto == 2){
      cont_homens_nao++;
    } 
    contador++;
  }
  printf("\n%d pessoas votaram sim\n", cont_sim);
  printf("%d pessoas votaram não\n", cont_nao);
  printf("\nnumero de mulheres: %d\n", cont_mulheres);
  printf("numero de homens: %d\n", cont_homens);
  printf("\nnumero de mulheres que votaram sim: %d\n", cont_mulheres_sim);
  printf("\nnumero de homens que votaram nao: %d\n", cont_homens_nao);
}