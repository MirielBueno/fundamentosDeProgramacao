/*6. Faça um programa que calcule o valor total investido e o custo médio por CD. O
usuário deverá informar a quantidade de CDs e o valor para em cada um.*/
#include <stdio.h>
 
int main(void){

    char sex;

    printf("Type your sex (M/F): ");
    scanf("%c", &sex);

    if(sex=='m'||sex=='M'){
        printf("Male");
    }
    else if(sex=='f'||sex=='F'){
        printf("Female");
    }else{
        printf("Invalid Character.");
    }
    return 0;
}