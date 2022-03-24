/*
Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre em qual grupo de risco essa pessoa se encaixa.



IDADE                                               PESO

                                Até 60      Entre 60 e 90 (inclusive)        Acima de 90
Menores que 20                     9                8                             7
De 20 a 50                         6                5                             4
Maiores que 50                     3                2                             1
*/
#include <stdio.h>

int main(){
    int idade;
    float peso;

    printf("digite a sua idade:\n");
    scanf("%d%*c", &idade);
    printf("digite o seu peso:\n");
    scanf("%f%*c", &peso);

    if(idade < 20){
        if(peso < 60){
            printf("voce se encontra no grupo de risco '9'");
        } else if(peso >= 60 && peso <= 90){
            printf("voce se encontra no grupo de risco '8'");
        } else{
            printf("voce se encontra no grupo de risco '7'");
        }
    } else if(idade >= 20 && idade <= 50){
        if(peso < 60){
            printf("voce se encontra no grupo de risco '6'");
        } else if(peso >=60 && peso <= 90){
            printf("voce se encontra no grupo de risco '5'");
        } else{
            printf("voce se encontra no grupo de risco '4'");
        }
    } else{
        if(peso < 60){
            printf("voce se encontra no grupo de risco '3'");
        } else if(peso >= 60 && peso <= 90){
            printf("voce se encontra no grupo de risco '2'");
        } else{
            printf("voce se encontra no grupo de risco '1'");
        }
    }
    return 0;
}