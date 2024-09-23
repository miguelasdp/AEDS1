/* Faça um procedimento que recebe a média final de um aluno, identifica e
exibe o seu conceito, conforme a tabela abaixo. Faça um programa que leia a média de N alunos,
acionando o procedimento para cada um deles. (N deve ser lido do teclado)

Nota    Conceito

Até 39      F
40 a 59     E
60 a 69     D
70 a 79     C
80 a 89     B
Maior 89    A */

#include <stdio.h>
#include <stdlib.h>

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