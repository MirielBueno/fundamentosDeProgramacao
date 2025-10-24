/*6. Construa um programa que calcule a área de um círculo.*/


#include <stdio.h>
#include <stdlib.h>

int main(void){

    float r, a;

    printf("Digite o valor do raio: ");
    scanf("%f", &r);

    a=r*r*3,14;

    printf("A area equivale a: %.2f", a);


        

    return 0;
}

