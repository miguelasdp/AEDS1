/* 1) Utilizando a estrutura de repetição WHILE, 
implemente um programa em C para ler as notas de 10 alunos,
calcular e imprimir a média da turma. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int contador = 0, media, soma = 0, nota;

  while (contador < 10) {
    printf("Digite a nota do aluno: ");
    scanf("%d", &nota);

    soma = soma + nota;
    contador++;
  }

  media = soma / 10;
  printf("A media da turma e: %d", media);
}