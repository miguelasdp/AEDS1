/* Faça um programa que leia os dados de uma série de números quaisquer e 
após a leitura mostre a quantidade de números lidos, a quantidade de múltiplos de 2
e a quantidade de múltiplos de 3.

Informe ainda a quantidade de números negativos e de números positivos.

Use flag.

Obs: utilize passagem de parâmetro e retorno. */

#include<stdio.h>
#include<stdlib.h>

int cont_mult_tres = 0;
int cont_mult_dois = 0;
int cont_pos = 0;
int cont_neg = 0;

int multTres(int num) {
if (num % 3 == 0) {
cont_mult_tres++;
}
return cont_mult_tres;
}

int multDois(int num) {
if (num % 2 == 0) {
cont_mult_dois++;
}
return cont_mult_dois;
}

int contPos(int num) {
if (num >= 0) {
cont_pos++;
}
return cont_pos;
}

int contNeg(int num) {
if (num < 0) {
cont_neg++;
}
return cont_neg;
}

int main() {
int flag = 1, num, qtdTres, qtdDois, qtdPos, qtdNeg;

while (flag == 1) {
printf("Digite um número: ");
scanf("%d", &num);

qtdTres = multTres(num);
qtdDois = multDois(num);
qtdPos = contPos(num);
qtdNeg =contNeg(num);

printf("Deseja continuar?\n(1) Sim (2) Não: ");
scanf("%d", &flag);
}

printf("Números múltiplos de 3: %d\n", qtdTres);
printf("Números múltiplos de 2: %d\n", qtdDois);
printf("Números positivos: %d\n", qtdPos);
printf("Números negativos: %d\n", qtdNeg);

return 0;
}
