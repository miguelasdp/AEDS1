/* Faça um programa para ler e armazenar em vetores, as seguintes informações de um grupo de 5 pessoas:

- sexo(mas=1 /fem=2)      - idade;    - estado civil (casado=1/solteiro=2)

 Após a leitura mostre:

a) o número de pessoas com idade acima de 30 anos que são solteiras e o gênero de cada uma delas;

b) o número de pessoas casadas com idade entre 20 e 30 inclusive as duas e o gênero de cada uma delas;

c) o número de mulheres que são solteiras com menos de 35 anos;

d) o número de homens casados com mais de 20 e menos de 30 anos. */

#include<stdio.h>
#include<stdlib.h>

int main() {
  int pessoa[5], sexo[5], idade[5], estCivil[5], i, contSoltMaior30=0, contCasadEntre20e30=0, contFemSoltMenos35=0, contMascCasadEntre20e30=0;

  for(i=0; i<5; i++) {
    printf("\nDigite seu sexo\n(1)Masc (2)Fem : ");
    scanf("%d", &sexo[i]);
    printf("Digite sua idade : ");
    scanf("%d", &idade[i]);
    printf("Digite seu Estado Civil\n(1)Casado (2)Solteiro : ");
    scanf("%d", &estCivil[i]);
  }
  /* Número de pessoas com idade acima de 30 anos que são solteiras e o gênero de cada uma delas */
  for(i=0; i<5; i++) {
    if(idade[i]>30 && estCivil[i]==2) {
      contSoltMaior30++;
    }
  }
  printf("\n\nNúmero de pessoas com idade acima de 30 anos que são solteiras = %d", contSoltMaior30);
  
  for(i=0; i<5; i++) {
    if(i==0) {
      printf("\nGênero de cada uma delas: ");
    }
    if(idade[i]>30 && estCivil[i]==2) {
      printf("\n%d -> %d", i+1, sexo[i]);
    }
  }
  /* Número de pessoas casadas com idade entre 20 e 30 inclusive as duas e o gênero de cada uma delas */
  for(i=0; i<5; i++) {
    if(estCivil[i]==1 && (idade[i]>=20 && idade[i]<=30)) {
      contCasadEntre20e30++;
    }
  }
  printf("\n\nNúmero de pessoas casadas com idade entre 20 e 30 anos = %d", contCasadEntre20e30);
  
  for(i=0; i<5; i++) {
    if(i==0) {
      printf("\nGênero de cada uma delas: ");
    }
    if(estCivil[i]==1 && (idade[i]>=20 && idade[i]<=30)) {
      printf("\n%d -> %d", i+1, sexo[i]);
    }
  }
  /* Número de mulheres que são solteiras com menos de 35 anos */
  for(i=0; i<5; i++) {
    if((sexo[i]==2 && estCivil[i]==2) && idade[i] < 35) {
      contFemSoltMenos35++;
    }
  }
  printf("\n\nNúmero de mulheres que são solteiras com menos de 35 anos = %d", contFemSoltMenos35);
  /* número de homens casados com mais de 20 e menos de 30 anos */
  for(i=0; i<5; i++) {
    if((sexo[i]==1 && estCivil[i]==1) && (idade[i]>=20 && idade[i]<=30)) {
      contMascCasadEntre20e30++;
    }
  }
  printf("\n\nNúmero de homens casados com mais de 20 e menos de 30 anos = %d", contMascCasadEntre20e30);

  return 0;
}