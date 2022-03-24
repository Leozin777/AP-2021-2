/*
FUP para ler dois números. Se os números forem iguais imprimir a mensagem:
"NÚMEROS IGUAIS" e encerrar a execução; caso contrário, imprimir o de maior valor.
*/

#include <stdio.h>

int main(){
    float n1, n2;

    printf("Digite o primeiro numero:");
    scanf("%f%c", &n1);

    printf("Digite o segundo numero:");
    scanf("%f%c", &n2);

    if(n1 == n2){
        printf("NUMEROS IGUAIS!!!");
    }

    else if (n1 > n2){
        printf("O maior numero eh: %.2f", n1);
    }

    else{
        printf("O maior numero eh: %.2f", n2);
    }

    return 0;
}