#include <stdio.h>
#include <stdlib.h>

int main() {
  int idade, genero, cont_masc=0, cont_fem=0, soma_idade_masc=0, media_idade_masc, maior_idade=0, menor_idade=100000, flag=1;

  while(flag==1) {
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite seu genero\n(1)Masculino (2)Feminino : ");
    scanf("%d", &genero);
    
    if(idade>maior_idade) {
      maior_idade=idade;
    }
    if(idade<menor_idade){
      menor_idade=idade;
    }

    if(genero==1){
      cont_masc++;
      soma_idade_masc = soma_idade_masc + idade;
    }else if(genero==2){
      cont_fem++;
    }
    printf("Deseja continuar?\n(1)Sim (2)Nao : ");
    scanf("%d", &flag);
  }
  media_idade_masc = soma_idade_masc/cont_masc;
  
  printf("Numero de Homens: %d\n", cont_masc);
  printf("Numero de Mulheres: %d\n", cont_fem);
  printf("Media de idade dos homens: %d\n", media_idade_masc);
  printf("Maior idade: %d\n", maior_idade);
  printf("Menor idade: %d\n", menor_idade);
}