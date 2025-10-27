/*5. Faça um programa que calcule o número médio de alunos por turma. Para isto,
peça a quantidade de turmas e a quantidade de alunos para cada turma. As turmas
não podem ter mais de 40 alunos.
*/
#include <stdio.h>
 
int main(void){

    float n;

    printf("Type a real number: ");
    scanf("%f", &n);

    if(n==(int)n){
        printf("It's an integer");
    }else{
        printf("Isn't an Integer");
    }
    return 0;
}