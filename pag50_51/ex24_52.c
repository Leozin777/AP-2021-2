#include <stdio.h>

int main(){
    float reais;
    float dolar;
    float marco;
    float libra;
    printf("digite a quantida em reais?\n");
    scanf("%f%*c", &reais);

    dolar = reais * 1.80;
    marco = reais * 2;
    libra = reais * 3.57;

    printf("em dolar, voce possui: US$ %.2f\n", dolar);
    printf("em marco alemão, voce possui: $ %.2f\n", marco);
    printf("em libra, voce possui: £ %.2f\n", libra);


    return 0;
}