/*3. Faça um programa que leia dez números inteiros e calcule a diferença entre o
maior e o menor número do conjunto.
*/

#include <stdio.h>

int main(void){

    int a;

    printf("Type a number: ");
    scanf("%i", &a);
  
    if(a%2==0){
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }

    return 0;
}