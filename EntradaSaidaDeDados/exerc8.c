/*8. Construa um programa que peça dois números, calcule e mostre a soma dos
mesmos.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a, b;

    printf("Digite o primeiro num: ");
    scanf("%i", &a);
    printf("Digite o segundo num: ");
    scanf("%i", &b);

    printf("Soma dos numeros: %i", a+b);
        

    return 0;
}
