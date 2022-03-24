/*
Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as regras a seguir.
Para idade inferior a 5, deverá mostrar mensagem.

Categoria                           idade
Infantil                            5 a 7
Juvenil                             8 a 10
Adolescente                         11 a 15
Adulto                              16 a 30
Sênior                              Acima de 30
*/
#include <stdio.h>

int main(){
    int idade;

    printf("Quantos anos voce tem?\n");
    scanf("%d%*c");

    if(idade < 5){
        printf("voce nao pode nadar, lamento :(");
    }else if(idade >= 5 && idade <= 7){
        printf("sua categoria eh 'Infantil'");
    } else if(idade >= 8 && idade <= 10){
        printf("sua categoria eh 'Juvenil'");
    } else if(idade >= 11 && idade <= 15){
        printf("sua categoria eh 'Adolescente'");
    } else if(idade >= 16 && idade <= 30){
        printf("sua categoria eh 'Adulto'");
    } else{
        printf("sua categoria eh 'Senior'");
    }

    return 0;
}