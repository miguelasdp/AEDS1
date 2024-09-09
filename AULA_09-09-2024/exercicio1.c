#include <stdio.h>
#include <stdlib.h>

int main() {
  int notas, soma=0, maior_nota, menor_nota;
  float media;

  for(int i=0; i<10; i++){
    printf("Digite a nota do aluno %d: ", i+1);
    scanf("%d", &notas);

    soma += notas;

    if(i==0){
      maior_nota = notas;
      menor_nota = notas;
    }
    
    if(notas > maior_nota){
      maior_nota = notas;
    } 
    if(notas < menor_nota){
      menor_nota = notas;
    }
  }

  media = soma/10;

  printf("A media das notas eh: %.2f\n", media);
  printf("Maior nota: %d\n", maior_nota);
  printf("Menor nota: %d\n", menor_nota);
}