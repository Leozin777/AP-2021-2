#include <stdio.h>

int main(){
    float angulo1;
    float angulo2;
    float final;
    printf("qual o valor do primeiro angulo?\n");
    scanf("%f%*c", &angulo1);
    printf("qual o valor do segundo angulo?\n");
    scanf("%f%*c", &angulo2);

    final = 180 - (angulo1 + angulo2);

    printf("o valor do terceiro angulo do triangulo eh: %f\n", final);

    return 0;
}