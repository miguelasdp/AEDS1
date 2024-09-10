/* Faça um programa que calcule a idade em anos de qualquer pessoa
 e após ter calculado mostre a idade e uma das mensagens abaixo:

 - se idade  <= 10 anos, diga “Criança”;

- se idade  > 10 e <= 17 anos, diga “Adolescente”;

- se idade  >= 18 anos, diga “Adulto”; */

#include <stdio.h>
#include <stdlib.h>

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