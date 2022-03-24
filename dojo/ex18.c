/*Faça um programa que leia a altura e o sexo de uma pessoa, calcule seu peso ideal, utilizando as seguintes fórmulas:
para homens : (72.7*altura) –58;
para mulheres : (62.1*altura) – 44.7.
*/
#include <stdio.h>

int main(){
    float altura, sexo, alturaMetro, pesoIdeal;

    printf("\n SELECIONE SEU SEXO: \n");
    printf("\n Digite 1 para masculino. \n");
    printf(" Digite 2 para feminino.\n");
    scanf("%f%*c", &sexo);

    if (sexo == 1){
        printf("\n Digite sua altura cm: \n");
        scanf("%f%*c", &altura);
        alturaMetro = altura / 100;
        pesoIdeal = (72.7*alturaMetro) - 58;
        printf("Seu peso ideal eh: %.2fkg \n", pesoIdeal);

    }

    else if (sexo == 2){
        printf("\n Digite sua altura em cm: \n");
        scanf("%f%*c", &altura);
        alturaMetro = altura / 100;
        pesoIdeal = (62.1*alturaMetro) - 44.7;
        printf("Seu peso ideal eh: %.2fkg \n", pesoIdeal);

    }

    else{
        printf("Opcao invalida !!! \n");
    }
    
    return 0;
}