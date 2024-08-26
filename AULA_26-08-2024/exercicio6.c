#include <stdio.h>
#include <stdlib.h>

int main() {
  int contador=0, num, cont_par=0, cont_impar=0;

  while(contador < 8) {
    printf("Digite um número: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
      printf("Numero Par !!!\n\n");
      cont_par++;
    } else {
      printf("Numero Impar !!!\n\n");
      cont_impar++;
    }
    contador++;
  }
  printf("Quantidade de números pares: %d\n", cont_par);
  printf("Quantidade de números impares: %d\n", cont_impar);
}