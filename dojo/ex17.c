/*
A empresa Enxuga Gelo SA decidiu conceder um aumento de salários a seus funcionários de acordo com a tabela a seguir:
Salário Atual           Índice de Aumento
0 - 400,00                     15%
400,01 - 700,00                12%
700,01 - 1.000,00              10%
1.000,01 - 1.800,00            7%
1.800,01 - 2.500,00            4%
Acima de 2.500,00          sem aumento

Escrever um programa que lê o nome e o salário atual de funcionário e escreve o nome do funcionário,
seu salário atual, o percentual de seu aumento e o valor do salário corrigido.
*/
#include <stdio.h>

int main(){
    float sal, salf, aum;
    char nome[31];
    printf("Qual o seu nome?\n");
    scanf("%s%*c", &nome);
    printf("Qual o seu salario atual?\n");
    scanf("%f%*c", &sal);

    aum = 0;

    if(sal >= 0 && sal <= 400){
        salf = sal * 1.15;
        aum = 15;
    }else if(sal >= 400.01 && sal <= 700){
        salf = sal * 1.12;
        aum = 12;
    }else if(sal >= 700.01 && sal <= 1000){
        salf = sal * 1.10;
        aum = 10;
    }else if(sal >= 1000.01 && sal <= 1800){
        salf = sal * 1.07;
        aum = 7;
    }else if(sal >= 1800.01 && sal <= 2500){
        salf = sal * 1.04;
        aum = 4;
    }else{
        salf = sal;
        aum = 0;
    }

    if(aum >= 4 && aum <= 15){
        printf("Ola %s, seu salario era de R$%.2f, voce tem direito a um aumento de %.0f%%, seu salario atual eh R$%.2f", nome, sal, aum, salf);
    }else{
        printf("Ola %s, seu salario eh de R$%.2f, voce nao tem direito ao aumento", nome, sal);
    }

    return 0;
}