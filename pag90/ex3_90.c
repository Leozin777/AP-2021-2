//Faça um programa que receba dois números e mostre o menor.

#include <stdio.h>

int main(){
    float n1;
    float n2;

    printf("qual o valor do primeiro numero?\n");
    scanf("%f%*c", &n1);
    printf("qual o valor do segundo numero?\n");
    scanf("%f%*c", &n2);

    if (n2 < n1){
        printf("%.2f eh o menor entre os dois", n2);
    }else{
        printf("%.2f eh o menor entre os dois", n1);
    }

    return 0;
}