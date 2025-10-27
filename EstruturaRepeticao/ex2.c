/*2. Faça um programa que peça dois números inteiros e gere os números pares que
estão no intervalo entre eles.*/

#include <stdio.h>

int main(void){

    int a;

    printf("Type a number: ");
    scanf("%i", &a);
  
    if(a>0){
        printf("Positive");
    }
    else if(a<0){
        printf("Negative");
    }
    else{
        printf("Zero.");
    }
    return 0;
}