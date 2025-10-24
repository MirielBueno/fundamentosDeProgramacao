/*14.Construa um algoritmo que peça o salário bruto mensal de um funcionário,
calcule e apresente os valores conforme modelo abaixo:
Salário Bruto : R$
(-) IR (15%) : R$
(-) INSS (11%) : R$
(-) Sindicato ( 3%) : R$
Salário líquido : R$
Obs.: Descontos = IR + INSS + Sindicato
Salário Líquido = Salário Bruto – Descontos*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

     float bruto;

     printf("Digite o valor bruto: ");
     scanf("%f", &bruto);

    printf("(-)IR (15%): %.2f \n", bruto*.15);
    printf("(-)INSS (15%): %.2f \n", bruto*.11);
    printf("(-)Sindicato (15%): %.2f \n", bruto*.03);
    printf("Total a receber: %.2f", bruto-(bruto*.29));

    return 0;
}
