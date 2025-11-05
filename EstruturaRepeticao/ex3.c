/*3. Faça um programa que leia dez números inteiros e calcule a diferença entre o
maior e o menor número do conjunto.
*/

#include <stdio.h>

int main(void){

    int menor, maior, numero;

        printf("digite primeiro número: ");
        scanf("%i", &numero);

        maior = numero;
        menor = numero;

        for(int i = 2; i<10; i++){
            printf("digite o %i num: ", i);
            scanf("%i", &numero);
            if(numero > maior){
                maior = numero;
            }
            if(numero < menor){
                menor = numero;
            }
        }
        int resultado = maior - menor;
        printf("a diferenca é %i", resultado);

        

    return 0;   
}   