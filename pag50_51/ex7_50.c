#include <stdio.h>

int main(){
    float peso;
    printf("qual o seu peso?\n");
    scanf("%f%*c", &peso);
    float engordar = peso * 1.15;
    float emagrecer = peso * 0.8;

    printf("Seu peso atuel %2.f\n", peso);
    printf("Seu peso se engordar: %2.f\n", engordar);
    printf("Seu peso se emagrecer: %2.f\n", emagrecer);

    
    return 0;
}