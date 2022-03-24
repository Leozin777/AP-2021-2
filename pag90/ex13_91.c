/*
Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, 
o novo preço e a classificação.

            TABELA 1 — Percentual de aumento             
Preço                           %
Até R$ 50,00                    5
Entre R$ 50,00 e R$ 100,00      10
Acima de R$ 100,00              15

            TABELA 2 — Classificações
Novo Preço                                      Classificação
Até R$ 80,00                                        Barato
Entre R$ 80,00 e R$ 120,00 (inclusive)              Normal
Entre R$ 120,00 e R$ 200,00 (inclusive)             Caro
Maior que R$ 200,00                                 Muito caro
*/
#include <stdio.h>

int main(){
    float precoP;
    float nprecoP;
    float imp;

    printf("Qual o preco do produto?\n");
    scanf("%f%*c", &precoP);

    if(precoP < 50){
        imp = (precoP * 5) / 100;
        nprecoP = precoP + imp;
        if(nprecoP < 80){
            printf("o novo preco do produto R$%.2f e a classificacao eh Barato", nprecoP);
        } else if(nprecoP >= 80 && nprecoP <= 120){
            printf("o novo preco do produto eh R$%.2f e a classificacao eh Normal", nprecoP);
        } else if(nprecoP > 120 && nprecoP <= 200){
            printf("o novo preco do produto eh R$%.2f e a classificacao eh Caro", nprecoP);
        } else{
            printf("o novo preco do produto eh R$%.2f e a classificacao eh Muito caro", nprecoP);
        }
    } else if(precoP >= 50 && precoP <= 100){
        imp = (precoP * 10) / 100;
        nprecoP = precoP + imp;
        if(nprecoP < 80){
            printf("o novo preco do produto R$%.2f e a classificacao eh Barato", nprecoP);
        } else if(nprecoP >= 80 && nprecoP <= 120){
            printf("o novo preco do produto eh R$%.2f e a classificacao eh Normal", nprecoP);
        } else if(nprecoP > 120 && nprecoP <= 200){
            printf("o novo preco do produto eh R$%.2f e a classificacao eh Caro", nprecoP);
        } else{
            printf("o novo preco do produto eh R$%.2f e a classificacao eh Muito caro", nprecoP);
        }    
    } else{
      imp = (precoP * 10) / 100;
        nprecoP = precoP + imp;
        if(nprecoP < 80){
            printf("o novo preco do produto R$%.2f e a classificacao eh Barato", nprecoP);
        } else if(nprecoP >= 80 && nprecoP <= 120){
            printf("o novo preco do produto eh R$%.2f e a classificacao eh Normal", nprecoP);
        } else if(nprecoP > 120 && nprecoP <= 200){
            printf("o novo preco do produto eh R$%.2f e a classificacao eh Caro", nprecoP);
        } else{
            printf("o novo preco do produto eh R$%.2f e a classificacao eh Muito caro", nprecoP);
        }   
    }

    return 0;
}