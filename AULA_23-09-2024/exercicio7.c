/* A CEMIG trabalha com consumidores dos tipos residencial, comercial e industrial. 

O valor atual do Kwh é de R$ 2,80 para qualquer um dos diferentes tipos.

Faça um programa que leia o consumo de energia em (Kwh) de uma cidade e após a 
leitura dos dados dos consumidores, mostre:

a) a quantidade de consumidores de cada tipo e o percentual de cada um no total de consumidores da cidade;  

b) a média do consumo da indústria;

c) o valor pago pelo maior consumidor da cidade e o seu tipo; 

d) o valor pago pelo menor consumidor da cidade e o seu tipo;

e) a média do consumo da cidade;

Use flag.

Obs: utilize passagem de parâmetro e retorno.  */

#include <stdio.h>
#include <stdlib.h>

int lerTipoConsumidor() {
    int tipo;
  
    printf("Digite o tipo de consumidor\n(1)Residencial (2)Comercial (3)Industrial : ");
    scanf("%d", &tipo);
  
    return tipo;
}

float lerConsumo() {
    float consumo;
    printf("Digite o consumo em KWh: ");
    scanf("%f", &consumo);
    return consumo;
}

float calcValor(float consumo, float valorKwh) {
    return consumo * valorKwh;
}

int main() {
    int tipo, totalConsumidor = 0, flag=1, residenciais = 0, comerciais = 0, industriais = 0, tipoMaiorConsumo = 0, tipoMenorConsumo = 0, numConsIndust = 0;
    float consumo, totalConsumo = 0,  maiorConsumo = 0, menorConsumo = 9999999, somaConsIndust = 0, valorKwh = 2.80;

    while (flag==1) {
        tipo = lerTipoConsumidor();
        consumo = lerConsumo();
        totalConsumidor++;
        totalConsumo += consumo;

        if (tipo == 1) {
            residenciais++;
        } else if (tipo == 2) {
            comerciais++;
        } else if (tipo == 3) {
            industriais++;
            somaConsIndust += consumo;
            numConsIndust++;
        }

        if (consumo > maiorConsumo) {
            maiorConsumo = consumo;
            tipoMaiorConsumo = tipo;
        }

        if (consumo < menorConsumo) {
            menorConsumo = consumo;
            tipoMenorConsumo = tipo;
        }
      printf("Deseja continuar?\n(1)Sim (2)Não : ");
      scanf("%d", &flag);
    }
    printf("\nQuantidade de consumidores por tipo:\n");
    printf("Residenciais: %d (%.2f%%)\n", residenciais, (residenciais * 100.0) / totalConsumidor);
    printf("Comerciais: %d (%.2f%%)\n", comerciais, (comerciais * 100.0) / totalConsumidor);
    printf("Industriais: %d (%.2f%%)\n", industriais, (industriais * 100.0) / totalConsumidor);

    if (numConsIndust > 0) {
      printf("Média de consumo da indústria: %.2f KWh\n", somaConsIndust / numConsIndust);
    } else {
      printf("Nenhum consumidor industrial registrado.\n");
    }
    printf("Valor pago pelo maior consumidor: R$ %.2f (Tipo: %d)\n", calcValor(maiorConsumo, valorKwh), tipoMaiorConsumo);
    printf("Valor pago pelo menor consumidor: R$ %.2f (Tipo: %d)\n", calcValor(menorConsumo, valorKwh), tipoMenorConsumo);
    printf("Média de consumo da cidade: %.2f KWh\n", totalConsumo / totalConsumidor);
}
