/* Faça um programa que leia uma série de números inteiros  positivos e que,
 a cada número lido, mostre o seu  fatorial.

Onde:  n ! = n x (n-1) x (n-2) x ...... x 2 x 1 */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int fat = 1, num, flag=1;
  while(flag==1){
    printf("\nDigite o numero para calcular o fatorial: ");
    scanf("%d", &num);
  
    while(num >= 1)
    {
      fat *= num;
      num--;
    }
    printf("O fatorial e: %d", fat);

    fat = 1;
    
    printf("\n\nDeseja continuar?\n(1)Sim (2)Nao : ");
    scanf("%d", &flag);
  }
}