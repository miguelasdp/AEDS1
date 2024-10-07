/* Faça um programa para ler e armazenar em um vetor uma série de 10 números.

Após a leitura de todos os números mostre:

- todos os números que foram lidos;

- todos os números pares;

- todos os números ímpares; */

#include<stdio.h>
#include<stdlib.h>

int main() {
  int num[10], i;

  for(i=0;i<10;i++) {
    printf("Digite o %d número : ", i+1);
    scanf("%d", &num[i]);
  }

  for(i=0;i<10;i++) {
    if(i==0){
      printf("\nTodos os números : \n");
    }
    printf("\t%d", num[i]);
  }

  for(i=0;i<10;i++) {
    if(i==0){
      printf("\nNúmeros Pares : \n");
    }
    if(num[i]%2==0) {
      printf("\t%d", num[i]);
    }
  }

  for(i=0;i<10;i++) {
    if(i==0){
      printf("\nNúmeros Impares : \n");
    }
    if(num[i]%2==1) {
      printf("\t%d", num[i]);
    }
  }
}