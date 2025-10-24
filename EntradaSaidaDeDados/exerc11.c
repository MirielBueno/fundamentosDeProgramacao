/*11. Uma firma contrata um encanador a 25,00 por dia. Crie um programa que
solicite o número de dias trabalhados pelo encanador e imprima a quantia
líquida que deverá ser paga, sabendo-se que são descontados 8% para o
Imposto de Renda.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int dias;
    float salario;
      
    printf("Digite os dias trabalhados: ");
    scanf("%i", &dias);

    salario= (dias*25)*.92;

    printf("Valor a ser pago: %.2f", salario);

    return 0;
}













