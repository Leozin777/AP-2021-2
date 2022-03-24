/*
FUP que leia o código de um aluno e suas três notas. Calcule a média ponderada do aluno, considerando que o peso 
para a maior nota seja 4 e para as duas restantes, 3. Mostre o código do aluno, suas três notas, a média calculada 
e a mensagem “ APROVADO” se a média for maior ou igual a 7 e “REPROVADO” se a média for menor que 7.
*/
#include <stdio.h>

int main(){
    float n1, n2, n3, media;
    int cod, pesoMaior, pesoMenor;
    printf("Digite o codigo do aluno:\n");
    scanf("%d%*c", &cod);
    printf("Digite o valor da primeira nota:\n");
    scanf("%f%*c", &n1);
    printf("Digite o valor da segunda nota:\n");
    scanf("%f%*c", &n2);
    printf("Digite o valor da terceira nota:\n");
    scanf("%f%*c", &n3);

    pesoMaior = 4;
    pesoMenor = 3;
    if(n1 > n2 && n1 > n3){
        media = ((n1 * pesoMaior) + (n2 * pesoMenor)+ (n3 * pesoMenor))/10;
    } else if(n2 > n1 && n2 > n3){
        media = ((n1 * pesoMenor) + (n2 * pesoMaior)+ (n3 * pesoMenor))/10;
    } else{
        media = ((n1 * pesoMenor) + (n2 * pesoMenor)+ (n3 * pesoMaior))/10;
    }

    printf("O codigo do aluno eh: %d\n", cod);
    printf("A primeira nota dele foi: %.2f\n", n1);
    printf("A segunda nota dele foi: %.2f\n", n2);
    printf("A terceira nota dele foi: %.2f\n", n3);
    printf("A media dele eh %.2f\n", media);

    if(media >= 7){
        printf("APROVADO");
    } else{
        printf("REPROVADO");
    }



    return 0;
}