/* Implemente um método para calcular o somatório de todos números pares de 2 a N 
(onde N deve ser fornecido pelo usuário). A função deve ler como parâmetro de entrada
o valor de N e mostrar o resultado do somatório.

            S = (2 + 4 + 6 + ... + N)

 

Utilize de método com passagem de parâmetro(s) e sem retorno. */

#include <stdio.h>
#include <stdlib.h>

void calcPar(int n) {
  int soma=0;

  for(int i=0; i <= n; i++){
    if(i%2==0){
      soma += i;
    }
  }
  printf("%d", soma);
}

int main() {
    int n;
    printf("Qual o número limite? ");
    scanf("%d", &n);
    calcPar(n);
}