#include <stdio.h>
#include <stdlib.h>

int main() {
  int num=8, fat=1;

  for(int i=0; i<8; i++){
    fat *= num;
    num--;
  }
  printf("%d",fat);
}