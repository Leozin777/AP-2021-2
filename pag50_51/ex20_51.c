#include <stdio.h>

int main(){
    float angulo;
    float distancia;
    float hipotenusa;
    printf("qual o angulo da escada\n");
    scanf("%f%*c", &angulo);
    printf("Qual a distancia que a escada esta da parede?\n");
    scanf("%f",&distancia);
    hipotenusa = distancia / cos(angulo);
    printf("A medida da escada eh\n %f",hipotenusa);


    return 0;
}