/*2. Faça um programa que peça dois números inteiros e gere os números pares que
estão no intervalo entre eles.*/

#include <stdio.h>

int main(void){
    
    int a, b, i;

    printf("Type the First number: ");
    scanf("%i", &a);
    printf("Type the Second number: ");
    scanf("%i", &b);

    if(a<b){
        for(i = a+1; i<=b-1; i++){
            if(i % 2==0){
                printf("%d", i);
            }      
        }
    }else{
        for(i = a-1; i>=b+1; i--){
            if(i % 2==0){
                printf("%d", i);
            }
        }
    }
    return 0;
}   