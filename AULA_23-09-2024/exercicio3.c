/* Faça um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra.

Se a letra for ‘A’, o procedimento calcula e escreve a média aritmética das notas do aluno,
se for ‘P’, calcula e escreve a sua média ponderada (pesos: 5, 3 e 2).

Faça um programa que leia 3 notas de N alunos e acione o procedimento para cada aluno.
(N deve ser lido do teclado)  */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void calcNota(int n1, int n2, int n3, char letra) {
    int result;

     letra = toupper(letra);
    
    if(letra == 'A') {
        result = (n1 + n2 + n3) / 3;
        printf("\nMédia Aritmética = %d\n", result);
    } else if(letra == 'P') {
        result = ((2*n1)+(3*n2)+(5*n3)) / (n1+n2+n3);
        printf("\nMédia Ponderada = %d\n", result);
    }
}

int main() {
    int nota1, nota2, nota3, n;
    char letra;

    printf("\nDigite a quantidade de Alunos : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("\nDigite a 1° nota do %d° Aluno : ", i+1);
         scanf("%d", &nota1);
        printf("\nDigite a 2° nota do %d° Aluno : ", i+1);
         scanf("%d", &nota2);
        printf("\nDigite a 3° nota do %d° Aluno : ", i+1);
         scanf("%d", &nota3);
        printf("\nDigite como deseja calcular\n(A)Média Aritmética\n(P)Média Ponderada : ");
        scanf(" %c", &letra);

        calcNota(nota1, nota2, nota3, letra);
    }
}