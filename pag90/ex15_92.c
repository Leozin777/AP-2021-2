/*
Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um pro-
grama que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de
investimento, de acordo com o tipo de investimento.

Tipo            descrição           rendimento mensal
1               Poupança                  3%
2           Fundos de renda fixa          4%
*/
#include <stdio.h>
int main(){
    float valor;
    int op;

    printf("qual o valor que voce deseja inverstir?\n");
    scanf("%f%*c", &valor);
    printf("qual o tipo de operacao?\n 1) Poupanca\n 2) Fundos de renda fixa\n");
    scanf("%d%*c", &op);

    switch(op){
        case 1:
            printf("Descricao eh Poupanca, voce tem um rendimento mensal de R$%.2f", (valor) + (valor * 0.3));
        break;

        case 2:
            printf("Descricao eh Fundos de renda fixa, voce tem um rendimento mensal de R$%.2f", (valor) + (valor * 0.4));
        break;

        default:
            printf("Operacao invalida");
        break;
    }

    return 0;
}