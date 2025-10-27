/*7. Faça um programa que gere a tabuada de 1 a 10 de qualquer número. O usuário
deve informar de qual número deseja ver a tabuada.
*/
#include <stdio.h>
 
int main(void){

    char letter;

    printf("Type a letter: ");
    scanf("%c", &letter);

    if(letter=='a'||letter=='A'){
        printf("The letter is a vowel.");
    }
    else if(letter=='e'||letter=='E'){
        printf("The letter is a vowel.");
    }
    else if(letter=='i'||letter=='I'){
        printf("The letter is a vowel.");
    }
    else if(letter=='o'||letter=='O'){
        printf("The letter is a vowel.");
    }
    else if(letter=='u'||letter=='U'){
        printf("The letter is a vowel.");
    }else{
        printf("The letter ir a consonant");
    }                       
    return 0;
}