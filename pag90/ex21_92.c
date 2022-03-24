/*
Faça um programa que receba o preço de um produto e seu código de origem e mostre sua procedência.
A procedência obedece à tabela a seguir.

Código de origem             Procedência
1                               Sul
2                               Norte
3                               Leste
4                               Oeste
5 ou 6                          Nordeste
7 ou 8 ou 9                     Sudeste
10 a 20                         Centro-oeste
21 a 30                         Nordeste
*/
#include <stdio.h>

int main(){
    int cod;

    printf("qual o codigo do produto?\n");
    scanf("%d%*c", &cod);

    if(cod == 1){
        printf("a procedencia eh: Sul");
    } else if(cod == 2){
        printf("a procedencia eh: Norte");
    } else if(cod == 3){
        printf("a procedencia eh: Leste");
    } else if(cod == 4){
        printf("a procedencia eh: Oeste");
    } else if(cod >= 5 && cod <= 6){
        printf("a procedencia eh: Nordeste");
    } else if(cod >= 7 && cod <= 9){
        printf("a procedencia eh: Sudeste");
    } else if(cod >= 10 && cod <= 20){
        printf("a procedencia eh: Centro-Oeste");
    } else if(cod >= 21 && cod <= 30){
        printf("a procedencia eh: Nordeste");
    } else {
        printf("[ERRO] Verifique os dados e tente novamente :(");
    }

    return 0;
}