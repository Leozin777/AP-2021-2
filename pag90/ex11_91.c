/*
Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário.

Salário                 Percentual de aumento
Até R$ 300,00                   15%
R$ 300,00 R$ 600,00             10%
R$ 600,00 R$ 900,00             5%
Acima de R$ 900,00              0%
*/
#include <stdio.h>

int main(){
    float Satual;
    float aumento;
    float Sfinal;

    printf("Qual eh o seu salario atual?\n");
    scanf("%f%*c", &Satual);

    if(Satual <= 300){
        aumento = (Satual * 15)/100;
        Sfinal = Satual + aumento;
        printf("parabens voce recebeu um aumento de R$%.2f (15%% de aumento), agora voce recebe R$%.2f",aumento, Sfinal);
    } else if(Satual > 300 && Satual < 600){
        aumento = (Satual * 10)/100;
        Sfinal = Satual + aumento;
        printf("parabens voce recebeu um aumento de R$%.2f (10%% de aumento), agora voce recebe R$%.2f",aumento, Sfinal);
    } else if(Satual >= 600 && Satual <= 900){
        aumento = (Satual * 5)/100;
        Sfinal = Satual + aumento;
        printf("parabens voce recebeu um aumento de R$%.2f (5%% de aumento), agora voce recebe R$%.2f",aumento, Sfinal);
    } else {
        printf("Que pena, parece que voce nao tem direito ao aumento :(");
    }

    return 0;
}