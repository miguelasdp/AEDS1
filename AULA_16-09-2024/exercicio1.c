/* Faça um programa que leia os dados de uma série de 10 números quaisquer e 
após a leitura mostre a quantidade de números ímpares, a quantidade de números pares e a média desta série.

Utilize de método com passagem de parâmetro(s) e sem retorno. */

#include <stdio.h>
#include <stdlib.h>

void serieNumeros(int n) {
  int num, cont_par=0, cont_impar=0;
  float media, soma=0;

  for(int i=0; i < n; i++){
    printf("Digite o %d° número : ", i+1);
    scanf("%d", &num);

    soma += num;

    if(num%2 == 0){
      cont_par++;
    } else {
      cont_impar++;
    }
  }
  media = soma / n;

  printf("\nQuantidade Ímpares = %d", cont_impar);
  printf("\nQuantidade Pares = %d", cont_par);
  printf("\nMédia dos números = %.1f", media);
}

int main() {
    int n=10;
    serieNumeros(n);
}