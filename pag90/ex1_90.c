//Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
//mensagem de aprovado ou reprovado, considerando para aprovação média 7.

#include <stdio.h>

int main(){
    float n1;
    float n2;
    float n3;
    float n4;
    float media;

    printf("qual eh o valor da sua primeira nota ?\n");
    scanf("%f%*c", &n1);

    printf("qual eh o valor da sua segunda nota ?\n");
    scanf("%f%*c", &n2);

    printf("qual eh o valor da sua terceira nota ?\n");
    scanf("%f%*c", &n3);

    printf("qual eh o valor da sua quarta nota ?\n");
    scanf("%f%*c", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if (media >= 7){
        printf("voce foi aprovado :)");
    }else{
        printf("voce foi reprovado :(");
    }

    return 0;
}