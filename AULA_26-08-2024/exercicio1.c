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