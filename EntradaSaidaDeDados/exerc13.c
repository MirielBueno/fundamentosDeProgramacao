/*13. Elabore um programa para calcular a quantidade necessária de latas de tinta
para pintar uma parede com X metros de largura por H metros de altura.
Considere que o consumo de latas de tinta por metro quadrado é 3 litros e a
quantidade de tinta por lata é 3,6 litros.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    float a, c, qdd;
    
    printf("Digite a altura da Parede:");
    scanf("%f", &a);
    printf("Digite c comprimento da Parede:");
    scanf("%f", &c);

    qdd = a*c;

    printf("Necessita de %.2f litros de tinta", qdd*3,6);

    return 0;
}