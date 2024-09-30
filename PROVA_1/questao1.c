#include<stdio.h>
#include<stdlib.h>

int main() {
  int num, maiorNum, menorNum, qtdPares=0, qtdNum=0, soma=0, flag=1, i=0;
  float media;

  while(flag==1) {
    printf("\nDigite um número : ");
    scanf("%d", &num);

    qtdNum++;
    soma += num;

    if(i==0) {
      maiorNum = num;
      menorNum = num;
    }

    if(num > maiorNum) {
      maiorNum = num;
    }
    if(num < menorNum) {
      menorNum = num;
    }

    if(num%2==0) {
      qtdPares++;
    }
    printf("Deseja Continuar?\n(1)Sim (2)Não : ");
    scanf("%d", &flag);

    i++;
  }
  media = soma / qtdNum;

  printf("\nMédia = %.1f", media);
  printf("\nQuantidade de números = %d", qtdNum);
  printf("\nMaior número = %d", maiorNum);
  printf("\nMenor número = %d", menorNum);
  printf("\nQuantidade pares = %d\n", qtdPares);
}