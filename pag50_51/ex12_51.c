#include <stdio.h>

int main(){
    float salarioM;
    float salarioF;
    float Nsalario;
    printf("qual eh o valor do salario minimo?\n");
    scanf("%f%*c", &salarioM);
    printf("quanto ganha o funcionario?\n");
    scanf("%f%*c", &salarioF);
    Nsalario = salarioF / salarioM;

    printf("o funcionario ganha %.2f, salarios", Nsalario);

    return 0;
}