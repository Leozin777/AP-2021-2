/*
Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números.
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n1;
    int n2;
    int escolha;
    float A;
    float B1;
    float B2;
    float C1;
    float C2;

    printf("qual o valor do primeiro numero?\n");
    scanf("%i%*c", &n1);
    printf("qual o valor do segundo numero?\n");
    scanf("%i%*c", &n2);
    printf("digite o numero da operacao que voce deseja executar (de 1 a 3)\n");
    scanf("%i%*c", &escolha);

    A = pow(n1,n2);
    B1 = sqrt(n1);
    B2 = sqrt(n2);
    C1 = pow(n1,1.0/3.0);
    C2 = pow(n2,1.0/3.0);

    if(escolha == 1 || escolha == 2 || escolha == 3){
        if(escolha == 1){
            printf("O primeiro numero elevado ao segundo numero eh: %.2f", A);
        }
        if(escolha == 2){
            printf("a raiz quadrada do primeiro numero e do segundo sao respectivamente: %.2f e %.2f", B1, B2);
        }
        if(escolha == 3){
            printf("a raiz cubica do primeiro numero e do segundo sao respectivamente: %.2f e %.2f", C1, C2);
        }
    } else{
        printf("Operacao invalida.");
    }   


    

    return 0;
}