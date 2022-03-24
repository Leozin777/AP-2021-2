#include <stdio.h>

int main(){
    float pesokg;
    float pesog;
    printf("voce pesa quanto em kg?\n");
    scanf("%f%*c", &pesokg);
    pesog = pesokg * 1000;
    printf("seu peso em gramas eh:%.2f", pesog);

    return 0;
}