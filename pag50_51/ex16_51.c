#include <stdio.h>
#include <math.h>

int main(){
    float cateto1;
    float cateto2;
    float hipotenusa;
    printf("qual o valor do primeiro cateto?\n");
    scanf("%f%*c", &cateto1);
    printf("qual o valor do segundo cateto?\n");
    scanf("%f%*c", &cateto2);
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    printf("a hipotenusa eh: %.2f", hipotenusa);


    return 0;
}