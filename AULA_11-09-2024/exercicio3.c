/* A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:

a) média do número de filhos;

b) média do salário da população;

c) maior salário;

d) percentual de pessoas com salário até R$1.000,00.

O final da leitura de dados se dará com a entrada de um salário negativo.

Utilize de método sem passagem de parâmetro(s) e sem retorno. */

#include <stdio.h>
#include <stdlib.h>

void pesquisaPrefeitura() {
  int salario=0, num_filhos, maior_salario;
  float media_num_filhos, media_salario, percent_salario, soma_num_filhos=0, soma_salario=0,   cont_percent_salario=0, cont_pessoas=0;
  
  for(int i=0; salario >= 0; i++) {
    printf("Digite o Salário\n(Negativo encerra o programa) : ");
    scanf("%d", &salario);
    if(salario < 0){
      break;
    }
    printf("Digite o número de filhos : ");
    scanf("%d", &num_filhos);

    soma_salario += salario;
    soma_num_filhos += num_filhos;
    cont_pessoas++;

    if(i==0){
      maior_salario = salario;
    }

    if(salario > maior_salario){
      maior_salario = salario;
    }

    if(salario <= 1000){
      cont_percent_salario++;
    }
  }
  media_num_filhos = soma_num_filhos / cont_pessoas;
  media_salario = soma_salario / cont_pessoas;
  percent_salario = (cont_percent_salario/cont_pessoas) * 100;

  printf("\nMédia do número de filhos = %.0f", media_num_filhos);
  printf("\nMédia do salário = R$%.0f", media_salario);
  printf("\nMaior salário = R$%d", maior_salario);
  printf("\nPercentual de pessoas com salário até R$1.000 = %.1f%%", percent_salario);
}

int main() {
  pesquisaPrefeitura();
}