#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaFinal(int nota) {
    if(nota >= 0 && nota < 40) {
        printf("\nConceito F\n");
    } else if(nota < 60) {
        printf("\nConceito E\n");
    } else if(nota < 70) {
        printf("\nConceito D\n");
    } else if(nota < 80) {
        printf("\nConceito C\n");
    } else if(nota < 90) {
        printf("\nConceito B\n");
    } else if(nota >= 90) {
        printf("\nConceito A\n");
    }
}

int main() {
   int nota, n, soma=0, media;

    printf("\nDigite a quantidade de Alunos : ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("\nDigite a Nota : ");
        scanf("%d", &nota);

        soma += nota;

        mediaFinal(nota);
    }
    media = soma / n;

    printf("\nA média das notas = %d", media);
}