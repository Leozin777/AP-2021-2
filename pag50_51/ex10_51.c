#include <stdio.h>

int main(){
    float lado1;
    float lado2;
    float area;
    printf("qual o valor do primeiro lado?\n");
    scanf("%f%*c", &lado1);
    printf("qual o valor do segundo lado?\n");
    scanf("%f%*c", &lado2);

    area = lado1*lado2;
    printf("A area do quadrado eh:%.2f", area);

    return 0;
}