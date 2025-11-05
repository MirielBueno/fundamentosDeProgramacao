/*1. Faça um programa que peça dois números inteiros e gere os números inteiros que
estão no intervalo entre eles.*/

#include <stdio.h>

int main(void){
    
    int a, b, i;

    printf("Digite o primeiro num: ");
    scanf("%i", &a);
    printf("Digite o segundo num: ");
    scanf("%i", &b);

    if(a<b){
        for(i=a+1; i<=b-1; i++){
            printf("%d", i);
        }
    }else{
        for(i=a-1; i>=b+1; i--){
            printf("%d", i);
        }
    }
    
    return 0; 
}