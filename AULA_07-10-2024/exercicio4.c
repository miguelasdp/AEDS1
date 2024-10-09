/* Foi realizada uma pesquisa de opinião, onde os 9 entrevistados
responderam (Sim=1 / Não=2) e o seu gênero (Masc=1 / Fem=2) e estes
dados foram armazenados em vetores.

Após todas as entrevistas realizadas, mostre:

a) o número total de sim e o número de não;

b) quantas pessoas de cada gênero votaram sim e quantas votaram não;

c) mostre todas as respostas dos homens;

d) mostre todas as respostas das mulheres;

e) mostre todas as respostas do grupo. */

#include<stdio.h>
#include<stdlib.h>

int main() {
  int voto[9], genero[9], contSim=0, contNao=0, contFemSim=0, contFemNao=0, contMascSim=0, contMascNao=0, i;

  for(i=0; i<9; i++) {
    printf("\nDigite seu voto\n(1)Sim (2)Não : ");
    scanf("%d", &voto[i]);
    printf("Digite seu gênero\n(1)Masc (2)Fem : ");
    scanf("%d", &genero[i]);
  }

  for(i=0; i<9; i++) {
    if(voto[i] == 1) {
      contSim++;
      if(genero[i] == 1) {
        contMascSim++;
      } else if(genero[i] == 2) {
        contFemSim++;
      }
    } else if(voto[i] == 2) {
      contNao++;
      if(genero[i] == 1) {
        contMascNao++;
      } else if(genero[i] == 2) {
        contFemNao++;
      }
    }
  }

  printf("\n\nVotos Sim = %d", contSim);
  printf("\nVotos Não = %d", contNao);
  printf("\nVotos Homens Sim = %d", contMascSim);
  printf("\nVotos Homens Não = %d", contMascNao);
  printf("\nVotos Mulheres Sim = %d", contFemSim);
  printf("\nVotos Mulheres Não = %d", contFemNao);

  for(i=0; i<9; i++) {
    if(i==0) {
      printf("\n\nTODAS RESPOSTAS HOMENS:\n");
    }
    if(genero[i] == 1) {
      printf("\n-> %d", voto[i]);
    }
  }

  for(i=0; i<9; i++) {
    if(i==0) {
      printf("\n\nTODAS RESPOSTAS MULHERES:\n");
    }
    if(genero[i] == 2) {
      printf("\n-> %d", voto[i]);
    }
  }

  for(i=0; i<9; i++) {
    if(i==0) {
      printf("\n\nTODAS RESPOSTAS DO GRUPO:\n");
    }
    printf("\n-> %d", voto[i]);
  }
}