#include <stdio.h>

int main(){
    float salario_fixo;
    float vendas_valor;
    float vendas_quantidade;
    printf("qual o valor do salario fixo do funcionario?\n");
    scanf("%f%*c", &salario_fixo);
    printf("qaul o valor das vendas do funcionario?\n");
    scanf("%f%*c", &vendas_valor);
    printf("quantas vendas o funcionario fez?\n");
    scanf("%f%*c", &vendas_quantidade);
    float comissao = (4 * vendas_valor) / 100;
    float salario_final = salario_fixo + comissao;
    printf("o valor da comissao eh:%f\n", comissao);
    printf("o salario final do funcionario eh:%f", salario_final);


    return 0;
}