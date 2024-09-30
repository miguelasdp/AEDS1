#include<stdio.h>
#include<stdlib.h>

int main() {
  int num=1, qtdNum=0, fat, somaFat=0;

  while(num != -1) {
    printf("\nDigite um número\n(-1) Encerra : ");
    scanf("%d", &num);

    if(num != -1) {
      qtdNum++;
      fat=1;
      
      for(int i=num; i>1; i--) {
        fat *= i;
      }
      printf("\nFatorial = %d\n", fat);
      
      somaFat += fat;
    }
  }
  printf("\nQuantidade números = %d", qtdNum);
  printf("\nSoma dos fatoriais = %d\n", somaFat);
}