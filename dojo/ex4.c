/*
FUP que leia um número e mostre uma mensagem indicando se este número é par ou ímpar e se é positivo ou negativo.
*/

#include <stdio.h>

int main(){
    int n1;
    printf("Digite um numero: ");
    scanf("%d%*c", &n1);

    if(n1%2==0){
        if(n1 >= 0){
            printf("Esse numero e par e positivo :)");
        } else{
            printf("Esse numero e par e negativo");
        }
    } else{
        if(n1 >= 0){
            printf("Esse numero e impar e positivo :)");
        } else{
            printf("Esse numero e impar e negativo");
        }
    }

    return 0;
}