#include <stdio.h>

int main(){
    float lado;
    float ND;
    printf("quantos lados tem o poligono ?\n");
    scanf("%f%*c", &lado);

    ND = lado * (lado - 3) / 2;

    printf("o numero de diagonais eh:%.2f\n", ND);

    return 0;
}