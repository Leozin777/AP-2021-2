/*
Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.
*/  
#include <stdio.h>

int main(){
    int idade;

    printf("quantos anos voce tem?\n");
    scanf("%d%*c", &idade);

    if(idade >= 18){
        printf("voce eh maior de idade :)");
    } else{
        printf("voce eh menor de idade :(");
    }

    return 0;
}