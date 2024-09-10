/* Utilizando a estrutura de repetição FOR,  faça um programa que leia uma série de 10 números
e ao término informe a quantidade de números pares e a quantidade de números impares desta série. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num, cont_par=0, cont_impar=0;

  for(int i=0; i<10; i++){
    printf("Digite o %dº número: ", i+1);
    scanf("%d", &num);

    if(num%2==0)
      cont_par++;
    else
      cont_impar++;
  }
  printf("Quantidade de números pares: %d\n", cont_par);
  printf( "Quantidade de números ímpares: %d\n", cont_impar);
}