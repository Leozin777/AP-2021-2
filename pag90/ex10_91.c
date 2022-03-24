/*
O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distri-
buidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a
seguir. Faça um programa que receba o custo de fábrica de um carro e mostre o preço ao consumidor.

    Custo de fábrica                       % do distribuidor     % dos impostos
Até R$ 12.000,00                                    5                  isento
Entre R$ 12.000,00 e R$ 25.000,00                   10                  15
Acima de R$ 25.000,00                               15                  20
*/
#include <stdio.h>

int main(){
    float custoF;
    float distribuidor;
    float impostos;
    float final;

    printf("Qual o custo de fabrica do carro?\n");
    scanf("%f%*c", &custoF);

    if(custoF < 12000){
        distribuidor = (custoF * 5)/100;
        final = custoF + distribuidor;
        printf("O preco do carro eh R$%.2f", final);
    } else if(custoF >= 12000 && custoF <= 25000){
        distribuidor = (custoF *10)/100;
        impostos = (custoF * 15)/100;
        final = custoF + distribuidor + impostos;
        printf("O preco do carro eh R$%.2f", final);
    } else if(custoF > 25000){
        distribuidor = (custoF * 15)/100;
        impostos = (custoF * 20)/100;
        final = custoF + distribuidor + impostos;
        printf("O preco do carro eh R$%.2f", final);
    }

    return 0;
}