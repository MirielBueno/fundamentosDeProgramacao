/*5. Faça um programa que calcule o número médio de alunos por turma. Para isto,
peça a quantidade de turmas e a quantidade de alunos para cada turma. As turmas
não podem ter mais de 40 alunos.
*/
#include <stdio.h>
 
int main(void){

    int turmas, alunos, soma=0, media;

    printf("digite a quantidade de turmas: ");
    scanf("%i", &turmas);

    for(int i = 1; i <= turmas; i++){
        printf("digite a qdt de alunos na %i sala: ", i);
        scanf("%i", &alunos);
        
        if(alunos > 0 && alunos < 40){
        soma = soma + alunos;}
        else{
            printf("ERROR!\n");
            i--;
        }
    }
    media=soma/turmas;

    printf("media de alunos nas %i turmas eh: %i", turmas, media);

    return 0;
}