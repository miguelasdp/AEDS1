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

#include<stdio.h>
#include<stdlib.h>

float calcValor(float Kwh, float consumo) {
  return Kwh * consumo;
}

int main() {
  int flag=1, tipoConsumidor, totalConsumidores=0, resid=0, comerc=0, indust=0;
  float Kwh=2.80, consumo, somaConsIndust=0, somaConsumo=0, menorCons=999999, maiorCons=0, menorConsTipo, maiorConsTipo;

  while(flag==1) {
    printf("\nDigite o consumo em Kwh : ");
    scanf("%f", &consumo);
    printf("Tipo de Consumidor\n(1)Residencial (2)Comercial (3)Industrial : ");
    scanf("%d", &tipoConsumidor);
    
    totalConsumidores++;
    somaConsumo += consumo;

    if(tipoConsumidor==1) {
      resid++;
    } else if(tipoConsumidor==2) {
      comerc++;
    } else if(tipoConsumidor==3) {
      indust++;
      somaConsIndust += consumo;
    }

    if(consumo > maiorCons) {
      maiorCons = consumo;
      maiorConsTipo = tipoConsumidor;
    }
    if(consumo < menorCons) {
      menorCons = consumo;
      menorConsTipo = tipoConsumidor;
    }
    printf("\nDeseja continuar?\n(1)Sim (2)Não : ");
    scanf("%d", &flag);
  }
    printf("\nQuantidade de consumidores por tipo:\n");
    printf("Residenciais: %d (%.2f%%)\n", resid, (resid * 100.0) / totalConsumidores);
    printf("Comerciais: %d (%.2f%%)\n", comerc, (comerc * 100.0) / totalConsumidores);
    printf("Industriais: %d (%.2f%%)\n", indust, (indust * 100.0) / totalConsumidores);

    if (indust > 0) {
        printf("Média de consumo da indústria: %.2f KWh\n", somaConsIndust / indust);
    } else {
        printf("Nenhum consumidor industrial registrado.\n");
    }
    printf("Valor pago pelo maior consumidor: R$ %.2f (Tipo: %.0f)\n", calcValor(Kwh, maiorCons), maiorConsTipo);
    printf("Valor pago pelo menor consumidor: R$ %.2f (Tipo: %.0f)\n", calcValor(Kwh, menorCons), menorConsTipo);
    printf("Média de consumo da cidade: %.2f KWh\n", somaConsumo / totalConsumidores);
}