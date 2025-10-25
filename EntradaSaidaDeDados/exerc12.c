/*12. Uma determinada empresa vende uma máquina que possui seis motores. Um
de 20 CV, dois de 1 CV, e três de 5 CV, que custam 1500, 300 e 600 reais
respectivamente cada motor.
Existe a necessidade de saber quantos motores deverão ser comprados
de cada modelo e quanto custará esta compra. Para isto elabore um programa que:
a. Pergunte quantas máquinas serão vendidas; ok
b. Calcule e apresente na tela a quantidade de motores que deverão ser
comprados de cada modelo;
c. Calcule e apresente na tela o custo total por máquina, o custo por tipo
de motor e o custo total da compra.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

     int qtdMq;
     
    printf("Quantida de de Maquinas: ");
    scanf("%i", &qtdMq);

    int ttmaq = 600+300+1500;

    printf("Deve-se adquirir: \n");
    printf(" • %i  Motor(es) de 20CV - Valor: %i reais \n", qtdMq, 1500*qtdMq);
    printf(" • %i  Motores de 1CV - Valor: %i reais \n", qtdMq*2, 300*qtdMq);
    printf(" • %i  Motores de 5CV - Valor: %i reais \n\n", qtdMq*5, 600*qtdMq);
    printf(" • Valor por maquina: %i reais\n", ttmaq);
    printf(" • Custo total: %i reais", ttmaq*qtdMq);

    
    return 0;
}



























