/*
Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.
*/

#include <stdio.h>

int main(){
    float salario;
    float valorAumento;
    float novoSalario;

    printf("Qual o valor do seu salario?\n");
    scanf("%f%*c", &salario);

    valorAumento = (salario*30) / 100;
    novoSalario = valorAumento + salario;

    if(salario < 500){
        printf("Parabens voce recebeu um aumento de 30%%, agora o valor do seu salario eh R$%.2f", novoSalario);
    } else{
        printf("parece que voce nao tem direito ao aumento, seu salario continua sendo de R$%.2f", salario);
    }


    return 0;
}