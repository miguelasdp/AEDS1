#include <stdio.h>
#include <stdlib.h>

int main() {
  int num_a, num_b, cont_divisivel=0;

  printf("Digite o numero A : ");
  scanf("%d", &num_a);
  printf("Digite o numero B : ");
  scanf("%d", &num_b);

  for(int i=1; i<=num_a; i++){
    if(i%num_b==0){
      cont_divisivel++;
    }
  }
  printf("O numero de divisores comuns é: %d", cont_divisivel);
}