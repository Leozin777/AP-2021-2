/*
Faça um programa que receba:
■ o código do produto comprado; e
■ a quantidade comprada do produto.
Calcule e mostre:
■ o preço unitário do produto comprado, seguindo a Tabela I;
■ o preço total da nota;
■ o valor do desconto, seguindo a Tabela II e aplicado sobre o preço total da nota; e
■ o preço final da nota depois do desconto.

TABELA I
Código               Preço
1 a 10              R$ 10,00
11 a 20             R$ 15,00
21 a 30             R$ 20,00
31 a 40             R$ 30,00

TABELA II

Preço Total da nota                                 % de desconto
Até R$ 250,00                                          5%
Entre R$ 250,00 e R$ 500,00                            10%
Acima de R$ 500,00                                     15%
*/
#include <stdio.h>

int main(){
    int codp;
    int quant;
    float precou;
    float precot;
    float precof;
    float desc;

    printf("qual o codigo do produto ?\n");
    scanf("%d%*c", &codp);
    printf("quantos produtos voce vai levar?\n");
    scanf("%d%*c", &quant);

    if(codp <= 10){
        precou = 10;
        precot = quant * precou; 
        printf("o preco da unidade eh: R$10.00 e o total da nota sem desconto eh: R$%.2f\n ", precot);

    } else if(codp <= 20){
        precou = 15;
        precot = quant * precou; 
    } else if(codp <= 30){
        precou = 20;
        precot = quant * precou; 
    } else if(codp <= 40){
        precou = 30;
        precot = quant * precou; 
    }

    if(precot < 250){
        desc = precot * 0.05;
        precof = precot - desc;
        printf("o valor do desconto foi de R$%.2f, a nota com o desconto ficou R$%.2f", desc, precof);
    } else if(precot >= 250 && precot <= 500){
        desc = precot * 0.10;
        precof = precot - desc;
        printf("o valor do desconto foi de R$%.2f, a nota com o desconto ficou R$%.2f", desc, precof);
    } else {
        desc = precot * 0.15;
        precof = precot - desc;
        printf("o valor do desconto foi de R$%.2f, a nota com o desconto ficou R$%.2f", desc, precof);
    }
    return 0;
}