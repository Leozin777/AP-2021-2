#include <stdio.h>

int main(){
    float preco;
    printf("qual o preco do produto?\n");
    scanf("%f%*c", &preco);
    float desconto = preco - ((preco * 10) / 100);
    printf("o novo preco eh: R$%.2f", desconto);

    return 0;
}