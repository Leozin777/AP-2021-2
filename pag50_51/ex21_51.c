#include <stdio.h>

int main(){
    float Nhoras;
    float Vhoras;
    float NhorasE;
    float VhorasE;
    float salarioM;
    float salarioB;
    float salarioBE;
    float HE;
    float salarioF;

    printf("quantas horas voce trabalhou?(nao contabilizar as horas extras)\n");
    scanf("%f%*c", &Nhoras);
    printf("quanto eh o salario minimo?\n");
    scanf("%f%*c", &salarioM);
    printf("quantas horas extras voce fez?\n");
    scanf("%f%*c", & NhorasE);

    Vhoras = Nhoras * (salarioM / 8); 
    VhorasE = NhorasE * (salarioM / 4);
    salarioB = Nhoras * Vhoras;
    salarioBE = NhorasE * VhorasE;
    salarioF = salarioB + salarioBE;

    printf("voce vai receber R$ %.2f", salarioF);


    return 0;
}