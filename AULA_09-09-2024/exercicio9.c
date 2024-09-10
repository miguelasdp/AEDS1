/* Faça um programa que leia os seguintes dados de 6 pessoas:

gênero;
idade;
peso;
Após a leitura dos dados, mostre:

a) o maior peso verificado no grupo;

b) a menor idade verificada no grupo;

c) a média dos pesos dos homens;

d) a média das idades das mulheres. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int genero, idade, menor_idade, cont_fem=0, cont_masc=0, soma_idade=0;
  float peso, maior_peso, soma_peso=0, media_peso_masc, media_idade_fem;

  for(int i=0; i<6; i++){
    printf("Digite o genero\n(1)Masculino  (2)Feminino : ");
    scanf("%d", &genero);
    printf("Digite a idade : ");
    scanf("%d", &idade);
    printf("Digite o peso : ");
    scanf("%f", &peso);
        
    if(i==0){
      maior_peso = peso;
      menor_idade = idade;
    }
    if(peso > maior_peso){
      maior_peso = peso;
    }
    if(idade < menor_idade){
      menor_idade = idade;
    }

    if(genero==1){
      soma_peso += peso;
      cont_masc++;
    }else if(genero==2){
      soma_idade += idade;
      cont_fem++;
    }
  }

  printf("O maior peso é: %.2f\n", maior_peso);
  printf("A menor idade é: %d\n", menor_idade);
  media_peso_masc = soma_peso / cont_masc;
  printf("A media de peso dos homens é: %.2f\n", media_peso_masc);
  media_idade_fem = soma_idade / cont_fem;
  printf("A media de idade das mulheres é: %.2f\n", media_idade_fem);
}