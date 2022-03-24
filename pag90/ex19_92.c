/*
Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizan-
do as seguintes fórmulas (onde h é a altura):

■ para homens: (72.7 * h) – 58.
■ para mulheres: (62.1 * h) – 44.7.
*/
#include <stdio.h>

int main(){
    float altura;
    int sexo;
    float peso;

    printf("Digite a sua altura:\n");
    scanf("%f%*c", &altura);
    printf("Digite '1' para masculino e '2' para feminino:\n");
    scanf("%d%*c", &sexo);

    if(sexo == 1){
        peso = (72.7 * altura) - 58;
        printf("O seu peso ideal eh: %.2f kg", peso);
    } else if(sexo == 2){
        peso = (62.1 * altura) - 44.7;
        printf("O seu peso ideal eh: %.2f kg", peso);
    } else {
        printf("Algo deu errado, verifique os dados e tente novamente.");
    }

    return 0;
}