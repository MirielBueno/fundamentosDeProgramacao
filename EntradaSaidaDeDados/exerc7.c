/*7. Construa um programa que converta metros para centímetros.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    float m, c;

    printf("Digite o valor em Metros: ");
    scanf("%f", &m);

    c=m*100;

    printf("O valor equivale a %.2fcm.", c);
    
    return 0;
}

