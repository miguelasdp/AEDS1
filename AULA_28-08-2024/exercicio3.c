#include <stdio.h>
#include <stdlib.h>

int main() {
  float pais_a=80000000, pais_b=65000000, crescimento_a=0.03, crescimento_b=0.015, contador=0;

  while(pais_b<pais_a) {
    pais_a = pais_a + (pais_a * crescimento_a);
    pais_b = pais_b + (pais_b * crescimento_b);

    contador++;
  }

  printf("Serão necessários %.0f anos para que o pais A passe a frente", contador + 1);
}