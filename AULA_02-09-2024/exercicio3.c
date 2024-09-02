#include <stdio.h>
#include <stdlib.h>

int main() {
  int num=0, cont=0;

  while(num % 2 != 1){
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 != 1){
      cont++;
    }
  }
  printf("Foram digitados %d numeros pares", cont);
}