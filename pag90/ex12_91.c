/*
Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e des-
contado o imposto de 7% sobre o salário.

                        TABELA dAs grATiFiCAçõEs
                SALÁRIO                     GRATIFICAÇÃO
            Até R$ 350,00                   R$ 100,00
            R$ 350,00-R$ 600,00             R$ 75,00
            R$ 600,00-R$ 900,00             R$ 50,00
            Acima de R$ 900,00              R$ 35,00
*/
#include <stdio.h>

int main(){
    float sbruto;
    float grat;
    float imp;
    float fim;

    printf("Qual eh o valor bruto do seu salario?\n");
    scanf("%f%*c", &sbruto);

    imp = sbruto * 0.07;

    if(sbruto <= 350){
        grat = 100;
        fim = (sbruto + grat) - imp;
        printf("Voce vai receber R$%.2f", fim);
    } else if(sbruto > 350 && sbruto < 600){
        grat = 75;
        fim = (sbruto + grat) - imp;
        printf("Voce vai receber R$%.2f", fim);
    } else if(sbruto >= 600 && sbruto <= 900 ){
        grat = 50;
        fim = (sbruto + grat) - imp;
        printf("Voce vai receber R$%.2f", fim);
    } else{
        grat = 35;
        fim = (sbruto + grat) - imp;
        printf("Voce vai receber R$%.2f", fim);
    }



    return 0;
}