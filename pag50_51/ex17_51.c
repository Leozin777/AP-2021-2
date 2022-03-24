#include <stdio.h>
#include <math.h>

int main(){
    float raio;
    float compE;
    float areaE;
    float volE;
    float pi = M_PI;
    printf("qual o raio da esfera?\n");
    scanf("%f%*c", &raio);
    compE = 2 * M_PI * raio;
    areaE = M_PI * (raio*raio);
    volE = ((4/3) * M_PI) * (raio * raio *raio);
    printf("O comprimento da esfera eh: %.2f\n", compE);
    printf("A area da esfera eh: %.2f\n", areaE);
    printf("O volume da esfera eh: %.2f\n", volE);


    return 0;
}