/*
Uma empresa decide aplicar descontos nos seus preços usando a tabela a seguir. Faça um programa que
receba o preço atual de um produto e seu código, calcule e mostre o valor do desconto e o novo preço.

Preço atual                         % de desconto
Até R$ 30,00                        Sem desconto
Entre R$ 30,00 e R$ 100,00              10%
Acima de R$ 100,00                      15%
*/
#include <stdio.h>

int main(){
    float preco;
    float desconto;
    float npreco;

    printf("qual eh o preco do produto ?\n");
    scanf("%f%*c", &preco);

    if(preco < 30){
        printf("sem desconto nesse produto :(");
    } else if(preco >= 30 && preco <= 100){
        desconto = preco * 0.1;
        npreco = preco - desconto;
        printf("voce ganhou um desconto de 10%%, o valor do produto com o desconto eh de R$%.2f :)", npreco);
    } else {
        desconto = preco * 0.15;
        npreco = preco - desconto;
        printf("voce ganhou um desconto de 15%%, o valor do produto com o desconto eh de R$%.2f :)", npreco);
    }

    return 0;
}