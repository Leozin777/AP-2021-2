/*
Faça um programa que receba o preço, a categoria (1 — limpeza; 2 — alimentação; ou 3 — vestuário)
e a situação (R — produtos que necessitam de refrigeração; e N — produtos que não necessitam de re-
frigeração).

Calcule e mostre:
■■ O valor do aumento, usando as regras que se seguem.

Preço       Categoria               Percentual de Aumento
< = 25          1                              5%
< = 25          2                              8%
< = 25          3                              10%

> 25            1                              12%
> 25            2                              15%           
> 25            3                              18%

■■O valor do imposto, usando as regras a seguir.
O produto que preencher pelo menos um dos seguintes requisitos pagará imposto equivalente a 5%
do preço; caso contrário, pagará 8%. Os requisitos são:
Categoria: 2
Situação: R
■■ O novo preço, ou seja, o preço mais aumento menos imposto.
■■ A classificação, usando as regras a seguir.

Novo Preço                              Classificação
< = R$ 50,00                                Barato
Entre R$ 50,00 e R$ 120,00                  Normal
> = R$ 120,00                               Caro
*/

int main(){
    float preco;
    float aumento;
    float Npreco;
    float imp;
    int cat;
    char situacao;

    printf("qual o preco do produto?\n");
        scanf("%f%*c", &preco);
    printf("qual a categoria do produto?\nlembrando que: (1: limpeza; 2: alimentacao; ou 3: vestuario)\n");
        scanf("%d%*c", &cat);
    printf("qual a situacao do produto?\nMarque R: produtos que necessitam de refrigeracao; e N: produtos que nao necessitam de refrigeracao)\n");
        scanf("%c%*c", &situacao);

    if(preco <= 25){
        if(cat == 1){
            aumento = preco * 1.05;
                printf("o aumento foi de 5%%, o valor do aumento eh R$%.2f\n",aumento);
        } else if(cat == 2){
            aumento = preco * 1.08;
                printf("o aumento foi de 8%%, o valor do aumento eh R$%.2f\n",aumento);
        } else if(cat == 3){
            aumento = preco * 1.10;
                printf("o aumento foi de 10%%, o valor do aumento eh R$%.2f\n",aumento);
        } else{
                printf("Categoria inválida");
        }
    } else{
        if(cat == 1){
            aumento = preco * 1.12;
                printf("o aumento foi de 12%%, o valor do aumento eh R$%.2f\n",aumento);
        } else if(cat == 2){
            aumento = preco * 1.15;
                printf("o aumento foi de 15%%, o valor do aumento eh R$%.2f\n",aumento);
        } else if(cat == 3){
            aumento = preco * 1.18;
                printf("o aumento foi de 18%%, o valor do aumento eh R$%.2f\n",aumento);
        } else{
                printf("Categoria inválida");
        }
    }     

    if(cat == 2 || situacao == 'R'){
        imp = preco * 0.5;
        Npreco = (preco + aumento) - imp;
            printf("Voce tera de pagar um imposto de 5%% neste produto :/, seu novo preco eh R$%.2f\n", Npreco);
    }else{
        imp = preco * 0.8;
        Npreco = (preco + aumento) - imp;
            printf("Voce tera de pagar um imposto de 8%% neste produto :(, seu novo preco eh R$%.2f\n", Npreco);
    }   

    if(Npreco <= 50){
        printf("Este produto recebeu a classificacao 'Barato'");
    } else if(Npreco > 50 && Npreco < 120){
        printf("Este produto recebeu a classificacao 'Normal'");
    } else{
        printf("Este produto recebeu a classificacao 'Caro'");
    }

    return 0;
}