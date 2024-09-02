#include <stdio.h>
#include <stdlib.h>

int main() {
  int flag=1, media_consumo, consumo, soma_consumo=0, cont_pessoas=0, maior_consumo=0, menor_consumo=10000;

  while(flag==1) {
    printf("Digite o consumo de água : ");
    scanf("%d", &consumo);

    cont_pessoas++;
    soma_consumo = soma_consumo + consumo;
    
    if(consumo>maior_consumo){
      maior_consumo = consumo;
    }
    if(consumo<menor_consumo){
      menor_consumo = consumo;
    }

    printf("Deseja Continuar?\n(1)Sim (2)Não : ");
    scanf("%d", &flag);
  }
  media_consumo = soma_consumo/cont_pessoas;

  printf("\nA média de consumo de água é %d", media_consumo);
  printf("\nNumero de pessoas analisadas: %d", cont_pessoas);
  printf("\nMaior consumo de água: %d", maior_consumo);
  printf("\nMenor consumo de água: %d", menor_consumo);
}