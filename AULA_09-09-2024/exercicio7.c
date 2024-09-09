#include <stdio.h>
#include <stdlib.h>

int main() {
  int flag, num, cont_pos=0, cont_neg=0, cont_zero=0;

  printf("Quantos numeros deseja digitar? ");
  scanf("%d", &flag);

  for(int i=0; i<flag; i++){
    printf("Digite o %d° numero: ", i+1);
    scanf("%d", &num);

    if(num>0){
      cont_pos++;
    } else if(num<0){
      cont_neg++;
    } else {
      cont_zero++;
    }
  }
  printf("Positivos: %d\nNegativos: %d\nZeros: %d", cont_pos, cont_neg, cont_zero);
}