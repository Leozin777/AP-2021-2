/*
Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.

Faixa salarial                                         % de aumento
Até R$ 300,00                                               50%
R$ 300,00 - R$ 500,00                                       40%
R$ 500,00 - R$ 700,00                                       30%
R$ 700,00 - R$ 800,00                                       20%
R$ 800,00 - R$ 1.000,00                                     10%
Acima de R$ 1.000,00                                        5%
*/
#include <stdio.h>

int main(){
    float sal;
    float aumento;
    float nsal;

    printf("Qual o valor do salario?\n");
    scanf("%f%*c", &sal);

    if(sal <= 300){
        aumento = (sal * 50) / 100;
        nsal = sal + aumento;
        printf("parabens, voce recebeu um aumento de 50%%, agora voce recebe R$%.2f", nsal);
    } else if(sal > 300 && sal <= 500){
        aumento = (sal * 40) / 100;
        nsal = sal + aumento;
        printf("parabens, voce recebeu um aumento de 40%%, agora voce recebe R$%.2f", nsal);
    } else if(sal > 500 && sal <= 700){
        aumento = (sal * 30) / 100;
        nsal = sal + aumento;
        printf("parabens, voce recebeu um aumento de 30%%, agora voce recebe R$%.2f", nsal);
    } else if(sal > 700 && sal <= 800){
        aumento = (sal * 20) / 100;
        nsal = sal + aumento;
        printf("parabens, voce recebeu um aumento de 20%%, agora voce recebe R$%.2f", nsal);
    } else if(sal > 800 && sal <= 1000){
        aumento = (sal * 10) / 100;
        nsal = sal + aumento;
        printf("parabens, voce recebey um aumento de 10%%, agora voce recebe R$%.2f", nsal);
    } else{
        aumento = (sal * 5) / 100;
        nsal = sal + aumento;
        printf("parabens, voce recebey um aumento de 5%%, agora voce recebe R$%.2f", nsal);
    }
    
    return 0;
}