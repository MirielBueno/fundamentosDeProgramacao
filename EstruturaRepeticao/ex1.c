/*1. Faça um programa que peça dois números inteiros e gere os números inteiros que
estão no intervalo entre eles.*/

#include <stdio.h>

int main(void){
    
    int a, b;

    printf("Type the First number: ");
    scanf("%i", &a);
    printf("Type the Second number: ");
    scanf("%i", &b);

    if(a>b){
        printf("%i", a);
    }
    else if(a<b){
        printf("%i", b);
    }else{
        printf("Equals.");
    }
    
    return 0;
}