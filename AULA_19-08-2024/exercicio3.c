#include <stdio.h>

int main() {
  int idade;

  printf("Escreva a idade da pessoa: ");
  scanf("%d", &idade);

  if(idade <= 10){
    printf("Criança");
  } else if (idade > 10 && idade <= 17){
    printf("Adolescente");
  } else if (idade >= 18){
    printf("Adulto");
  }
}