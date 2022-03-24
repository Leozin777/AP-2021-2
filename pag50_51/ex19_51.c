#include <stdio.h>

int main(){
    float l;
    float c;
    float m;
    float p;
    printf("Qual a Largura do seu quarto em metros?\n");
    scanf("%f*c",&l);
    printf("Qual o comprimento do seu quarto em metros?\n");
    scanf("%f*c",&c);
    m = l * c;
    p = m * 18;
            
    printf("O seu quarto tem '%f' metros quadrados.\n",m);
    printf("A potencia de iluminacao que devera ser utilizada eh:\n %.2f W",p);


    return 0;
}