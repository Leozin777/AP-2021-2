#include <stdio.h>

int main(){
    float tempC;
    float tempF;
    printf("qual a temperatura em C?\n");
    scanf("%f%*c", &tempC);
    tempF = (tempC * 9/5) + 32;
    printf("a temperatura em F eh: %.2f °C", tempF);

    return 0;
}