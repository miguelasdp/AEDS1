#include <stdio.h>
#include <stdlib.h>

int main() {
  float contador=0, voto, cont_joao, cont_maria, cont_nulo, votos_totais;

  while(contador < 8){
    printf("Vote Aqui\n(1)Joao  (2)Maria  (3)Nulo : ");
    scanf("%f",&voto);

    if(voto == 1){
      cont_joao++;
      votos_totais++;
    } else if(voto == 2){
      cont_maria++;
      votos_totais++;
    } else if(voto == 3){
      cont_nulo++;
      votos_totais++;
    }
    contador++;
  }

  printf("\nVotos Joao: %.0f\nVotos Maria: %.0f", cont_joao, cont_maria);
  printf("\nVotos Nulos: %.0f", cont_nulo);\
  printf("\nPorcentagem Votos Nulos: %.2f%%", ((cont_nulo/votos_totais)*100));
  
  if(cont_joao > cont_maria) {
    printf("\nJoao venceu!");
  } else if (cont_joao < cont_maria) {
    printf("\nMaria venceu!");
  } else {
    printf("Empate ou invalido");
  } 
}