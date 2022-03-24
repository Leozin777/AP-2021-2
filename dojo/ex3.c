/*
FUP para ler dois valores numéricos e apresentar a diferença do maior pelo menor. 
*/

#include <stdio.h>

int main(){
    float n1, n2, res;
    printf("Digite o valor do primeiro numero: ");
    scanf("%f%*c", &n1);
    printf("Digite o valor do segundo numero: ");
    scanf("%f%*c", &n2);

    if(n1 > n2){
        res = n1 - n2; 
        printf("a diferença dos numeros eh: %.2f", res);
    } else{
        res = n2 - n1;
        printf("a diferençado dos numeros eh: %2.f", res);
    }

    return 0;
}