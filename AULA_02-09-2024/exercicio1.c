#include <stdio.h>
#include <stdlib.h>

int main() {
  int flag=1, lado, cont_cara=0, cont_coroa=0;

  while(flag==1){
    printf("Digite 1 para cara e 2 para coroa: ");
    scanf("%d", &lado);

    if(lado==1){
      cont_cara++;
    }else if(lado==2){
      cont_coroa++;
    }

    printf("Deseja continuar? (1) Sim e (2) Não: ");
    scanf("%d", &flag);
  }
  printf("Numero de Cara: %d\n", cont_cara);
  printf("Numero de Coroa: %d\n", cont_coroa);
}