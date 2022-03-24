/*Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário.
Escolha do usuário          operação
1                  Média entre os números digitados
2                  Diferença do maior pelo menor
3                  Produto entre os números digitados
4                  Divisão do primeiro pelo segundo

Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.
*/

#include <stdio.h>

int main(){
    float n1;
    float n2;
    int escolha;
    float e1;
    float e3;
    float e4;

    printf("digite o primeiro numero\n");
    scanf("%f%*c", &n1);
    printf("digite o segundo numero\n");
    scanf("%f%*c", &n2);
    printf("qual operacao deseja executar?\n");
    scanf("%i%*c", &escolha);

    e1 = (n1 + n2) / 2;
    e3 = n1 * n2;
    e4 = n1 / n2;

    if (escolha == 1){
        printf("%.2f eh a media entre os dois numeros\n", e1);
    }

    if (escolha == 2){
        if(n1 > n2){
            printf("%.2f eh maior que %.2f\n", n1, n2);
        }else {
        printf("%.2f eh maior que %.2f\n", n2, n1);
    }
    }

    if (escolha == 3){
        printf("%.2f eh o produto dos dois numeros\n", e3);
    }

    if (escolha == 4){
        printf("%.2f eh o resultado da divisao do primeiro numero pelo segundo\n", e4);
    }


    return 0;
}