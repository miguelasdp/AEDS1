#include <stdio.h>
#include <stdlib.h>

int main() {
  int flag=1, consumidor, soma_residencia=0, soma_comercio=0, cont_residencia=0, cont_comercio=0, media_cons_res, media_cons_com, media_total;

  while (flag==1) {
    printf("Digite o tipo de Consumidor\n(1)Residência (2)Comércio : ");
    scanf("%d", &consumidor);
    
    if(consumidor==1){
      printf("\nDigite o consumo de energia: ");
      scanf("%d", &soma_residencia);

      soma_residencia = soma_residencia + soma_residencia;

      cont_residencia++;
    } else if(consumidor==2){
      printf("\nDigite o consumo de energia: ");
      scanf("%d", &soma_comercio);

      soma_comercio = soma_comercio + soma_comercio;
      
      cont_comercio++;
    }

    printf("Deseja Continuar?\n(1)Sim (2)Não : ");
    scanf("%d", &flag);
  }

  printf("\nConsumidor Residência: %d", cont_residencia);
  printf("\nConsumidor Comércio: %d", cont_comercio);

  media_cons_res = soma_residencia / cont_residencia;
  media_cons_com = soma_comercio / cont_comercio;
  media_total = (soma_residencia+soma_comercio) / (cont_residencia+cont_comercio);

  printf("\nMédia de consumo Residência: %d", media_cons_res);
  printf("\nMédia de consumo Comércio: %d", media_cons_com);
  printf("\nMédia de consumo do Bairro: %d", media_total);
}