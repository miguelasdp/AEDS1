/* Faça um programa para armazenar em vetores, as notas de AED I,
de Cálculo I e o gênero (Masc=1 / Fem=2) de 7 alunos.

Após o armazenamento dos dados mostre:

a) as notas de Cálculo I dos homens;

b) as notas de AED I das mulheres;

c) a maior nota de AED I verificada na turma;

d)  a menor nota de Cálculo I verificada na turma;

e) a média da turma em AED I e em Cálculo I; */

#include<stdio.h>
#include<stdlib.h>

int main() {
  int notaCalc[7], notaAeds[7], genero[7], maiorNotaAeds, menorNotaCalc, somaAeds=0, somaCalc=0, i;
  float mediaAeds, mediaCalc;

  for(i=0; i<7; i++) {
    printf("Digite a %d° nota de Cálculo: ", i+1);
    scanf("%d", &notaCalc[i]);
    printf("Digite a %d° nota de AEDs: ", i+1);
    scanf("%d", &notaAeds[i]);
    printf("Digite o gênero\n(1)Masc (2)Fem : ");
    scanf("%d", &genero[i]);
  }

  for(i=0; i<7; i++) {
    if(genero[i] == 1) {
      printf("\nNota de Cálculo Homens = %d", notaCalc[i]);
    }
  }

  for(i=0; i<7; i++) {
    if(genero[i] == 2) {
      printf("\nNota de AEDs Mulheres = %d", notaAeds[i]);
    }
  }

  for(i=0; i<7; i++) {
    somaAeds += notaAeds[i];
    somaCalc += notaCalc[i];
    
    if(i==0) {
      maiorNotaAeds = notaAeds[i];
      menorNotaCalc = notaCalc[i];
    }
    if(notaAeds[i] > maiorNotaAeds) {
      maiorNotaAeds = notaAeds[i];
    }
    if(notaCalc[i] < menorNotaCalc) {
      menorNotaCalc = notaCalc[i];
    }
  }
  printf("\nMaior nota AEDs : %d", maiorNotaAeds);
  printf("\nMenor nota Cálculo : %d", menorNotaCalc);

  mediaAeds = somaAeds / 7.0;
  mediaCalc = somaCalc / 7.0;

  printf("\nMédia AEDs = %.1f", mediaAeds);
  printf("\nMédia Cálculo = %.1f", mediaCalc);
}