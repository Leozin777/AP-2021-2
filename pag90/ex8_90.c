/*
Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.

    Salário          Percentual de Aumento
até R$300,00                  35%
Acima de R$300,00             15%    
*/
#include <stdio.h>

int main(){
    float salario;
    float aumento1;
    float aumento2;
    float novoSalario1;
    float novoSalario2;

    printf("Qual o valor do seu salario?\n");
    scanf("%f%*c", &salario);

    aumento1 = (salario*35) / 100;
    aumento2 = (salario*15) / 100;
    novoSalario1 = salario + aumento1;
    novoSalario2 = salario + aumento2;

    if(salario <= 300){
        printf("Parabens, voce recebeu um aumento de 35%%, seu novo salario eh R$%.2f", novoSalario1);
    } else{
        printf("Parabens, voce recebeu um aumento de 15%%, seu novo salario eh R$%.2f", novoSalario2);
    }

    return 0;
}