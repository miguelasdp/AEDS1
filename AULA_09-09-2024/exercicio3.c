#include <stdio.h>
#include <stdlib.h>

int main() {
int farenheit;
float centigrados;

for(farenheit = 50; farenheit <= 100; farenheit+=5){
centigrados = (farenheit - 32) * 5/9;
printf("|%d Farenheit = %.1f° Centigrados|\n", farenheit, centigrados);
}
}

 