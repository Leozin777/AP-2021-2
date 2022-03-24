//Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
//na tabela a seguir:

#include <stdio.h>

int main(){
    float n1;
    float n2;
    float media;

    printf("qual o valora da primeira nota?\n");
    scanf("%f%*c", &n1);

    printf("qual o valor da segunda nota?\n");
    scanf("%f%*c", &n2);

    media = (n1 + n2) / 2;

    if(media < 3){
        printf("reprovado");
    }else if(media >= 3 && media < 7){
        printf("exame");
    }else if(media >= 7 && media <=10){
        printf("aprovado");
    }



    return 0;
}