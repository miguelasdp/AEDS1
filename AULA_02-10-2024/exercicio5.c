/* Faça um programa para armazenar em um vetor o preço de
um produto pesquisado em 7 lojas.

Após o armazenamento de todos os preços, mostre:

- todos os preços coletados nas lojas;

- a média dos preços encontrados;

- o menor preço encontrado;

- o maior preço encontrado;

- a diferença entre o maior e o menor preço pesquisado. */

#include<stdio.h>
#include<stdlib.h>

int main() {
  int preco[7], somaPreco=0, maiorPreco, menorPreco, dif, i;
  float mediaPreco;

  for(i=0; i<7; i++) {
    printf("Digite o preço na %d° loja : ", i+1);
    scanf("%d", &preco[i]);
  }

  for(i=0; i<7; i++) {
    somaPreco += preco[i];

    if(i==0) {
      maiorPreco = preco[i];
      menorPreco = preco[i];
    }
    if(preco[i] > maiorPreco) {
      maiorPreco = preco[i];
    }
    if(preco[i] < menorPreco) {
      menorPreco = preco[i];
    }
  }
  mediaPreco = somaPreco / 7.0;
  dif = maiorPreco - menorPreco;

  for(i=0; i<7; i++) {
    printf("\n%d° Preço Registrado = %d", i+1, preco[i]);
  }

  printf("\nMédia dos preços = %.1f", mediaPreco);
  printf("\nMenor preço = %d", menorPreco);
  printf("\nMaior preço = %d", maiorPreco);
  printf("\nDiferença entre maior e menor preço = %d", dif);
}