#include <stdio.h>

int main(){
    float salario;
    float conta1;
    float conta2;
    float atraso1;
    float atraso2;
    float finalConta1;
    float finalConta2;
    float resto;
    printf("quando eh o seu salário, joao?\n");
    scanf("%f%*c", &salario);   
    printf("qual o valor da primeira conta?\n");
    scanf("%f%*c", &conta1); 
    printf("qual o valor da segunda conta?\n");
    scanf("%f%*c", &conta2); 
    atraso1 = conta1 * 0.2;
    atraso2 = conta2 * 0.2;
    finalConta1 = conta1 + atraso1;
    finalConta2 = conta2 + atraso2;
    resto = salario - (finalConta1 + finalConta2);
    printf("O que restou do seu salario foi: R$%.2f", resto);

    return 0;
}