/*5. Construa um algoritmo que peça 2 números inteiros e um número real.
Calcule e mostre:
a. o produto do dobro do primeiro com metade do segundo .
b. a soma do triplo do primeiro com o terceiro.
c. o terceiro elevado ao cubo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    int n1, n2;
    float n3, a, b, c;

    printf("Digite o primeiro num: ");
    scanf("%i", &n1);
    printf("Digite o segundo num: ");
    scanf("%i", &n2);
    printf("Digite o terceiro num: ");
    scanf("%f", &n3);

    a = (2*n1)*(n2/2);
    b = (3*n1)+n3;
    c = pow(n3, 3);

    printf("\nResultados:\n");
    printf("a) %.2f\n", a);
    printf("b) %.2f\n", b);
    printf("c) %.2f\n", c);

    return 0;
}








