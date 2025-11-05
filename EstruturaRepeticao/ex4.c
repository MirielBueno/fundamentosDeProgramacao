/*4. Faça um programa que calcule e mostre a média bimestral da turma. O usuário
deve informar a quantidade de notas, bem como cada nota.*/

#include <stdio.h>

int main(void){

    float nota, soma = 0, media;
    int qdtnota; 

    printf("quantidade de notas : ");
    scanf("%i", &qdtnota);

    int i;

    for(i = 1; i <= qdtnota; i++){
        printf("Digite a %i nota: ", i);
        scanf("%f", &nota);
        soma = soma + nota;
    }
    media = soma/qdtnota;
    printf("a media final é %f:", media);

    return 0;
}
