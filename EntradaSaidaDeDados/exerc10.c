/*10.Construa um programa que pergunte quanto você ganha por hora e o número
de horas trabalhadas no mês. Calcule e mostre o total do seu salário no
referido mês.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    float vh, hs;

    printf("Digite a quantidade de horas: ");
    scanf("%f", &hs);
    printf("Digite o valor por hora: ");
    scanf("%f", & vh);

    printf("Valor do pagamento: %.2f", vh*hs);

    return 0;
}