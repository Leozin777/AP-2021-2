/*
FUP para ler dois valores: NUM1 e NUM2,
e se NUM1 for maior que NUM2 executa a soma de NUM1 e NUM2; caso contrário, executa uma subtração.
*/

#include <stdio.h>

int main(){
    float n1, n2, res;
    printf("Digite o primeiro numero: ");
    scanf("%f%*c", &n1);
    printf("Digite o primeiro numero: ");
    scanf("%f%*c", &n2);

    if(n1 > n2){
        res = n1 + n2;
        printf("A soma do primeiro numero com  o segundo eh: %.2f", res);
    } else{
        res = n1 - n2;
        printf("A subtracao do primeiro numero pelo segundo eh: %.2f", res);
    }

    return 0;
}