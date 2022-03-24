/*
Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas
extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela con-
sulta à tabela que se segue, na qual:

H = número de horas extras – (2/3 * (número de horas falta))

H (Minutos)                                     Prêmio (R$)
> = 2.400                                       500,00
1.800    2.400                                  400,00
1.200    1.800                                  300,00
600      1.200                                  200,00
< 600                                           100,00
*/
#include <stdio.h>

int main(){
    float H;
    float extra;
    float falta;

    printf("quantas horas extras voce fez?\n");
        scanf("%f%*c", &extra);
    printf("quantas horas voce faltou?\n");
        scanf("%f%*c", &falta);

    H = extra - (2/3 * (falta));

    if(H < 600){
        printf("Voce vai receber um premio de R$100,00");
    } else if(H >= 600 && H < 1200){
        printf("Voce vai receber um premio de R$200,00");
    } else if(H >= 1200 && H < 1800){
        printf("Voce vai receber um premio de R$300,00");
    }  else if(H >= 1800 && H < 2400){
        printf("Voce vai receber um premio de R$400,00");
    } else {
        printf("Voce vai receber um premio de R$500,00");
    }

    return 0;
}