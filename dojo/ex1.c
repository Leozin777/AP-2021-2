/*
Dados dois números A e B, some 100 ao maior número e imprima.
*/

#include <stdio.h>

int main(){
    float n1, n2, soma;
    printf("Digite o primeiro numero:");
    scanf("%f%*c", &n1);
    printf("Digite o segundo numero:");
    scanf("%f%*c", &n2);

    if(n1 > n2){
        soma = n1 + 100;
        printf("O valor da soma eh %.2f", soma);
    } else{
        soma = n2 + 100;
        printf("O valor da soma eh %.2f", soma);
    }

    return 0;
}