#include <stdio.h>

int main(){
    float diagonal_menor;
    float diagonal_maior;
    float area;

    printf("qual o valor da menor diagonal do losangolo?\n");
    scanf("%f%*c", &diagonal_menor);
    printf("qual o valor da maior diagonal do losangolo?\n");
    scanf("%f%*c", &diagonal_maior);

    area = (diagonal_maior*diagonal_menor)/2;
    printf("A area do losango eh:%.2f", area);

    return 0;
}