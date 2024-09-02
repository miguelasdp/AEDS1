#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, cont_num=0, media_num, soma_num=0, maior_num=0, menor_num=100000, flag=1;

  while(flag==1){
    printf("Digite um numero: ");
    scanf("%d", &num);

    soma_num = soma_num + num;
    cont_num++;
    
    if(num > maior_num){
      maior_num = num;
    }
    if(num < menor_num){
      menor_num = num;
    }

    printf("Deseja Continuar?\n(1)Sim (2)Não : ");
    scanf("%d", &flag);
  }
  media_num = soma_num / cont_num;

  printf("Media dos numeros: %d\n", media_num);
  printf("Maior Numero: %d\n", maior_num);
  printf("Menor Numero: %d\n", menor_num);
}