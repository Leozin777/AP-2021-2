#include <stdio.h>

int main(){
    float n1;
    float n2;
    float n3;
    printf("qual o valor do primeiro numero?\n");
    scanf("%f%*c", &n1);
    printf("qual o valor do segundo numero?\n");
    scanf("%f%*c", &n2);
    printf("qual o valor do terceiro numero?\n");
    scanf("%f%*c", &n3);
    float resultado = n1 * n2 * n3;
    printf("o resultado da multiplicacao eh:%f", resultado);

    return 0;
}