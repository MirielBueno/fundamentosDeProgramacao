/*7. Faça um programa que gere a tabuada de 1 a 10 de qualquer número. O usuário
deve informar de qual número deseja ver a tabuada.
*/
#include <stdio.h>
 
int main(void){

    int n, i;
    char opcao;

    do{
        printf("Digite um numero inteiro: ");
        scanf("%i", &n);

        for(i = 0; i<=10; i++){
            printf("%i X %i = %i\n", n, i, i*n);            
        }
        printf("Repetir? (Y/N): ");
        scanf("%c", &opcao);

    }while(opcao == 'Y' || opcao == 'y');

    return 0;
}