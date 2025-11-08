/*10. Faça um programa que peça dois números inteiros (base e expoente), calcule e
mostre o primeiro número elevado ao segundo número.*/
#include <stdio.h>
 
int main(void){

    int e, b, r=1;
    char opcao;

    do{    printf("Digite a base: ");
        scanf("%i", &b);
        printf("Digite o expoente: ");
        scanf("%i", &e);

        for(int i=1;i<=e; i++){
            r*=b;}
    
        printf("%i elevado a %i = %i\n", b, e, r);  
        printf("Repetir?(s/n): \n");
        scanf("%c", opcao);

    
    }while(opcao=='s');


    return 0;
}