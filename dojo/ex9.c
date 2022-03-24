/*
FUP para ler três valores quaisquer e escrever o maior dos 3.
*/

#include <stdio.h>

int main(){
    float n1, n2, n3;
    printf("Digite o primeiro numero: ");
    scanf("%f%*c", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f%*c", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%f%*c", &n3);

    if(n1 > n2 && n1 > n3){
        printf("O primeiro numero eh o maior");
    } else if(n2 > n1 && n2 > n3){
        printf("O segundo numero eh o maior");
    } else if (n3 > n1 && n3 > n1){
        printf("O terceiro numero eh o maior");
    }

    return 0;
}