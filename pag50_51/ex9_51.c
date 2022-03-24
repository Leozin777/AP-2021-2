#include <stdio.h>

int main(){
    float base_maior;
    float base_menor;
    float altura;
    float area;
    printf("Qual a base maior do trapezio?\n");
    scanf("%f%*c", &base_maior);
    printf("Qual a base menor do trapezio\n");
    scanf("%f%*c", &base_menor);
    printf("Qual a altura do trapezio?\n");
    scanf("%f%*c", &altura);
    
    area = ((base_maior+base_menor)*altura)/2;
    printf("A area do trapezio eh:%.2f", area);

    return 0;
}