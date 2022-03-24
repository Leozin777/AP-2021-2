//Faça um programa que receba três números e mostre o maior.

#include <stdio.h>

int main(){
    float n1;
    float n2;
    float n3;

    printf("qual o valor do primeiro numero?\n");
    scanf("%f%*c", &n1);
    printf("qual o valor do segundo numero?\n");
    scanf("%f%*c", &n2);
    printf("qual o valor do terceiro numeor?\n");
    scanf("%f%*c", &n3);

    if (n1 > n2 && n1 > n3){
        printf("%.2f eh o maior", n1);
    }

    if (n2 > n1 && n2 > n3){
        printf("%.2f eh o maior", n2);
    }

    if (n3 > n1 && n3 > n2){
        printf("%.2f eh o maior", n3);
    }


    return 0;
}