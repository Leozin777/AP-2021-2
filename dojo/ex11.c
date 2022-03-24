/*
O hotel Pica-Pau cobra 50,00 Reais a diária e mais uma taxa de serviços. A taxa de serviços é de:
    1,50 por dia, se número de diárias <15
    1,00 por dia, se número de diárias =15
    0,50 por dia, se número de diárias >15
FUP que lê o número de diárias e calcula o total a ser pago pelo cliente.
*/

#include <stdio.h>

int main(){
    float precoD = 50, taxaS, valorF;
    int diarias;
    printf("Qual o numero de diarias?");
    scanf("%d%*c", &diarias);
    
    
    if(diarias < 15){
        taxaS = 1.50 * diarias;
        valorF = taxaS + precoD;
        printf("O valor total a ser pago pelo cliente eh de R$%.2f", valorF);
    } else if(diarias == 15){
        taxaS = 1.00 * diarias;
        valorF = taxaS + precoD;
        printf("O valor total a ser pago pelo cliente eh de R$%.2f", valorF);
    } else{
        taxaS = 0.50 * diarias;
        valorF = taxaS + precoD;
        printf("O valor total a ser pago pelo cliente eh de R$%.2f", valorF);
    }

    return 0;
}