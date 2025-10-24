/*9. Construa um programa que peça as 4 notas bimestrais e mostre a média.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    float a, b, c, d, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &a);        
    printf("Digite a segunda nota: ");
    scanf("%f", &b);
    printf("Digite a terceira nota: ");
    scanf("%f", &c);
    printf("Digite a quarta nota: ");
    scanf("%f", &c);

    media=(a+b+c+d)/3 ;

    printf("Media: %.2f", media);
    

    return 0;
}

