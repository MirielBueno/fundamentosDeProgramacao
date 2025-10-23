/*4. Construa um algoritmo que peça uma temperatura em graus Celsius (ºC),
transforme e mostre na tela a temperatura em graus Fahrenheit.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    float c, f;

    printf("Digite a temperatura em Celcius: ");
    scanf("%f", c);

    f = (9/5*c)+32;

    printf("Temperatura em Fahrenheit: %.2f ", f);
    
    return 0;
}