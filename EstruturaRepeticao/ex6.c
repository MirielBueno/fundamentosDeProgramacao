/*6. Faça um programa que calcule o valor total investido e o custo médio por CD. O
usuário deverá informar a quantidade de CDs e o valor para em cada um.*/
#include <stdio.h>
 
int main(void){

    int qdtCd, i;
    float media, valor, total=0;

    printf("Digite a quantidade de CD's: ");
    scanf("%i", &qdtCd);

    for(i = 1; i<=qdtCd; i++){
        printf("Digite o valor do CD %i: ", i);
        scanf("%f", &valor);
       
        total += valor;
        media = total/qdtCd;

    }

    printf("Valor total dos CD's: %.2f\n", total);
    printf("Valor medio dos CD's: %.2f\n", media);
    
    return 0;

}