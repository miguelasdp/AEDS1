/* Faça um programa que leia o preço de um mesmo produto em 7 lojas
diferentes e após mostre:  o menor e o maior preços encontrados e a média dos preços entre as lojas.

Utilize de método com passagem de parâmetro(s) e sem retorno. */

    #include <stdio.h>
    #include <stdlib.h>

    void compararProduto(int n) {
      float preco, soma=0, menor_preco, maior_preco, media;

      for(int i=0; i < n; i++){
        printf("Preço do produto na Loja %d : ", i+1);
        scanf("%f", &preco);

        soma += preco;

        if(i==0){
          maior_preco = preco;
          menor_preco = preco;
        }
        if(preco > maior_preco) {
          maior_preco = preco;
        } else if(preco < menor_preco) {
          menor_preco = preco;
        }
      }
      media = soma / n;

      printf("\nMaior preço = R$%.1f", maior_preco);
      printf("\nMenor preço = R$%.1f", menor_preco);
      printf("\nMédia de preço = R$%.1f", media);
    }

    int main() {
        int n=7;
      compararProduto(n);
    }