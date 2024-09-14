/* Faça um programa para ler o voto sim ou não de um conjunto de pessoas e
ao término informe a ocorrência de cada tipo de voto.

Use um flag para encerrar a repetição.

Utilize de um método sem passagem de parâmetro(s) e sem retorno.

*/

#include <stdio.h>
#include <stdlib.h>

void voto() {
  int voto, cont_sim=0, cont_nao=0, flag=1;

  while(flag == 1){
    printf("Digite seu voto\n(1)Sim (2)Não : ");
    scanf("%d", &voto);

    if(voto==1){
      cont_sim++;
    } else if(voto==2){
      cont_nao++;
    }

    printf("Deseja Continuar?\n(1)Sim (2)Não : ");
    scanf("%d", &flag);
  }
  printf("\nQuantidade votos sim = %d", cont_sim);
  printf("\nQuantidade votos não = %d", cont_nao);
}

int main() {
  voto();
}