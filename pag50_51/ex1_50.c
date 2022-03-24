#include <stdio.h>

int main(){
    float n1;
    float n2;
    printf("qual o valor do primeiro numero?\n");
    scanf("%f%*c", &n1);
    printf("qual o valor do segundo numero?\n");
    scanf("%f%*c", &n2);
    float soma = n1 - n2;
    printf("O valor da subtracao dos dois numeros eh:%.2f", soma);

    return 0;
}
