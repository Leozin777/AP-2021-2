/*Escrever um programa que lê o número de um funcionário, o número de horas por ele trabalhadas, o valor que recebe por hora, o número de filhos com idade inferior a 14 anos, a idade, o tempo de serviço do funcionário e o valor do salário família por filho. Calcular o salário bruto, o desconto do INSS (8,5% do salário bruto) e o salário família. Calcular o IR (Imposto de Renda) como segue: 
Se SB > 1.500,00 então IR = 15% do SB
Se SB > 500,00 e SB <= 1.500,00 então IR = 8% do SB
Se SB <= 500,00 então IR = 0. 
Escrever o número do funcionário, salário bruto, total dos descontos, e salário líquido.
*/

#include <stdio.h>

int main(){
    int numFunc, filhos, idade, tempoServico;
    float horas, valorHora, valorSalFilho, salBruto, salFamilia, INSS, IR, salarioLiquido, desconto;

        printf("Informe o numero do funcionario: \n");
        scanf("%d%*c", &numFunc);

        printf("Informe o numero de horas trabalhadas: \n");
        scanf("%f%*c", &horas);

        printf("Informe o valor que recebe por hora: \n");
        scanf("%f%*c", &valorHora);

        printf("Informe o numero de filhos do funcionario com idade inferior a 14 anos: \n");
        scanf("%d%*c", &filhos);

        printf("Informe o tempo de servico do funcionario em dias: \n");
        scanf("%d%*c", &tempoServico);

        printf("Informe o valor do salario familia por filho: \n");
        scanf("%f%*c", &valorSalFilho);


        if(filhos >= 1){
            salFamilia = filhos * valorSalFilho;
            salBruto = salFamilia + (horas * valorHora);
        }
        else{
            salBruto = horas * valorHora;
        }

        INSS = (salBruto * 8.5)/100;
        
        if(salBruto >1.500){
            IR = (salBruto * 15)/100;
        }

        else if((salBruto>500)&&(salBruto<=1.500)){
            IR = (salBruto * 8)/100;
        }

        else{
            IR = 0;
        }

        desconto = IR + INSS;
        salarioLiquido = salBruto - desconto;

        printf(" O numero do funcionario eh: %d | O salario bruto eh: %.2f | Total dos descontos: %.2f | O salario liquido eh: %.2f", numFunc, salBruto, desconto, salarioLiquido);
         

    return 0;
}