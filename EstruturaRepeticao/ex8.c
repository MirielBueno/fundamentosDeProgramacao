/*8. Supondo que a população de um país A seja da ordem de 80.000 habitantes com
uma taxa anual de crescimento de 3% e que a população do país B seja,
aproximadamente, de 200.000 habitantes com uma taxa de crescimento anual de
1,5%. Fazer um programa que calcule e escreva o número de anos necessários
para que a população do país A ultrapasse ou iguale a população do país B,
mantidas essas taxas de crescimento.
*/

#include <stdio.h>
 
int main(void){

    int a, b, c;

    printf("Type the first number: ")/
    scanf("%i", &a);
    printf("Type the second number: ")/
    scanf("%i", &b);
    printf("Type the thirdy number: ")/
    scanf("%i", &c);

    int x;

    if(a>b){
        x=a;
        a=b;
        b=x;
    }
    if(b>c){
        x=b;
        b=c;
        c=x;
    }
    if(a>b){
        x=a;
        a=b;
        b=x;
    }
    printf("%i, %i, %i", a, b, c);

    return 0;
}