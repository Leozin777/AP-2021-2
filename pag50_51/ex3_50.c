#include <stdio.h>

int main(){
    float n1;
    float n2;
    printf("qual o valor do primeiro numero?\n");
    scanf("%f%*c", &n1);
    printf("qual o valor do segundo numero?\n");
    scanf("%f%*c", &n2);
    float resultado = n1 / n2;
    printf("o resultado da divisao eh:%.2f", resultado);

    return 0;
}