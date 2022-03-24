/*
Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é 4531. O
programa deve mostrar uma mensagem de permissão de acesso ou não.
*/
#include <stdio.h>

int main(){
    float senha = 4531;
    float tent;

    printf("digite a senha\n");
    scanf("%f%*c", &tent);

    if(tent == senha){
        printf("acesso permitido");
    } else{
        printf("acesso negado");
    }

    return 0;
}