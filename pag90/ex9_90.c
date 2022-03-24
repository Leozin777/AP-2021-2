/*
Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito.

Saldo Médio                   Percentual
Acima de R$ 400,00        30% do saldo médio
R$ 400,00  R$ 300,00      25% do saldo médio
R$ 300,00  R$ 200,00      20% do saldo médio
Até R$ 200,00             10% do saldo médio
*/

#include <stdio.h>

int main(){
    float saldoM;
    float P30;
    float P25;
    float P20;
    float P10;

    printf("Qual o valor do seu saldo medio?\n");
    scanf("%f%*c", &saldoM);

    P30 = ((saldoM*30)/100) + saldoM;
    P25 = ((saldoM*25)/100) + saldoM;
    P20 = ((saldoM*20)/100) + saldoM;
    P10 = ((saldoM*10)/100) + saldoM;

    if(saldoM > 400){
        printf("Voce possui R$%.2f de saldo medio e R$%.2f de credito", saldoM, P30);
    }else if(saldoM > 300 && saldoM <= 400){
        printf("Voce possui R$%.2f de saldo medio e R$%.2f de credito", saldoM, P25);
    }else if(saldoM > 200 && saldoM <= 300){
         printf("Voce possui R$%.2f de saldo medio e R$%.2f de credito", saldoM, P20);
    }else if(saldoM <= 200){
         printf("Voce possui R$%.2f de saldo medio e R$%.2f de credito", saldoM, P10);
    }


    return 0;
}