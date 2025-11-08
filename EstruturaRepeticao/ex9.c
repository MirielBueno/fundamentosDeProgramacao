/*9. Faça um programa que calcule e mostre a soma dos números pares entre 100 e
200 (inclusive). O usuário deve ter a opção de repetir quantas vezes quiser esta
operação*/
#include <stdio.h>
 
int main(void){

    int soma;
    char opcao;

    do{
        for(int i=100; i<=200; i+=2){
            soma+=i;
        }
        printf("%i\n", soma);
        printf("Repetir? (s/n): ");
        scanf("%c", &opcao);

    }while(opcao == 's');
    

    return 0;
}